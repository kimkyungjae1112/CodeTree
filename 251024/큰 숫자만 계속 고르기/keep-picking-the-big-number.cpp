#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;

    priority_queue<int> Q;

    while(N--)
    {
        int Value;
        cin >> Value;
        Q.push(Value);
    }

    while(M--)
    {
        int Temp = Q.top();
        Q.pop();
        Q.push(Temp - 1);
    }
    cout << Q.top();
    return 0;
}