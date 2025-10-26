#include <iostream>
#include <limits>
using namespace std;
const int MIN = numeric_limits<int>::min();
int DP[100001];
int A[100001];
int N;

int main() 
{
    cin >> N;
    for(int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for(int i = 0; i < N; ++i)
    {
        DP[i] = MIN;
    }
    DP[0] = A[0];

    for(int i = 1; i < N; ++i)
    {
        DP[i] = max(A[i], DP[i-1] + A[i]);
    }

    cout << DP[N-1];

    return 0;
}