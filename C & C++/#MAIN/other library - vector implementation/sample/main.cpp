#include <iostream>
#include "other/vector.h"

int main()
{
    std::oth::vector<std::string> my_vector;
    int n; std::cin>>n; for(int i=0; i<n; i++){ std::cin>>my_vector; }
    std::cout<<my_vector;
}
