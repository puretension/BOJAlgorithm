#include<bits/stdc++.h>
using namespace std;

int n, m, u, v, cost;
int d[101][101];
int route[101][101];
vector<int> path;
const int INF = 1e9;


void pathfind(int start, int end)
{
   int stopover = route[start][end]; // 시작점

   while (stopover != 0)
   {
       path.push_back(stopover);
       stopover = route[start][stopover];
   }
}

int main()
{
   ios::sync_with_stdio(0);
   cin.tie(0);

   cin >> n >> m;

   for (int i = 1; i <= n; i++)
       for (int j = 1; j <= n; j++)
           if (i != j)
               d[i][j] = INF;

    while (m--)
    {
        cin >> u >> v >> cost;
        d[u][v] = min(d[u][v], cost);
        route[u][v] = u;
    }

   for (int k = 1; k <= n; k++)
       for (int i = 1; i <= n; i++)
           for (int j = 1; j <= n; j++)
               if (d[i][j] > d[i][k] + d[k][j])
               {
                   d[i][j] = d[i][k] + d[k][j];
                   route[i][j] = route[k][j];
               }

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= n; j++)
           if (d[i][j] <= 100000)
               cout << d[i][j] << " ";
           else
               cout << "0 ";
       cout << '\n';
   }

   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= n; j++)
       {
           if (i == j) cout << 0 << '\n';
           else
           {
               pathfind(i, j);
               if (path.empty() && d[i][j] > 100000) {
                   cout << 0;
               }
               else {
                   cout << path.size() + 1 << " ";
                   for (int i = 0; i < path.size(); i++) // 경유지
                       cout << path[path.size() - i - 1] << " ";
                   cout << j << " "; // 도착점
               }
               cout << '\n';
           }
           path.clear();
       }
   }
}
