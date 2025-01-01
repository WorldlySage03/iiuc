#include <bits/stdc++.h>
using namespace std;

template<typename all> all add(all a, all b)
{
      return a + b;
}

int main()
{
      int a = 3, b = 4;
      cout << add(a, b) << endl;

      double c = 9.5, d = 1.112;
      cout << add(c, d) << endl;

      char e = 'A', f = '0';
      cout << add(e, f) << endl;
}