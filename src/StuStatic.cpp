//
// Created by 16146 on 2024/10/6.
//
#include <iostream>
using namespace std;

class StuStatic
{
private:
   static int
     count;   // 静态成员变量属于类，不属于对象，所有对象共享一个静态成员变量

public:
   StuStatic() { count++; }
   ~StuStatic() { count--; }
   static int getCount() { return count; }
};
int StuStatic::count = 0;
int main()
{
   StuStatic s1;
   cout << StuStatic::getCount() << endl;
   StuStatic s2;
   cout << StuStatic::getCount() << endl;
   StuStatic s3;
   cout << StuStatic::getCount() << endl;
   {
      // 在作用域里面创建一个对象 跳出作用域之后执行析构函数
      StuStatic s4;
      cout << StuStatic::getCount() << endl;
   }
   cout << StuStatic::getCount() << endl;
   // 使用new创建一个对象，需要手动释放内存 然后执行析构函数
   auto *s5 = new StuStatic();
   cout << StuStatic::getCount() << endl;
   delete s5;
   cout << StuStatic::getCount() << endl;
   return 0;
}
