#include<iostream>
using namespace std;

class Foo
{
  public:
    Foo() {};
    Foo(int a) {};
    void bar() {};
};
int main()
{
 // this works...
  Foo foo1(1);
  foo1.bar();
 // this does not...
  Foo foo2();
  foo2.bar();
  return 0;
}