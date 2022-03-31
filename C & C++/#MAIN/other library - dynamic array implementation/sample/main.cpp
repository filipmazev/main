#include <iostream>
#include <string> //not required, for to_string function in Class_Example
#include "other/arr.h" //if linked: #include <other/arr.h>

//example class for use in (1) EXAMPLE CODE
class Class_Example
{
private:
    int n{0}; std::string str;
public:
    Class_Example(){ this->n=0; }
    Class_Example(int n, std::string str){ this->n=n; this->str = str; this->str += std::to_string(n+1); }

    friend std::ostream &operator << (std::ostream &out, Class_Example &other){ out<<other.n<<" "<<other.str<<" |"; return out; }

    friend bool operator == (const Class_Example &curr, const Class_Example &other){ return (curr.n == other.n && curr.str == other.str); }

    friend bool operator != (const Class_Example &curr, const Class_Example &other){ return !(curr == other); }

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
    operator =   | copy (1) | arr &operator = (const arr &x); | The copy assignment (1) copies all the elements from x into the container (with x preserving its contents).
    operator ==  | friend bool operator == (const arr &curr, const arr &other) | compares all elements of two arrays if they are equal.
    operator !=  | friend bool operator != (const arr &curr, const arr &other) | compares all elements of two arrays if they are not equal.
    operator +=  | arr &operator += (auto element) | pushes back the element sent as auto element into the array, increases the size of the array by one.
    operator -=  | arr &operator -= (auto element) | eliminates the first found element that matches what was sent as auto element
    operator ++  | arr &operator ++ () | increases the size of the array by one.
    operator --  | arr &operator -- () | decreases the size of the array by one.
    operator <<  | friend std::ostream &operator << (std::ostream &input, const arr &x); | prints every element in array from range array.begin() to array.end()
    operator >>  | friend std::istream &operator >> (std::istream &input, const arr &x); | input<<arr[size++]; return input; | enter a element in array, expands the array for size of n+1
    operator []  | auto operator[] (size_type n); | Returns the element at position n in the arr container.
    resize()     | change the size of the array
    compact()    | removes all empty elements of the array and changes the size accordingly
    push_back()  | append an element at the end of an array
    push_front() | append an element at the begging of an array
    set()        | set(size_t index, element) | sets the value of the array element at index (size_t index) to the sent element if in range, otherwise throws bad::alloc
    assign()     | syntax: my_array.assign(element1, element2, element3 ... ) | changes the size and values of the current array to whatever is assigned in the parameter pack (...)
    insert()     | syntax: my_array.insert(element1, element2, element3 ... ) | appends the values in parameter pack (...) to the end of the array and changes its size accordingly
    pop_back()   | removes the last element of the array
    pop_front()  | removes the first element of the array
    erase()      | erase(size_t i), erase a specific element in the array at index size_t i and change the size of the array accordingly
    remove()     | remove(size_t i), remove a specific element in the array at index size_t i, does not change the size of the array
    clear()      | deletes every element in the array and sets the size to 0
    front()      | returns the index of the first element of the array
    back()       | returns the index of the last element of the array
    at()         | at(size_t index), returns the element at sent index
    size()       | returns the current size of the array
    length()     | returns the current number of populated elements in the array
    print()      | prints all non-empty elements of the array
    show()       | prints all elements of the array
    */

    // EXAMPLE CODE (1)
    std::oth::arr<Class_Example> my_arr_of_objects; std::cout<<std::endl<<"Enter size: "; int n; std::cin>>n; std::cout<<std::endl;
    for(int i=0; i<(n==0?n+1:n); i++){ ++my_arr_of_objects; Class_Example obj = Class_Example(i, "test"); my_arr_of_objects.set(i,obj); }

    //size()
    std::cout<<"function size() | size: "<<my_arr_of_objects.size()<<std::endl;

    //operator >>
    std::cout<<"operator >> | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //operator [] & front() | back()
    std::cout<<"operator [], front/back | size: "; std::cout<<my_arr_of_objects.size()<<"  | front: ";
    std::cout<<my_arr_of_objects[my_arr_of_objects.front()]<<" back: "<<my_arr_of_objects[my_arr_of_objects.back()]<<std::endl;

    //resize()
    my_arr_of_objects.resize(50);
    std::cout<<"function resize() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //set() & operator ++
    my_arr_of_objects.clear(); for(int i=0; i<(n==0?n+1:n); i++){ ++my_arr_of_objects; Class_Example obj = Class_Example(i, "test"); my_arr_of_objects.set(i,obj); }
    Class_Example obj_set = Class_Example(1, "set"); my_arr_of_objects.set(48, obj_set);
    std::cout<<"function set() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //operator =
    std::oth::arr<Class_Example> new_obj_list = my_arr_of_objects;
    std::cout<<"operator = | size: "; std::cout<<new_obj_list.size()<<std::endl; std::cout<<new_obj_list<<std::endl;

    //operator -=
    my_arr_of_objects-=obj_set;
    std::cout<<"operator -= | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //operator !=
    new_obj_list = my_arr_of_objects; bool check = my_arr_of_objects != new_obj_list;
    std::cout<<"operator != | true(1)/false(0): "; std::cout<<check<<std::endl;

    //operator +=
     my_arr_of_objects+=obj_set;
    std::cout<<"operator += | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //operator ==
    check = my_arr_of_objects == new_obj_list;
    std::cout<<"operator == | true(1)/false(0): "; std::cout<<check<<std::endl;

    //operator --
    --my_arr_of_objects;
    std::cout<<"operator -- | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //assign
    Class_Example obj1(0, "assign"); Class_Example obj2(1, "assign"); Class_Example obj3(2, "assign"); my_arr_of_objects.assign(obj1, obj2, obj3);
    std::cout<<"function assign() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; my_arr_of_objects.print(); std::cout<<std::endl;

     //insert
    Class_Example obj4(3, "insert"); Class_Example obj5(4, "insert"); my_arr_of_objects.insert(obj4, obj5);
    std::cout<<"function insert() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; my_arr_of_objects.print(); std::cout<<std::endl;

    //push_front
    my_arr_of_objects.push_front(obj_set);
    std::cout<<"function push_front() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //push_back()
    my_arr_of_objects.push_back(obj_set);
    std::cout<<"function push_back() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl; std::cout<<my_arr_of_objects<<std::endl;

    //pop_front
    my_arr_of_objects.pop_front();
    std::cout<<"function pop_front() | size: "; std::cout<<my_arr_of_objects.size()<<" | "; my_arr_of_objects.print(); std::cout<<std::endl;

    //pop_back()
    my_arr_of_objects.pop_back();
    std::cout<<"function pop_back() | size: "; std::cout<<my_arr_of_objects.size()<<" | "; std::cout<<my_arr_of_objects<<std::endl;

    //erase()
    my_arr_of_objects.erase(2);
    std::cout<<"function erase() | size: "; std::cout<<my_arr_of_objects.size()<<" | "; std::cout<<my_arr_of_objects<<std::endl;

    //erase()
    my_arr_of_objects.remove(0);
    std::cout<<"function erase() | size: "; std::cout<<my_arr_of_objects.size()<<" | "; std::cout<<my_arr_of_objects<<std::endl;

    //show()
    my_arr_of_objects.resize(9); my_arr_of_objects.set(7,obj_set);
    std::cout<<"function show() | size: "; std::cout<<my_arr_of_objects.size()<<" | "<<std::endl; my_arr_of_objects.show(); std::cout<<std::endl;

    //compact()
    my_arr_of_objects.compact();
    std::cout<<"function compact() | size: "; std::cout<<my_arr_of_objects.size()<<" | "<<std::endl; my_arr_of_objects.show(); std::cout<<std::endl;

    //clear
    my_arr_of_objects.clear();
    std::cout<<"function clear() | size: "; std::cout<<my_arr_of_objects.size()<<std::endl<<std::endl; my_arr_of_objects.show(); std::cout<<std::endl;

    return 0;
}
