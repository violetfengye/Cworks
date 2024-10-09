//
// Created by 16146 on 2024/10/6.
//

#ifndef CWORKS_ANIMAL_H
#define CWORKS_ANIMAL_H
class Animal
{
public:
   static int count;
   Animal() { count++; }
   ~Animal() { count--; }
   //   virtual void eat()   = 0;
   //   virtual void sleep() = 0;
   //   virtual void play()  = 0;
};
#endif   // CWORKS_ANIMAL_H
