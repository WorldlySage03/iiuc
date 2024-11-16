#include <iostream>
#include <list>
using namespace std;

void Solution()
{
      //Works as Double Linked List
      list<int> a;

      a.push_back(2);
      a.push_back(3);

      a.push_front(1);
      a.push_front(0);

      for (auto i : a)
      {
            cout << i << " ";
      }
      cout << endl;

      a.pop_front();
      a.pop_back();
      
      for (auto i : a)
      {
            cout << i << " ";
      }
      cout << endl;
}

int main()
{
      Solution();

      return 0;
}