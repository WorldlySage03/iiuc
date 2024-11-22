#include <bits/stdc++.h>
using namespace std;

#define loop(n) for (int i = 0; i < (n); i++)
#define sp " "
#define el '\n'
#define eps 1e-6

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a / __gcd(a, b)) * b

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define rmf pop_front()
#define rmb pop_back()
#define sz(a) (int) (a).size()

#define yes cout << "YES"
#define no cout << "NO"

#define sf scanf
#define prf printf
#define testcase int TeCa; cin >> TeCa; while (TeCa--)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> Matrix;
typedef pair<int, int> pii;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
      if (p1.second == p2.second) return p1.first < p2.first;
      return p1.second < p2.second;
}

void Solution()
{
      string a = "abc";

      for (int i = 0; i < 6; i++)
      {
            cout << a << el;
            next_permutation(all(a));
      }

      cout << el;
      for (int i = 0; i < 6; i++)
      {
            prev_permutation(all(a));
            cout << a << el;
      }
}

int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);

      #ifndef ONLINE_JUDGE
            //input;
      #endif

      //testcase
      Solution();

      return 0;
}
