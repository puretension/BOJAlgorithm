#include<bits/stdc++.h>
using namespace std;

const int MAX = 9;
int n,m;
int visited[MAX];
int arr[MAX];
int copyArr[MAX];

void dfs(int idx, int depth){
    if(depth == m){
        for(int i = 0;i<m;i++){
            cout << copyArr[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = idx;i<n;i++){
        if(!visited[i]){
            visited[i] = true;
            copyArr[depth] = arr[i];
            dfs(i + 1, depth + 1);
            visited[i] = false;
        }
        //visited[i] = true;
    }
}

int main(){
    cin>>n>>m;

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(&arr[0], &arr[0] + n);
    
    dfs(0,0);
    
}
