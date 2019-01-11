#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <functional>
 
int main()
{
    std::vector<float> v{-0.5, 9, 4, 1, 5, -9};
    std::vector<float> v1(v);
    for(int i=0;i<v1.size();i++){if(v1[i]<0){v1[i]*=-1;};};
    for(int i=0;i<v1.size();i++)std::cout<<v1[i]<<" ";
    std::vector<float>::iterator result = std::min_element(std::begin(v1), std::end(v1));
    std::cout << "min element at: " << std::distance(std::begin(v1), result);
}