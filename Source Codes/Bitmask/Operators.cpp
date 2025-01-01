#include <bits/stdc++.h>
using namespace std;

int main()
{
      int x = 13; // 1 1 0 1

      x = x ^ (1 << 1); // 1 1 1 1
      cout << x << endl;
      
      x = x ^ (1 << 2); // 1 0 1 1
      cout << x << endl;
      
      x = x >> 2; // 0 0 1 0
      cout << x << endl;
      
      x = x << 3; // 1 1 0 0 0
      cout << x << endl;
}
