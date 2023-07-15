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
    int prev = -1; // 이전에 선택한 인덱스 이후의 수만 선택하게끔한다
    for(int i = 0;i<n;i++){
        if(!visited[i] && prev != arr[i]){ //핵심 로직(방문안했고, 선택한 인덱스 이후의 숫자면?)
            visited[i] = true;
            copyArr[depth] = arr[i];
            prev = arr[i];
            dfs(i+1, depth + 1);
            visited[i] = false;
        }
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
