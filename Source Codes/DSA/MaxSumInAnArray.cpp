#include <bits/stdc++.h>
using namespace std;

int main()
{
      int a[] = {-1, 2, 4, -3, 5, 2, - 5, 2}, n = 8;
      
      int best = 0, sum = 0;
      for (int i = 0; i < n; i++)
      {
            sum = max(a[i], sum + a[i]);
            best = max(best, sum);
      }

      cout << best << endl;
}