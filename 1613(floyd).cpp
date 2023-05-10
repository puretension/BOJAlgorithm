//#include<bits/stdc++.h>
//using namespace std;
//
//int d[401][401];
//int q[401][401];
//
//int INF = 1e9;
//
//
////전후관계 최대범위 50000, n은 400이므로, -400~400
//int N,K;
//
//int main(){
//    cin >> N >> K;
//    for(int i = 0;i<K;i++){
//        int a,b;
//        cin >> a >> b;
//        d[a][b] = -1; //앞뒤
//        d[b][a] = 1;
//        q[b][a] = 1; //뒤앞
//        q[a][b] = -1;
//    }
//
////    for(int i = 1;i<=N;i++){
////        for(int j = 1;j<=N;j++){
////            cout << d[i][j] << " ";
////        }
////        cout << "\n";
////    }
////
////    for(int i = 1;i<=N;i++){
////        for(int j = 1;j<=N;j++){
////            cout << q[i][j] << " ";
////        }
////        cout << "\n";
////    }
//
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            if(d[i][j] != -1){
//                d[i][j] = INF;
//            }
//        }
//    }
//
//    for(int i = 1;i<=N;i++){
//        for(int j = 1;j<=N;j++){
//            if(q[i][j] != 1){
//                q[i][j] = INF;
//            }
//        }
//    }
//
////    for(int i = 1;i<=N;i++){
////        for(int j = 1;j<=N;j++){
////            cout << d[i][j] << " ";
////        }
////        cout << "\n";
////    }
//
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
//    for(int k = 1;k<=N;k++){
//        for(int i = 1;i<=N;i++){
//            for(int j = 1;j<=N;j++){
//                if(q[i][k] + q[k][j] < q[i][j])
//                    q[i][j] = q[i][k] + q[k][j];
//            }
//        }
//    }
//
////   // cout << d[1][4] << "@@\n";
////
////
////    cout << d[3][1] << "@@\n";
//    //cout << q[3][1] << "@@\n";
//    int s;
//    cin >> s;
//    for(int i = 0;i<s;i++){
//        int a,b;
//        cin >> a >> b;
//        if(d[a][b] < 0) cout << "-1\n"; //앞에가 먼저인 배열에서 판단
//        else if(q[a][b] < 401 && q[a][b] > 0) cout << "1\n";  //뒤에가 먼저인 배열에서 판단
//        else cout << "0\n";
//    }
//
//    return 0;
//}


//int main(){
//    cin >> N >> K;
//    //    for(int i = 0;i<K;i++){
//    //        int a,b;
//    //        cin >> a >> b;
//    //        d[a][b] = -1; //앞뒤
//    //        //d[b][a] = 1;
//    //        q[b][a] = 1; //뒤앞
//    //    }
//
//}


//수정할 좋은 풀이
//#include <stdio.h>
//
//int N, K, S;
//
//int nc, kc, sc;
//
//int order[401][401];
//int from , to;
//int quefrom, queto;
//
//int main()
//{
//    int x,y, k;
//    scanf("%d %d",&N,&K);
//    for( kc=1; kc<=K; kc++)
//    {
//        scanf("%d %d",&from , &to);
//        order[from][to]=-1;
//        order[to][from]=1;
//    }
//    for ( k=1; k<=N;k++)
//    {
//        for ( x=1; x<=N; x++)
//        {
//            for( y=1; y<=N; y++)
//            {
//                if( ( order[x][k]==1 || order[x][k]==-1  ) && order[x][k]==order[k][y])
//                {
//                    order[x][y]= order[x][k];
//                }
//            }
//        }
//    }
//
//
//    scanf("%d",&S);
//    for (sc=1; sc<=S; sc++)
//    {
//        scanf("%d %d",&quefrom, &queto);
//        printf("%d\n",order[quefrom][queto]);
//    }
//    return 1;
//}

#include<bits/stdc++.h>
using namespace std;

int d[401][401];
int N,K,S;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N >> K;
    for(int i = 0;i<K;i++){
        int a,b;
        cin >> a >> b;
        d[a][b] = -1;
        d[b][a] = 1;
    }
    for(int k = 1;k<=N;k++){
        for(int i = 1;i<=N;i++){
            for(int j = 1;j<=N;j++){
                if((d[i][k] == 1 || d[i][k] == -1) && d[i][k] == d[k][j])
                    d[i][j] = d[i][k];
            }
        }
    }
    cin >> S;
    for(int i = 0;i<S;i++){
        int a,b;
        cin >> a >> b;
        cout << d[a][b] << "\n";
    }
}
