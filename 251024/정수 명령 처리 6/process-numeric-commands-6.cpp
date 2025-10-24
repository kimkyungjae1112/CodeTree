#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() 
{
    priority_queue<int> Q;

    int N;
    cin >> N;

    while(N--)
    {
        string Str;
        cin >> Str;

        if(Str == "push")
        {
            int E;
            cin >> E;
            Q.push(E);
        }
        else if(Str == "pop")
        {
            cout << Q.top() << '\n';
            Q.pop();
        }
        else if(Str == "size")
        {
            cout << Q.size() << '\n';
        }
        else if(Str == "empty")
        {
            if(Q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(Str == "top")
        {
            cout << Q.top() << '\n';
        }

    }
    return 0;
}