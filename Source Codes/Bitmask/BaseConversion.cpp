#include <bits/stdc++.h>
using namespace std;

void toDecimal()
{
      string n;
      long long int x, orgNum = 0;

      cin >> n >> x;
      reverse(n.begin(), n.end());

      for (int i = 0; i < n.size(); i++)
      {
            char temp;

            if ('0' <= n[i] && n[i] <= '9') temp = '0';
            else if ('A' <= n[i] && n[i] <= 'Z') temp = 'A' - 10;

            orgNum += (n[i] - temp) * pow(x, i); 
      }

      cout << orgNum << endl;
}

void toBase()
{
      int n, x;
      string ansNum;
      cin >> n >> x;

      char base[x];
      for (int i = 0; i < x; i++)
      {
            if (i < 10) base[i] = i + '0';
            else base[i] = i + 'A' - 10; 
      }

      while (n != 0)
      {
            ansNum += base[n % x];
            n /= x;
      }
      reverse(ansNum.begin(), ansNum.end());

      cout << ansNum << endl;
}

int main()
{
      int t;
      cin >> t;

      // if t = 1 then Convert N from base X to decimal.
      // if t = 2 then Convert N from decimal to base X.

      if (t == 1) toDecimal();
      else toBase();
}
