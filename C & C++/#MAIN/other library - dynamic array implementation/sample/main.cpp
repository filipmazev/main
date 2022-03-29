#include <iostream>
#include <string> //not required, for to_string function in Class_Example
#include "other/arr.h" //if linked: #include <other/arr.h>

class Class_Example
{
private:
    int n{0}; std::string str;
public:
    Class_Example(){ this->n=0; }
    Class_Example(int n, std::string str){ this->n=n; this->str = str; this->str += std::to_string(n+1); }

    friend std::ostream &operator << (std::ostream &out, Class_Example &other){ out<<" "<<other.n<<" "<<other.str<<" |"; return out; }

    ~Class_Example(){}
};

int main()
{
    //initialization syntax: std::oth::arr<typename> name_of_arr; | accepts all types

    /*
    std::oth::arr<int> my_arr_of_ints; //initializes an array of integers with size 0 set as a NULL pointer | int *arr = nullptr;
    std::oth::arr<float> my_arr_of_floats; //initializes an array of floats with size 0 set as a NULL pointer | floats *arr = nullptr;
    std::oth::arr<double> my_arr_of_doubles; //initializes an array of doubles with size 0 set as a NULL pointer | double *arr = nullptr;
    std::oth::arr<char> my_arr_of_chars; //initializes an array of chars with size 0 set as a NULL pointer | char *arr = nullptr;
    std::oth::arr<std::string> my_arr_of_strings; //initializes an strings of integers with size 0 set as a NULL pointer | string *arr = nullptr;
    std::oth::arr<Class_Example> my_arr_of_objects; //initializes an array of objects from a certain class with size 0 set as a NULL pointer | Class_Example *arr = nullptr;
    */

    /**
    operator =  | copy (1) | arr &operator = (const arr &x); | The copy assignment (1) copies all the elements from x into the container (with x preserving its contents).
    operator [] | auto operator[] (size_type n); | Returns the element at position n in the arr container.
    operator << | friend std::ostream &operator << (std::ostream &input, const arr &x); | prints every element in array from range array.begin() to array.end()
    operator >> | friend std::istream &operator >> (std::istream &input, const arr &x); | input<<arr[size++]; return input; | enter a element in array, expands the array for size of n+1
    push_back() | push_back an element in array, expands the array for size of n+1
    set()       | set(size_t index, element) | sets the value of the array element at index (size_t index) to the sent element if in range, otherwise throws bad::alloc
    assign()    | syntax: my_array.assign(element1, element2, element3 ... ) | changes the size and values of the current array to whatever is assigned in the parameter pack (...)
    insert()    | syntax: my_array.insert(element1, element2, element3 ... ) | appends the values in parameter pack (...) to the end of the array and changes its size accordingly
    pop_back()  | pop back the array for one element, reduces the size of the array for n-=1
    clear()     | deletes every element in the array and sets the size to 0
    erase()    | remove(size_t i) remove a specific element in array at index size_t i
    front()     | returns the first element of the array, element at position 0
    back()      | return the last element of the array, element at position size-1
    size()      | returns the current size of the array
    resize()    | change the size of the array
    */

    // EXAMPLE CODE
    std::oth::arr<Class_Example> my_arr_of_objects; int n=5;

    for(int i=0; i<n; i++){ Class_Example obj = Class_Example(i, "test"); my_arr_of_objects.push_back(obj); }

    //operator >>
    std::cout<<" operator >> \t \t |"<<my_arr_of_objects<<std::endl;

    //operator []
    std::cout<<" operator [] \t \t |"<<my_arr_of_objects[n-1]<<std::endl;

    //erase()
    std::cout<<" function erase() \t |"; my_arr_of_objects.erase(n-1); std::cout<<my_arr_of_objects<<std::endl;

    //pop_back()
    std::cout<<" function pop_back() \t |"; my_arr_of_objects.pop_back(); std::cout<<my_arr_of_objects<<std::endl;

    //size()
    std::cout<<" function size() \t | size: "<<my_arr_of_objects.size()<<std::endl;

    //resize()
    std::cout<<" function resize() \t | new size: "; my_arr_of_objects.resize(n/2); std::cout<<my_arr_of_objects.size()<<std::endl;

    //print()
    std::cout<<" function print() \t |"; my_arr_of_objects.print(); std::cout<<std::endl;

    //set()
    Class_Example obj_set = Class_Example(1, "set");
    std::cout<<" function set() \t |"; my_arr_of_objects.set(0, obj_set); my_arr_of_objects.print(); std::cout<<std::endl;

    //clear()
    std::cout<<" function clear() \t | size: "; my_arr_of_objects.clear(); std::cout<<my_arr_of_objects.size(); my_arr_of_objects.print(); std::cout<<std::endl;

    std::cout<<std::endl<<" DYNAMIC RESIZING WITH INSERT AND ASSIGN: "<<std::endl<<std::endl;

    //assign
    Class_Example obj1(0, "assign"); Class_Example obj2(1, "assign"); Class_Example obj3(2, "assign"); my_arr_of_objects.assign(obj1, obj2, obj3);
    std::cout<<" function assign() \t | size: "; std::cout<<my_arr_of_objects.size()<<" | "; my_arr_of_objects.print(); std::cout<<std::endl;

    //resize
    my_arr_of_objects.resize(2);
    std::cout<<" function resize() \t | size: "; std::cout<<my_arr_of_objects.size()<<" | "; my_arr_of_objects.print(); std::cout<<std::endl;

    //pop_back
    my_arr_of_objects.pop_back();
    std::cout<<" function pop_back() \t | size: "; std::cout<<my_arr_of_objects.size()<<" | "; my_arr_of_objects.print(); std::cout<<std::endl;

    //insert
    Class_Example obj4(3, "insert"); Class_Example obj5(4, "insert"); my_arr_of_objects.insert(obj4, obj5);
    std::cout<<" function insert() \t | size: "; std::cout<<my_arr_of_objects.size()<<" | "; my_arr_of_objects.print(); std::cout<<std::endl;

    //clear
    std::cout<<" function clear() \t | size: ";  my_arr_of_objects.clear(); std::cout<<my_arr_of_objects.size()<<std::endl;

    return 0;
}
