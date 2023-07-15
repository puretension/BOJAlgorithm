#include<bits/stdc++.h>
using namespace std;

const int MAX = 8;

int n,m;
int arr[MAX];

void dfs(int depth){
    if(depth == m){
        for(int i = 0;i<m;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i = 1;i<=n;i++){
        if(1){
            arr[depth] = i;
            dfs(depth + 1);
        }
    }
}



int main() {
    cin>>n>>m;
    dfs(0);
}
