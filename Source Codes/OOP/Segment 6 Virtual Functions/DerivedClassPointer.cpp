#include <bits/stdc++.h>
using namespace std;

class A
{
      int x;
public:
      void setx(int a = 0)
      {
            x = a;
      }
      void getx()
      {
            cout << x << endl;
      }
};

class B: public A
{
};

int main()
{
      A *ptr, *ptr2 = new B;
      B a;

      ptr = &a;
      ptr->setx(10);
      ptr->getx();

      (*ptr).setx(199);
      (*ptr).getx();

      ptr2->setx(1000);
      ptr2->getx();
}