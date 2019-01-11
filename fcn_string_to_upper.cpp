#include <algorithm>
#include <iostream>
#include <vector>
 
void myfun(std::string v){
    std::locale loc;
      for (std::string::size_type i=0; i<v.length(); ++i)
    std::cout << std::toupper(v[i],loc);
    
}
 
int main()
{
    std::string v = "bylo sobie zycie";
    myfun(v);
   
}
