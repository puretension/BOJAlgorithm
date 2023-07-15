#include<bits/stdc++.h>
using namespace std;

const int MAX = 8;
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
            copyArr[depth] = arr[i];
            dfs(idx,depth + 1);
    }
    
}


int main(){
    cin>>n>>m;

    for(int i = 0;i<n;i++)
        cin >> arr[i];
    sort(&arr[0], &arr[0] + n);
    dfs(0,0);

}
