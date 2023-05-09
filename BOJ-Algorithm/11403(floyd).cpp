//#include<bits/stdc++.h>
//using namespace std;
//
//int N;
//
//int d[101][101];
//
//int main(){
//    cin >> N;
//    int num;
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            cin >> num;
//            d[i][j] = num;//무방향이 아닌 방향그래프임
//        }
//    }
//    //floyd
//    for(int k = 1;k<=N;k++){
//        for(int i = 1;i<=N;i++){
//            for(int j = 1;j<=N;j++){
//                if(d[i][k] + d[k][j] == 2)
//                    d[i][j] = 1;
//            }
//        }
//    }
//
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            cout << d[i][j] << " ";
//        }
//        cout << "\n";
//    }
//
//    return 0;
//}
