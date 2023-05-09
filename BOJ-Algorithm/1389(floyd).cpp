//#include<bits/stdc++.h>
//using namespace std;
//
//int N, M;
//
//const int INF = 1e9;
//
////const int MAX = 5001;
//int d[104][104];
//
//int main(){
//    cin >> N >> M;
//    int a,b;
//    for(int i = 1;i<=M;i++){
//        cin >> a >> b;
//        d[a][b] = 1;
//        d[b][a] = 1;
//    }
//
//    //간선 연결 X시 INF로 초기화
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            if(d[i][j] != 1){
//                d[i][j] = INF;
//            }
//        }
//    }
//
//    //자기자신은 0으로 초기화
//    for(int i = 1;i<=N;i++){
//        d[i][i] = 0;
//    }
//
////    //디버깅용
////    for(int i = 1;i<=N;i++){
////        for(int j = 1;j<=N;j++){
////            cout << d[i][j] << " ";
////        }
////        cout << "\n";
////    }
//
//    //floyd
//    for(int k = 1;k<=N;k++){
//        for(int i = 1;i<=N;i++){
//            for(int j = 1;j<=N;j++){
//                if(d[i][k] + d[k][j] < d[i][j])
//                    d[i][j] = d[i][k] + d[k][j];
//            }
//        }
//    }
//
//    int pNum[N+1];
//    memset(pNum, 0, sizeof(pNum));
//    int idxNum[N+1];
//    memset(idxNum, 0, sizeof(idxNum));
//
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            if(i == j) continue;
//            if(d[i][j] >= INF) continue;
//            pNum[i] += d[i][j];
//        }
//        idxNum[i] = pNum[i];
//    }
//
////    //6 8 5 5 8이 디버깅되야함
////    for(int i = 1;i<=N;i++){
////        cout << pNum[i] << " ";
////    }
//
//    //오름차순 정렬후
//    sort(pNum, pNum + N);
//
//    //맨앞 IDX 사람 출력
//    for(int i = 0;i<N;i++){
//        if(idxNum[i] == pNum[1]){
//            cout << i << "\n";
//            break;
//        }
//    }
//
//    return 0;
//}
