#include<bits/stdc++.h>
using namespace std;

int N;
const int MAX = 1001;

int dpLeft[MAX];
int dpRight[MAX];
int num[MAX];

int main(){
    cin >> N;
    for(int i = 0;i<N;i++) cin >> num[i];

    fill_n(dpLeft, MAX, 1);
    fill_n(dpRight, MAX, 1);

    for(int i = 0;i<N;i++){
        for(int j = i-1;j>=0;j--)
            if((num[j] < num[i]) && (dpLeft[i] < dpLeft[j] + 1)) dpLeft[i] = dpLeft[j] + 1;
    }

    for(int i = N-1;i>=0;i--){
        for(int j = i+1;j<N;j++)
            if((num[j] < num[i]) && (dpRight[i] < dpRight[j] + 1)) dpRight[i] = dpRight[j] + 1;
    }

    int ans = 0;
    for(int i = 0;i<N;i++){
        ans = max(ans,(dpLeft[i] + dpRight[i]));
    }

    cout << ans -1 << "\n";

    return 0;
}
