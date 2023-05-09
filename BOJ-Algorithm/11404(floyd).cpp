//#include<bits/stdc++.h>
//using namespace std;
//
//const int MAX = 101;
//int arr[MAX][MAX];
//
//int N,M;
//
//const int maxC = 1e8;
//
//int d[MAX][MAX];
//
//void floydWardshall(){
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            //핵심로직
//            if(arr[i][j] == -1) {
//                d[i][j] = 0;
//                continue;
//            }
//            if(arr[i][j] == 0){
//                d[i][j] = maxC;
//                continue;
//            }
//            d[i][j] = arr[i][j];
//        }
//    }
//
//    for(int k = 1;k<=N;k++){
//        for(int i = 1;i<=N;i++){
//            for(int j = 1;j<=N;j++){
//                if(d[i][k] + d[k][j] < d[i][j])
//                    d[i][j] = d[i][k] + d[k][j];
//            }
//        }
//    }
//
//    //핵심로직
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            if(d[i][j] >= maxC)
//                d[i][j] = 0;
//        }
//    }
//}
//
//int main(){
//
//    cin >> N;
//    cin >> M;
//    int a,b,c;
//    for(int i = 0;i<M;i++){
//        cin >> a >> b >> c;
//        //핵심로직
//        arr[a][a] = -1;
//        arr[b][b] = -1;
//        if(arr[a][b] != 0 && arr[a][b] < c) continue;
//        arr[a][b] = c;
//    }
//
//    floydWardshall();
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
//
//
