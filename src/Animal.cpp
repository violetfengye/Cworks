//
// Created by 16146 on 2024/10/6.
//
#include "Animal.h"

#include <iostream>
using namespace std;

int Animal::count = 0;

class panda : public Animal
{
public:
   panda() { cout << "panda" << endl; }
   ~panda() { cout << "~panda" << endl; }
};

int main()
{
   auto *p = new panda();
   cout << "count = " << Animal::count << endl;
   delete p;
   {
      panda p1;
      cout << "count = " << Animal::count << endl;
   }
   cout << "count = " << Animal::count << endl;

   return 0;
}