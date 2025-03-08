#include <bits/stdc++.h>
using namespace std;

int main()
{
      string a = "abc";

      for (int i = 0; i < 6; i++)
      {
            cout << a << endl;
            next_permutation(a.begin(), a.end());
      }

      cout << endl;
      for (int i = 0; i < 6; i++)
      {
            prev_permutation(a.begin(), a.end());
            cout << a << endl;
      }
}
