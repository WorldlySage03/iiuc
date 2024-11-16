#include <bits/stdc++.h>
using namespace std;

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define el '\n'
#define sp " "
#define loop(n) for (int i = 0; i < (n); i++)
#define pb push_back
#define sz(a) (a).size()
#define sf scanf
#define pf printf
#define testcase int TeCa; cin >> TeCa; while (TeCa--)
#define yes cout << "YES"
#define no cout << "NO"
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)

typedef long long ll;
typedef unsigned long long ull;
typedef string str;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<vector<int>> Matrix;
typedef pair<int, int> pii;

bool comp(pair<int, int> a, pair<int, int> b)
{
      //if(a.second == b.second) return a.first < b.first;
      return a.second < b.second; // Low to High
}

void Solution()
{
      set<int> a = {2, 3, 4}, b = {5, 6, 7};
      a = b;

      for (auto i : a)
            cout << i << sp;
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
