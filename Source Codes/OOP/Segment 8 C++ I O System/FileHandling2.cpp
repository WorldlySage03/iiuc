#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
      ofstream fin;
      fin.open("RAND.TXT", ios::out);

      for (int i = 0; i < 100; i++)
      {
            fin << i + 1 << ' ';
      }
      fin.close();

      ifstream fout;
      fout.open("RAND.TXT", ios::in);
      while (fout)
      {
            int t;
            fout >> t;
            cout << t << ' ';
      }
      fout.close();
}