#include <iostream>
#include <queue>
using namespace std;

int N, M;
int Grid[100][100];
int Dist[100][100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() 
{
    cin >> N >> M;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> Grid[i][j];
        }
    }

    queue<pair<int, int>> Q;
    Q.push({0,0});
    Dist[0][0] = 0;

    while(!Q.empty())
    {
        pair<int, int> Cur = Q.front();
        Q.pop();

        for(int i = 0; i < 4; ++i)
        {
            int X = Cur.first + dx[i];
            int Y = Cur.second + dy[i];

            if(X < 0 || X >= N || Y < 0 || Y >= N) continue;
            if(Grid[X][Y] == 0 || Dist[X][Y] != 0)
            {
                Dist[X][Y] = min(Dist[X][Y], Dist[Cur.first][Cur.second] + 1);
                continue;
            }

            Q.push({X, Y});
            Dist[X][Y] = Dist[Cur.first][Cur.second] + 1;
        }
    }

    if(Dist[N-1][M-1] == 0) cout << -1;
    else cout << Dist[N-1][M-1];
    return 0;
}