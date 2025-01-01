#include <bits/stdc++.h>
using namespace std;

class Count
{
      int val;
public:
      Count(int a = 0)
      {
            val = a;
      }
      void print()
      {
            cout << "Count: " << val << endl;
      }

      void operator ++()
      {
            val++;
      }
      void operator ++(int)
      {
            val++;
      }
      void operator -()
      {
            val = -val;
      }
};

int main()
{
      Count a(10);
      a.print();
      
      ++a;
      a.print();
      
      a++;
      a.print();
      
      -a;
      a.print();
}