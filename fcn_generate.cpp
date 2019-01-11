#include <algorithm>
#include <iostream>
#include <vector>
 
int f()
{ 
    static int i = 1;
    return i++;
}
 
int main()
{
    std::vector<int> v(10);
    std::generate(v.begin(), v.end(), f);
 
    std::cout << "v: ";
    for (auto iv: v) {
        std::cout << iv << " ";
    }
    std::cout << "\n";
 
    // Initialize with default values 0,1,2,3,4 from a lambda function
    // Equivalent to std::iota(v.begin(), v.end(), 0);
    std::generate(v.begin(), v.end(), [n = 1] () mutable { return n++; });
 
    std::cout << "v: ";
    for (auto iv: v) {
        std::cout << iv << " ";
    }
    std::cout << "\n";
}
