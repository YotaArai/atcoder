/**
 * 
 */

#include <iostream>

using namespace std;

typedef long long ll;

ll N, K, A[1001], B[1001], diff = 0;

int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++)
    {
        diff += abs(A[i] - B[i]);
    }

    if (diff > K)
    {
        cout << "No";
    }
    else
    {
        if ((K - diff) % 2 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }

    return 0;
}