#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
      int x;
      Base(int i = 0) { x = i; }
      virtual void fun()
      {
            cout << x << endl;
      }
};

class Derived1: public Base
{
public:
      Derived1(int i): Base(i) {};
      void fun() override
      {
            cout << x * x << endl;
      }
};

class Derived2: public Base
{
public:
      Derived2(int i): Base(i) {};
      void fun() override
      {
            cout << x + x << endl;
      }
};

int main()
{
      Base *ptr = new Base(10);
      ptr->fun();

      ptr = new Derived1(10);
      ptr->fun();

      ptr = new Derived2(10);
      ptr->fun();
}