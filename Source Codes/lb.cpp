#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> a = {2, 3, 6, 7, 9};

      vector<int>::iterator it1 = lower_bound(a.begin(), a.end(), 3);
      vector<int>::iterator it2 = lower_bound(a.begin(), a.end(), 9);

      cout << *it1 << " " << *it2 << endl;

      int t = it2 - it1;
      cout << t << endl;
}