#include<bits/stdc++.h>
using namespace std;
int main() {
    long long s;
    cin >> s;

    long long sum = 0, num = 1;
    int cnt = 0;

//    1부터 계속 더해가면서 더한 자연수의 갯수를 같이 카운트,
//    더해간 합이 S를 처음으로 초과할 경우 현재까지 더한 자연수의 갯수에서 -1
    while (1) {
        sum += num;
        cnt++;
        if (sum > s) {
            cnt--;
            break;
        }
        num++;
    }

    cout << cnt;
    return 0;
}



