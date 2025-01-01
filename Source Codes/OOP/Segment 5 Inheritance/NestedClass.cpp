#include <bits/stdc++.h>
using namespace std;

class A
{
public:
      int n;
      A(int a){ n = a; }
      void print() { cout << n << endl; }

      class B
      {
      public:
            int n;
            B(int a){ n = a; }
            void print() { cout << n << endl; }

            class C
            {
            public:
                  int n;
                  C(int a){ n = a; }
                  void print() { cout << n << endl; }
            };
      };
};

int main()
{
      A a(10);
      a.print();

      A :: B b(20);
      b.print();

      A :: B :: C c(30);
      c.print();
}