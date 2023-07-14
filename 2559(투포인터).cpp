#include<bits/stdc++.h>
using namespace std;
//
//const int MAX = 100001;
//int t[MAX];
//int N,K;
//
//int cnt[MAX];
//
//int res = 0;
//
//int idx = 0;
//int idx2 = 0;
//
//queue<int>q[MAX];
//
//int countN = 0;
//
//int main(){
//    cin >> N >> K;
//    for(int i = 0;i<N;i++){
//        cin >> t[i];
//        q[idx].push(t[i]);
//        cnt[idx2] += t[i];
//        if(q[idx].size() == K){
//            //cout << cnt[idx2] << "@@\n";
//            countN++;
//            int temp = cnt[idx2];
//            idx2++;
//            cnt[idx2] += (temp - q[idx].front());
//            q[idx].pop();
//        }
//    }
//
//    res = cnt[0];
//    for(int i = 1;i<countN;i++){
//        if(res < cnt[i])
//            res = cnt[i];
//    }
//
//    cout << res << "\n";
//
//    return 0;
//}

////N: 1~10만
////K: 1~10만-1
////이문제의 최솟값은? -100 * 10만 -> -1000만
////최대값은 어디서부터?
//
////큰돌님 풀이
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n, k, temp, psum[100001], ret = -1000000;
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);cout.tie(NULL);
//    cin >> n >> k;
//    for(int i = 1; i <= n; i++){
//        cin >> temp;
//        psum[i] = psum[i - 1] + temp;
//    }
//    for(int i = k; i <= n; i++){
//        ret = max(ret, psum[i] - psum[i - k]);
//    }
//    cout << ret << "\n";
//    return 0;
//}

//
////정사각형 배열 90도 회전 구현 암기 (n-j-1, i)
//int main(){
//    int a[3][3] ={{1,2,3},{4,5,6}, {7,8,9}};
//    int temp[3][3];
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<3;j++)
//            temp[i][j] = a[3-j-1][i];
//    }
//    for(int i = 0;i<3;i++){
//        for(int j = 0;j<3;j++){
//            cout << temp[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

//map<int,int>mp;
//
//vector<int>a{1,1,2,2,3,3};
//
//int main(){
//
////    for(int i = 0;i<a.size();i++){
////        if(mp[i]) continue;
////        else mp[i] = 1;
////    }
//
//    for(int i: a){
//        if(mp[i]) continue;
//        else mp[i] = 1;
//    }
//
//    vector<int>ret;
//
//    for(auto it: mp){
//        ret.push_back(it.first);
//    }
//
//    for(int i: ret) cout << i << " ";
//
//    return 0;
//}
