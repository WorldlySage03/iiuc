#include <bits/stdc++.h>
using namespace std;

int main()
{
      vector<int> a({10, 20, 30});
      vector<int> b = {10, 20, 30};

      cout << "A: ";
      for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
      cout << endl;

      cout << "B: ";
      vector<int>::iterator it = b.begin();
      for (; it != b.end(); it++)
            cout << *it << " ";
      cout << endl;

      cout << "A: ";
      a.insert(a.begin() + 1, 15);
      for (auto i: a)
            cout << i << ' ';
      cout << endl;

      cout << "B: ";
      b.erase(b.begin() + 1);
      for (auto i: b)
            cout << i << ' ';
      cout << endl;

      cout << "A: ";
      a.erase(a.begin(), a.begin() + 2);
      for (auto i: a)
            cout << i << ' ';
      cout << endl;

      a.clear();
      cout << "Size of A: " << a.size() << endl;
}