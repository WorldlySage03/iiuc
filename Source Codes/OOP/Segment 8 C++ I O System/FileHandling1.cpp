#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
      ofstream fout;
      fout.open("a.txt", ios::out);

      while(1)
      {
            string name, id;

            getline(cin, name);
            if (name == "-1") break;
            getline(cin, id);

            fout << "Name : " << name << endl;
            fout << "ID   : " << id << endl << endl;
      }
      fout.close();

      ifstream fin;
      fin.open("a.txt", ios::in);
      while(fin)
      {
            string s;
            getline(fin, s);
            cout << s << endl;
      }
      fin.close();
}