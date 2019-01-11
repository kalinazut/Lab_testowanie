#include <iostream>
#include <chrono>
#include <vector>
#include <list>
#include <array>

struct product {
  std::string name;
  double price;
};
main()
{
    //add int to vector
    std::vector<int> v1;
    std::chrono::system_clock::now();
    auto start_v1 = std::chrono::system_clock::now();
      for(int i=0;i<1000000;i++)
         v1.push_back(rand());
   auto end_v1 = std::chrono::system_clock::now();
   auto elapsed_v1 = end_v1 - start_v1;
   std::cout << "add int to vector "<<elapsed_v1.count() <<std::endl;
   //find value at specific position
   auto start_v1_f = std::chrono::system_clock::now();
         //v1[666];
         auto it_v=std::next(v1.begin(), 666);
   auto end_v1_f = std::chrono::system_clock::now();
   auto elapsed_v1_f = end_v1_f - start_v1_f;
   std::cout << "finding value in vector "<<elapsed_v1_f.count() <<std::endl;
   //add int to list
   std::list<int> l1;
    std::chrono::system_clock::now();
    auto start_l1 = std::chrono::system_clock::now();
      for(int i=0;i<1000000;i++)
         l1.push_back(rand());
   auto end_l1 = std::chrono::system_clock::now();
   auto elapsed_l1 = end_l1 - start_l1;
   std::cout << "add int to list "<<elapsed_l1.count() <<std::endl;
      //find value at specific position
   auto start_l1_f = std::chrono::system_clock::now();
         auto it_l=std::next(l1.begin(), 666);
   auto end_l1_f = std::chrono::system_clock::now();
   auto elapsed_l1_f = end_l1_f - start_l1_f;
   std::cout << "finding value in list"<<elapsed_l1_f.count() <<std::endl;
   //add float to vector
       std::vector<float> v2;
    std::chrono::system_clock::now();
    auto start_v2 = std::chrono::system_clock::now();
      for(int i=0;i<1000000;i++)
         v2.push_back(rand());
   auto end_v2 = std::chrono::system_clock::now();
   auto elapsed_v2 = end_v2 - start_v2;
   std::cout << "add float to vector "<<elapsed_v2.count() <<std::endl;
   //add float to list
   std::list<float> l2;
    std::chrono::system_clock::now();
    auto start_l2 = std::chrono::system_clock::now();
      for(int i=0;i<1000000;i++)
         l2.push_back(rand());
   auto end_l2 = std::chrono::system_clock::now();
   auto elapsed_l2 = end_l2 - start_l2;
   std::cout << "add float to list "<<elapsed_l2.count() <<std::endl;
}