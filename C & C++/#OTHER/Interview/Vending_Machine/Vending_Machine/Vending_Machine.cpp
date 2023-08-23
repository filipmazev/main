#include <iostream>
#include <map>
#include <thread>
#include <chrono>

constexpr auto MAX_SUGAR = 3;
constexpr auto MACHINE_NAME = "VISTA VENDING MACHINE";

std::map<int, std::string> sugar_map = {
    {0, "no sugar"}, {1, "low sugar"}, {2, "medium sugar"}, {3, "high sugar"}
};

void type_error() {
    std::cin.clear(); 
    std::cin.ignore(INT_MAX, '\n'); 
    std::cout << "Error: TYPE MISMATCH - You can only enter numbers: ";
}

void loading_animation(int duration=10) {
    int progress = duration;
    for (int i = 0; i <= progress; ++i) {
        std::cout << '[';
        for (int j = 0; j < progress; ++j) {
            if (j < i) { std::cout << '*';
            } else { std::cout << ' ';}
        }
        std::cout << "]\r"; std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(duration / progress));
    }
    std::cout << std::endl;
}

class Drink {
protected:
    char* name{ nullptr };
    size_t uuid{ 0 };
    double price{ 0.00 };
public:
    Drink() { }

    Drink(char* name, double price) {
        this->name = new char[strlen(name) + 1]; strcpy_s(this->name, strlen(name) + 1, name);
        this->price = price;
    }

    Drink(char* name, size_t uuid, double price) {
        this->name = new char[strlen(name) + 1]; strcpy_s(this->name, strlen(name) + 1, name);
        this->uuid = uuid; this->price = price;
    }

    Drink(Drink& drink) {
        if (this != &drink){
            this->name = new char[strlen(drink.name) + 1]; strcpy_s(this->name, strlen(drink.name) + 1, drink.name);
            this->uuid = drink.uuid; this->price = drink.price;
        }
    }

    ~Drink() {
        if (this->name != nullptr) {
            delete[] this->name; this->name = nullptr;
        }
    }
    
    void print_default() { printf("[#%03d] %5s %-20s (MKD %.2f)\n", uuid, "", name, price); }

    virtual void setSugarLevel() {  }

    virtual void print() { std::cout << this->name << std::endl; }
    
    char* getName() noexcept { return this->name; }
    
    void setID(size_t ID) { this->uuid = ID; }
    size_t getID () noexcept { return this->uuid; }
    
    double getPrice() noexcept { return this->price; }
};

class Coffee : public Drink {
private:
    int sugar_level{ 1 };
public:
    Coffee() : Drink() { }

    Coffee(char* name, double price) : Drink(name, price) { }

    Coffee(char* name, double price, int sugar_level=1) : Drink(name, price) { this->sugar_level = sugar_level > MAX_SUGAR ? MAX_SUGAR : (sugar_level < 0 ? 0 : sugar_level); }

    Coffee(char* name, size_t uuid, double price, int sugar_level=1) : Drink(name, uuid, price) { this->sugar_level = sugar_level > MAX_SUGAR ? MAX_SUGAR : (sugar_level < 0 ? 0 : sugar_level); }
    
    Coffee(Coffee& coffee) : Drink(coffee.name, coffee.uuid, coffee.price) { this->sugar_level = coffee.sugar_level > MAX_SUGAR ? MAX_SUGAR : (coffee.sugar_level < 0 ? 0 : coffee.sugar_level); }

    ~Coffee() {
        if (this->name != nullptr) {
            delete[] this->name; this->name = nullptr;
        }
    }

    void setSugarLevel() override { 
        int sugar; std::cout << "Choose sugar level [0-3]: "; 
        std::cin >> sugar;  while (std::cin.fail()) { type_error(); std::cin >> sugar; }
        this->sugar_level = sugar > MAX_SUGAR ? MAX_SUGAR : (sugar < 0 ? 0 : sugar); 
    }

    size_t getSugarLevel() { return this->sugar_level; }

    void print() override {
        std::cout << std::endl << "MAKING "; Drink::print();
       
        loading_animation(10);

        if (this->sugar_level) { 
            std::cout << "ADDING SUGAR (Level: " << this->sugar_level << " - " << sugar_map[this->sugar_level] << ") " << std::endl; 
            loading_animation(3);
        }

        std::cout << "ENJOY!" << std::endl;
    }
};

class Juice : public Drink {
public:
    Juice() : Drink() { }

    Juice(char* name, double price) : Drink(name, price) { }

    Juice(char* name, size_t uuid, double price) : Drink(name, uuid, price) { }

    Juice(Juice& juice) : Drink(juice.name, juice.uuid, juice.price) { }

    ~Juice() {
        if (this->name != nullptr) {
            delete[] this->name; this->name = nullptr;
        }
    }

    void print() override { 
        std::cout << std::endl << "PREPARING "; Drink::print(); 
        loading_animation(10);
        std::cout << "ENJOY!" << std::endl;
    }

    void setSugarLevel() override { }
};

class Vending_Machine {
private:
    std::map<size_t, std::unique_ptr<Drink>> drinks;
    size_t uuid{ 0 };
public:
    Vending_Machine() { }

    Vending_Machine(std::unique_ptr<Drink> d) {
        d->setID(uuid); drinks[uuid++] = std::move(d);
    }

    Vending_Machine& operator += (std::unique_ptr<Drink> d) {
        d->setID(uuid); drinks[uuid++] = std::move(d);
        return *this;
    }

    auto& operator[] (size_t index) {
        if (this->drinks.find(index) != drinks.end()) { 
            auto& get_drink = this->drinks[index];
            if (dynamic_cast<std::unique_ptr<Drink>*>(&get_drink) != NULL) {
                get_drink->setSugarLevel();
            }
            return get_drink;
        } else { throw std::out_of_range("INVALID INPUT"); }
    }

    void print_all() {
        printf("%9s -- %-20s --\n", "", MACHINE_NAME);

        for (const auto& pair : drinks) {
            const std::unique_ptr<Drink>& drinkPtr = pair.second;
            drinkPtr->print_default();
        }
    }

    ~Vending_Machine() { }
};

int main()
{
    std::unique_ptr<Juice> juice1 = std::make_unique<Juice>(const_cast<char*>("Orange Juice"), 60.00);
    std::unique_ptr<Coffee> coffee1 = std::make_unique<Coffee>(const_cast<char*>("Nescafe"), 40, -1);
    std::unique_ptr<Coffee> coffee2 = std::make_unique<Coffee>(const_cast<char*>("Americano"), 30, 5);
    std::unique_ptr<Coffee> coffee3 = std::make_unique<Coffee>(const_cast<char*>("Irish Coffee"), 70, 2);
    std::unique_ptr<Juice> juice2 = std::make_unique<Juice>(const_cast<char*>("Fruit Mix"), 85.50);

    Vending_Machine machine;
    machine += std::move(juice1); machine += std::move(coffee1); machine += std::move(coffee2); machine += std::move(juice2);
    machine.print_all();

    while (true) {
        int n; std::cout << std::endl << "Choose drink: "; std::cin >> n;  while (std::cin.fail()) { type_error(); std::cin >> n; }
        try {
            auto& drink = machine[n];
            if (drink != nullptr) { drink->print(); break; }
        } catch (const std::out_of_range& exception) {
            std::cout << "Error: " << exception.what() << std::endl;
        }
    }

    return 0;
}
