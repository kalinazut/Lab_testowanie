#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    //int i;
    std::list<int> l1;
    std::list<int> l2;
    std::list<int> l3;
    l1={1,2,3};
    for(int i=0;i<3;i++)
    l1.push_front(rand()%100);
    l2.assign(l1.begin(),l1.end());
    l2.splice(l2.end(), l1);
    for(list<int>::iterator i=l1.begin();i!=l1.end();i++)
    {cout<<*i<<" ";};
    cout<<endl;
    for(list<int>::iterator i=l2.begin();i!=l2.end();i++)
    {cout<<*i<<" ";};
    
    return 0;
}