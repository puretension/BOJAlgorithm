#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i = 0;i<N;i++)
        cin >> a[i];
    if(next_permutation(&a[0], &a[0] + N)){
        for(int i: a){
            cout << i << " ";
        }
    }
    else cout << -1;
    
    return 0;
}
