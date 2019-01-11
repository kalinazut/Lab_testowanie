#include <iostream>
#include <complex>
#include <vector>
 
template<typename T1, typename T2, typename T3, typename T4>
void f(T1 v, T2 v1, T3 hi, T4 lo)
{
    for(int j=0;j<v.size();j++)
    {if (v[j]<hi && v[j]>lo)
        {v1.push_back(v[j]);
        std::cout<<v1[j];}}
    //return(v1);
}
 
int main()
{
    std::vector<int> v {1,2,3,4,5,6,7,1,2,3};
    std::vector<int> v1;
    int hi {5};
    int lo {2};
    f(v,v1,hi,lo);
}