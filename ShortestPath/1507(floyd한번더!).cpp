//#include<bits/stdc++.h>
//using namespace std;
//
//int N;
//int d[21][21];
//int r[21][21];
//const int INF = 1e9;
//
//int main(){
//    cin >> N;
//
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            cin >> d[i][j];
//            r[i][j] = d[i][j];
//        }
//    }
//
//    //경유지 (k)가 있다면 기존에 값 입력이 불가능하게 주어진것 -> -1
//    for(int k = 1;k<=N;k++){
//        for(int i = 1;i<=N;i++){
//            for(int j = 1;j<=N;j++){
//                //if(i == j) continue;
//                if(i==k || k==j || i == j) continue; //경유지와 달라야함. 안그러면 무조건 return 0
//                if(d[i][k] + d[k][j] < d[i][j]){
//                    cout << "-1\n";
//                    return 0;
//                }
//                else if(d[i][j] == d[i][k] + d[k][j]) //플로이드로 연결된 간선 삭제
//                    r[i][j] = 0;
//            }
//        }
//    }
//
//    int res = 0;
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++)
//            res += r[i][j];
//    }
//
//    cout << res/2 << "\n";
//
//    return 0;
//}
