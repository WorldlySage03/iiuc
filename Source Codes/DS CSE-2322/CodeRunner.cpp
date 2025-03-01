#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
      ofstream fout;
      fout.open("RAND.DAT", ios::out);

      for (int i = 1; i <= 100; i++)
      {
            fout << rand() << endl;
      }
      fout.close();

      ifstream fin;
      fin.open("RAND.DAT", ios::in);

      while (fin)
      {
            int x;
            fin >> x;
            cout << x << endl;
      }
      fin.close();
}
