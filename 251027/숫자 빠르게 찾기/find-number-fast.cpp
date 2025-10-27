#include <iostream>
using namespace std;

int A[100000];
int N, M;

int Func(int Target, int Start, int End)
{
    int Mid = (Start + End) / 2;

    if(End < Start)
    {
        return -1;
    }

    if(Target == A[Mid])
    {
        return Mid + 1;
    }
    else if(Target > A[Mid])
    {
        return Func(Target, Mid + 1, End);
    }
    else if(Target < A[Mid])
    {
        return Func(Target, Start, Mid - 1);
    }
}

int main() 
{
    cin >> N >> M;
    for(int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    for(int i = 0; i < M; ++i)
    {
        int Target;
        cin >> Target;
        cout << Func(Target, 0, N - 1) << '\n';
    }

    return 0;
}