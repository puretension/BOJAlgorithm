#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long MAX = 1000000001;
long long N,K;
long long a[MAX];
long long visited[MAX];

long long ans = 0;

bool flag = true;

void bfs(long long a){
   queue<pair<long long ,long long>> q;

   q.push({a,0});
   while(q.size()){
       long x = q.front().first;
       long cnt = q.front().second;
       q.pop();

       if(x == K){
           flag = false;
           ans = cnt;
           break;
       }


       if(x*10 + 1 >= 0 && x*10 + 1 < MAX){
           if(!visited[x*10+1]){
               visited[x*10+1] = true;
               q.push({x*10+1,cnt+1});
           }
       }

       if(2*x >= 0 && 2*x < MAX){
           if(!visited[2*x]){
               visited[2*x] = true;
               q.push({2*x, cnt + 1});
           }
       }
   }
}


// int main(){
//    cin >> N >> K;
//    visited[N] = true;
//    bfs(N);
//    if(flag) cout << "-1";
//    else cout << ans + 1;
//    return 0;
// }

// long long a, b;

// int main() {
//    cin >> a >> b;

//    int cnt = 0;
//    while (1) {
//        if (a > b) {
//            cout << -1 << '\n';
//            break;
//        }
//        if (a == b) {
//            cout << cnt + 1 << '\n';
//            break;
//        }

//        if (b % 10 == 1) {
//            b /= 10;
//        }
//        else if(b % 2 == 0){
//            b /= 2;
//        }
//        else {
//            cout << -1 << '\n';
//            break;
//        }
//        cnt++;
//    }
//    return 0;
// }
