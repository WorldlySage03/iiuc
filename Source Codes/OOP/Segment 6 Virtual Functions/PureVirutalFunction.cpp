#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
      virtual void fun() = 0;
};

class Derived: public Base
{
public:
      void fun() override
      {
            cout << "Derived" << endl;
      }
};

int main()
{
      Base *ptr = new Derived;
      ptr->fun();
}