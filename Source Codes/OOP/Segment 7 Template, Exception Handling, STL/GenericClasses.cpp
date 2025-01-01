#include <bits/stdc++.h>
using namespace std;

template<typename haha> class Calculator
{
      haha x, y;
public:
      Calculator(haha a, haha b)
      {
            x = a;
            y = b;
      }

      void print()
      {
            cout << "Plus: " << x + x << endl;
            cout << "Minus: " << x - y << endl;
            cout << "Multi: " << x * y << endl;
            cout << "Div: " << x / y << endl;
      }
};

int main()
{
      Calculator<int> a(20, 10);
      a.print();
      
      cout << endl;
      Calculator<double> b(10.677734, 2.149);
      b.print();
}