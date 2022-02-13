#include <iostream>
#include <vector>
#include <cstring>
#include <bitset>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main()
{
   double t=100;
   for (auto i=0; i<10; i++){
       t+= t*0.07;
   }
   cout << "t= " << t << endl;
}