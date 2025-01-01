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

      Count operator &(Count a)
      {
            return val & val;
      }
      Count operator !()
      {
            return !val;
      }
};

int main()
{
      Count a(2), b(3), c;
      
      c = a & b;
      c.print();
      
      c = !a;
      c.print();
}