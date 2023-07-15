#include<bits/stdc++.h>
using namespace std;
const int MAX = 9;
int n,m;
int arr[MAX];
int copyArr[MAX];

void dfs(int idx, int depth){
    if(depth == m)
    {
        for(int i = 0;i<m;i++)
            cout << copyArr[i] << " ";
        cout << "\n";
        return;
    }
        int prev = -1;
        for(int i = idx;i<n;i++){
            if(prev != arr[i]){
                copyArr[depth] = arr[i];
                prev = arr[i];
                dfs(i, depth+1);
            }
        }
}

int main(){
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    dfs(0,0);

    return 0;
}
