//#include<bits/stdc++.h>
//using namespace std;
//
//const int MAX = 101;
//int arr[MAX][MAX];
//
//int N,M;
//
//const int INF = 1e8;
//
//int d[MAX][MAX];
//
//void floydWardshall(){
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            //핵심로직(자기자신은 0)
//            if(arr[i][j] == -1) {
//                d[i][j] = 0;
//                continue;
//            }
//            //입력안된값은 무한대
//            if(arr[i][j] == 0){
//                d[i][j] = INF;
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
//            if(d[i][j] >= INF)
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
//        //1 4 1 입력하고 또 1 4 3했을때 기존 비용이 변경되지 않기 위함
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

