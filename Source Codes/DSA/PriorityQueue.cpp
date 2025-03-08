#include <bits/stdc++.h>
using namespace std;

int main()
{
      priority_queue<int, vector<int>, greater<>> a;
      a.push(2);
      a.push(4);
      a.push(1);

      while (!a.empty())
      {
            cout << a.top() << " " << a.size() << endl;
            a.pop();
      }
}