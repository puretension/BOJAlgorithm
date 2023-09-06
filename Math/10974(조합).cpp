#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int a[N];
    for(int i = 1;i<=N;i++)
        a[i-1] = i;
    do{
        for(int i: a) cout << i << " ";
        cout << "\n";
    }while(next_permutation(&a[0], &a[0] + N));
    return 0;
}
