#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() 
{
    cin >> N >> K ;

    priority_queue<int> Q;
    for(int i = 0; i < N; ++i)
    {
        int A;
        cin >> A;
        Q.push(A);
    }

    int Count = 0;
    while(K > 0)
    {
        Count += K / Q.top();
        K %= Q.top();
        Q.pop();
    }
    cout << Count;
    return 0;
}