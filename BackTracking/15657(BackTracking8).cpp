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
            //visited[i] = true; //visited 2개를 주석처리하냐 안하냐에 (6)과 (8)이 갈림
            copyArr[depth] = arr[i];
            dfs(i, depth + 1);
            //visited[i] = false;
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
