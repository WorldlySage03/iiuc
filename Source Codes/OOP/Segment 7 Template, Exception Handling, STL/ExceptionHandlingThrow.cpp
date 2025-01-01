#include <bits/stdc++.h>
using namespace std;

int main()
{
      double a, b;
      cin >> a >> b;

      try
      {
            if (b == 0) throw "Undefined";
            cout << "a / b: " << a / b << endl;
      }
      catch(char const *str)
      {
            cout << str << endl;
      }

      try
      {
            if (b == 0) throw 0;
            cout << "a / b: " << a / b << endl;
      }
      catch(...)
      {
            cout << "Error" << endl;
      }
}