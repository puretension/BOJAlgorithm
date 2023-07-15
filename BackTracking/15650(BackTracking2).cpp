#include<bits/stdc++.h>
using namespace std;

const int MAX = 9;

int n,m;
int arr[MAX];
bool visited[MAX];

void dfs(int num, int depth){
    if(depth == m){
        for(int i = 0;i<m;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = num;i<=n;i++){
        if(!visited[i]){
            visited[i] = true;
            arr[depth] = i;
            dfs(i+1,depth + 1);
            visited[i] = false;
        }
    }
}

int main() {
  cin>>n>>m;
  dfs(1,0);
}
