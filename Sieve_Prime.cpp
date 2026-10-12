#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> prime;
vector<int> mark;

void sieve(int n)
{
    prime.clear();

    if (n < 2) return;

    mark.assign(n + 1, 0);

    for (int i = 4; i <= n; i += 2)
    {
        mark[i] = 1;
    }

    prime.emplace_back(2);

    int limit = sqrt(n);

    for (int i = 3; i <= n; i += 2)
    {
        if (mark[i] == 0) //(!mark[i]) New shotcut
        {
            prime.emplace_back(i);

            if (i <= limit)
            {
                for (int j = i * i; j <= n; j += 2 * i)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{
    int n = 20000;

    sieve(n);

    for (int p : prime)
    {
        cout << p << " ";
    }

    cout << "\n";

    return 0;
}
