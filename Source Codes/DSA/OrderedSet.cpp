#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

// greater<int> or, greater_equal<int>
// find_by_order, order_of_key

int main()
{
      ordered_set a;
      a.insert(1);
      a.insert(6);
      a.insert(1);
      a.insert(3);
      a.insert(9);

      for (auto i: a)
      {
            cout << i << " ";
      }
      cout << endl << endl;

      // Finding i th element
      cout << "0th element: " << *a.find_by_order(0) << endl;
      cout << "1st element: " << *a.find_by_order(1) << endl;
      cout << "2nd element: " << *a.find_by_order(2) << endl;
      cout << "3rd element: " << *a.find_by_order(3) << endl;
      cout << endl;

	// Finding the number of elements smaller than X
	cout << "No. of elems smaller than 6: " << a.order_of_key(6) << endl;
	cout << "No. of elems smaller than 11: " << a.order_of_key(11) << endl;
	cout << "No. of elems smaller than 1: " << a.order_of_key(1) << endl;
	cout << endl;
}
