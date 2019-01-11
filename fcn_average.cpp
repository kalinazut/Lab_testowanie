#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
void myfun(std::vector<float> v){
std::for_each(v.begin(), v.end(), [](int i){ std::cout << i << ' '; });
int average = std::accumulate( v.begin(), v.end(), 0.0)/v.size();
std::cout << "The average is" << average << std::endl;    
}
 
int main()
{
    std::vector<float> v {1, 2, 4, 5, 8};
    myfun(v);
}
