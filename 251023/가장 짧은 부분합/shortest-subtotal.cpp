#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int N, S;

int main() 
{
    cin >> N >> S;

    vector<int> vec(N);
    for(int i = 0; i < N; ++i)
    {
        cin >> vec[i];
    }

    int Sum = vec[0];
    int j = 0;
    int Answer = numeric_limits<int>::max();

    for(int i = 0; i < N; ++i)
    {
        while(j + 1 < N && Sum < S)
        {
            Sum += vec[j + 1];
            j++;
        }

        if(Sum >= S)
        {
            Answer = min(Answer, j - i + 1);
        }

        Sum -= vec[i];

    }   

    if(Answer == 0){
        cout << -1;
        return 0;
    }
    cout << Answer;
    return 0;
}