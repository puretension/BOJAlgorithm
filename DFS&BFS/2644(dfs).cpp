#include<bits/stdc++.h>
using namespace std;

const int MAX = 101;
bool visited[MAX];
vector<int> a[MAX];
int n,u,v,m;
int ans = -1;

void dfs(int x,int cnt){
   visited[x] = true;
   if(x == v){
       ans = cnt; return;
   }
   for(int there: a[x]){
       if(!visited[there])
           dfs(there,cnt + 1);
   }
}

int main(){
   cin >> n; cin >> u >> v; cin >> m;
   for(int i = 0;i<m;i++){
       int c,d;
       cin >> c >> d;
       a[c].push_back(d);
       a[d].push_back(c);
   }
   dfs(u,0);
   cout << ans << "\n";
   return 0;
}


bfs이용 풀이
const int MAX = 101;
bool visited[MAX];
vector<int> a[MAX];
int n,u,v,m;
int ans = -1;
void bfs(int x,int cnt){
   queue<pair<int, int>>q;
   q.push({x,0});
   visited[x] = true;
   while(!q.empty()){
       int now = q.front().first;
       int nowCnt = q.front().second;
       if(now == v) {
           ans = nowCnt;
           return;
       }
       q.pop();
       for(int i = 0;i<a[now].size();i++){
           int x2 = a[now][i];
           if(!visited[x2]){
               visited[x2] = true;
               q.push(make_pair(x2, nowCnt+1));
           }
       }
   }
}

int main(){
   cin >> n; cin >> u >> v; cin >> m;
   for(int i = 0;i<m;i++){
       int c,d;
       cin >> c >> d;
       a[c].push_back(d);
       a[d].push_back(c);
   }
   bfs(u,0);
   cout << ans << "\n";
   return 0;
}


#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   if(n == 0){
       return 1;
   }
   return n * factorial(n-1);
}

int main(){
   int n;
   cin >> n;
   cout << factorial(n) << "\n";
}


#include<bits/stdc++.h>
using namespace std;

int main(){
   int T;
   cin >> T;
   int n;
   while(T--){
       cin >> n;
       int cnt = 0;
       while(n>0){
           if(n%2 == 1){
               cout << cnt << " ";
           }
           n/=2;
           cnt++;
       }
       cout << "\n";
   }
}
