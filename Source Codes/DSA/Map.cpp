#include <iostream>
#include <map>
using namespace std;

int main()
{
      map<string, int> a;

      // Outputs in sorted order of a.first
      a["TV"] = 50;
      a["Laptop"] = 25;
      a["Desktop"] = 10;

      a.insert({"Camera", 20});
      a.emplace("Mobile", 40);

      a.erase("TV");

      for (pair<string, int> i : a) // Or, for (auto i : a)
      {
            cout << i.first << " " << i.second << endl;
      }

      if (a.find("Cat") != a.end())
            cout << "Found\n";
      else cout << "Not Found\n";

      cout << "Size: " << a.size() << endl;

      return 0;
}
