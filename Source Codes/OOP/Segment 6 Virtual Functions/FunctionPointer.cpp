#include <bits/stdc++.h>
using namespace std;

void display(int x)
{
      cout << x << endl;
}

void print(int x)
{
      cout << x << endl;
}

float fun(long long x)
{
      return 1;
}

int main()
{
      //Early Binding
      display(10);

      //Late Binding
      void (*funcPtr)(int) = display;
      funcPtr(10);

      //Late Binding
      funcPtr = print;
      funcPtr(100);

      //Late Binding
      float (*funcPtr2)(long long) = fun;
      int t = funcPtr2(43084389014309842);
      cout << t << endl;
}