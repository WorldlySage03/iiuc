#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
      virtual void fun()
      {
            cout << "Base" << endl;
      }
};

class Derived: public Base
{
      void fun() override
      {
            cout << "Derived" << endl;
      }
};

int main()
{
      Base *ptr;
      Base ob1;
      Derived ob2;

      ptr = &ob1;
      ptr->fun();

      ptr = &ob2;
      ptr->fun();
}