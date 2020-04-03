#include <iostream>

int main()
{
     float first,second,add;
     char op;
     std::cout << std::endl << " CALCULATOR ";
     std::cout << std::endl <<"Enter a number : ";
     std::cin >> first;
       std::cout << std::endl <<"Enter operation ( +, -, *, / ) : ";
     std::cin >> op;
     std::cout << std::endl <<"Enter second number :";
     std::cin >> second;
     if (op=='+') add = (float)first + (float)second;
     if (op=='-') add = (float)first - (float)second;
     if (op=='*') add = (float)first * (float)second;
     if (op=='/') add = (float)first / (float)second;
     std::cout << std::endl << "The result is = "<<add;
     return 0;
}  
