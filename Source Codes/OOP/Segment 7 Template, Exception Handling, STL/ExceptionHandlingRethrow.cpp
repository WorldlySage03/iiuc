#include <bits/stdc++.h>
using namespace std;

void func()
{
      try
      {
            throw "Error";
      }
      catch(const char *t)
      {
            cout << "func(): " << t << endl;
            throw; // Rethrow
      }
}

int main()
{
      try
      {
            func();
      }
      catch(const char *t)
      {
            cout << "main(): " << t << endl;
      }
}