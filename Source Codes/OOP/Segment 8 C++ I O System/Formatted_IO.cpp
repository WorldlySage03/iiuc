#include <bits/stdc++.h>
using namespace std;

int main()
{
      // cout.width
      char a = 'a';
      string b = "abc";
      
      cout.width(7);
      cout << a << endl;

      cout.width(7);
      cout << b << endl << endl;

      // cout.precision
      double pi = 3.1415926;
      cout.precision(6);
      cout << pi << endl << endl;

      // cout.fill
      cout.fill('.');
      cout.width(7);
      cout << a << endl << endl;

      // cout.setf(ios::showpos) - Adds '+' in front
      cout.setf(ios::showpos);
      cout << pi << endl << endl;

      // cout.setf(ios::showpoint) && cout.unsetf(ios::showpoint)
      // Shows 0's after '.'          Doesn't show 0's after '.'
      cout.setf(ios::showpoint);
      cout << 10.2 << endl;
      cout.unsetf(ios::showpoint);
      cout.unsetf(ios::showpos);
      cout << 10.2 << endl << endl;
}