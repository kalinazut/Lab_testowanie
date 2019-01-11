#include <iostream>
#include <complex>
#include <vector>
 
template<typename T1, typename T2, typename T3>
void f(T1 v, T2 i, T3 v1)
{
    for(int j=0;j<v.size();j++)
    {v1[j]=std::pow(v[j],i);
    std::cout<<v1[j];}
    //return(v1);
}
 
int main()
{
    std::vector<int> v {1,2,3,4,5,6,7,1,2,3};
    std::vector<int> v1(v);
    int i {2};
    f(v,i,v1);
}
