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

      void operator =(Count a)
      {
            val = a.val;
      }
      void operator *=(Count a)
      {
            val *= a.val;
      }
      bool operator !=(Count a) // Logical Operator
      {
            return val != a.val;
      }
};

int main()
{
      Count a(10), b;

      b = a;
      b.print();
      b *= a;
      b.print();
}