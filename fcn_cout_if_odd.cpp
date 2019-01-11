#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
 
void myfun(std::vector<float> v){
int odd=std::count_if(v.begin(), v.end(), [](int i){return i % 2 != 0;});
std::cout << "Odd numbers: " << odd << std::endl;
    
}
 
int main()
{
    std::vector<float> v {1, 2, 4, 5, 8};
    myfun(v);
}
