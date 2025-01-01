#include <bits/stdc++.h>
using namespace std;

const int m = 9e7;
vector<int> prime;
vector<bool> isPrime(m, true);

void sieve()
{
      isPrime[0] = isPrime[1] = false;
      for (long long i = 2; i <= m; i++)
      {
            if(isPrime[i])
            {
                  prime.push_back(i);
                  for (long long j = i * i; j <= m; j += i)
                  {
                        isPrime[j] = false;
                  }
            }
      }
}

int main()
{
      sieve();

      int n, k;
      cin >> n;

      for (int i = 0; i < n; i++)
      {
            cin >> k;
            cout << prime[k - 1] << endl;
      }
}

