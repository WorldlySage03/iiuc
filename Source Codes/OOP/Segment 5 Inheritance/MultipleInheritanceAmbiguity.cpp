#include <bits/stdc++.h>
using namespace std;

class A
{
public:
      void display()
      {
            cout << "This is A" << endl;
      }
};

class B
{
public:
      void display()
      {
            cout << "This is B" << endl;
      }
};

class C: public A, public B
{
};

int main()
{
      C a;
      a.A::display();
      a.B::display();
}