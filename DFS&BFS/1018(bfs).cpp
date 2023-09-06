#include<bits/stdc++.h>
using namespace std;

int F,S,G,U,D; //S->G이동
const int MAX = 1e6;
bool visited[MAX + 1];

void bfs(int s){
   queue<pair<int, int>>q;
   q.push({s,0});
   visited[s] = true;
   while(!q.empty()){
       int x = q.front().first;
       int cnt = q.front().second;
       q.pop();
       if(x == G){
           cout << cnt << "\n";
           return;
       }
       if(x+ U >= 1 && x+U <=F){
           if(!visited[x+U]){
               visited[x+U] = true;
               q.push({x+U,cnt+1});
           }
       }
       if(x-D >= 1 && x-D <=F){
           if(!visited[x-D]){
               visited[x-D] = true;
               q.push({x-D,cnt+1});
           }
       }
   }
   cout << "use the stairs";
   return;
}

int main(){
   cin >> F >> S >> G >> U >> D;
   bfs(S);
   return 0;
}


int main(){
   string x;
   getline(cin,x);
   cout << x.length() << "\n";
   
}
