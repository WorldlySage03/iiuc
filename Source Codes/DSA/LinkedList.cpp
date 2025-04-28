#include <bits/stdc++.h>
using namespace std;

struct node
{
      int num;
      node *next;
};

int main()
{
      int n, item;
      node *ptr, *start;

      start = new node();
      ptr = start;

      cout << "Number of elements: ";
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> ptr->num;

            if (i + 1 != n)
            {
                  ptr->next = new node();
                  ptr = ptr->next;
            }
            else ptr->next = nullptr;
      }

      cout << "Elements in the Linked List are:\n";

      ptr = start;
      while (ptr != nullptr)
      {
            cout << ptr->num << " ";
            ptr = ptr->next;
      }
      cout << "\n";

      return 0;
}