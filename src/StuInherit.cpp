//
// Created by 16146 on 2024/10/6.
//
#include <iostream>
using namespace std;
class Student
{
public:
   Student(int n, string name, int a) : num(n), sname(name), age(a) {}
   void display()
   {
      cout << "num:" << num << endl;
      cout << "name:" << sname << endl;
      cout << "age:" << age << endl;
   }
   int    getnum() { return num; }
   string getname() { return sname; }
   int    getage() { return age; }

protected:
   int    num;
   string sname;
   int    age;
};
class Student1 : public Student
{
public:
   Student1(int n, string name, int a, int s) : Student(n, name, a)
   {
      score = s;
   }
   void display()
   {
      cout << "num:" << num << endl;
      cout << "name:" << sname << endl;
      cout << "age:" << age << endl;
      cout << "score:" << score << endl;
   }
   int getscore() const { return score; }

private:
   int score;
};
int main()
{
   Student1 s1(1001, "Tom", 18, 90);
   s1.display();
   return 0;
}