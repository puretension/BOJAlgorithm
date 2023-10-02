#include<bits/stdc++.h>
using namespace std;


int main(){
    int N,M;
    cin >> N >> M;
    int arr[42];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    int vip[41] = {0};
    int number = 0;
    for(int i = 0;i<M;i++){
        cin >> number;
        vip[number] = 1;
    }
    
    for(int i = 1;i<=N;i++){
        if(vip[i] || vip[i-1]) arr[i] = arr[i-1];
        else arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[N];
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int fibo(int n) {
//     if (n <= 1) return 1;
//     int a = 1, b = 1;
//     for (int i = 2; i <= n; ++i) {
//         int temp = b;
//         b = a + b;
//         a = temp;
//     }
//     return b;
// }

// int main() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> vipSeats(m+2);
//     vipSeats[0] = 0;
//     vipSeats[m+1] = n+1;
//     for (int i = 1; i <= m; ++i) {
//         cin >> vipSeats[i];
//     }

//     int totalWays = 1;
//     for (int i = 0; i < m + 1; ++i) {
//         int seatGap = vipSeats[i + 1] - vipSeats[i] - 1;
//         totalWays *= fibo(seatGap);
//     }

//     cout << totalWays << endl;

//     return 0;
// }
