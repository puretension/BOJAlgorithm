//1940 주몽 투포인터
//int N, M;
//
//int a[15001];
//const int MAX = 10000000;
//
//int cnt = 0;
//
//int main(){
//    cin >> N;
//    cin >> M;
//    for(int i = 0;i<N;i++){
//        cin >> a[i];
//
//    }
//    //nC2 == m 일시 cnt++;
//
//    if(M > 200000) cout << "0";
//    else{
//
//        for(int i = 0;i<N-1;i++){
//            for(int j = i + 1;j < N;j++){
//                if((a[i] + a[j]) == M)
//                    cnt++;
//            }
//        }
//
//        cout << cnt;
//    }
//
//    return 0;
//}


//5*1+3*2+1*3+1*3+3*2+5*1+5*1



//트럭문제
//int cnt[101];
//int sum = 0;
//int minT, maxT;
//
//int main(){
//    int A,B,C;
//    cin >> A >> B >> C;
//
//    int t1,t2;
//    for(int i = 0;i<3;i++){
//        cin >> t1 >> t2;
//        //시간 문제에서는 이상 미만이 standard
//        for(int j = t1;j<t2;j++){
//            cnt[j]++;
//        }
//    }
//
//    for(int i = 0;i<101;i++){
//        if(cnt[i] == 3){
//            sum += C* cnt[i];
//            continue;
//        }
//        if(cnt[i] == 2){
//            sum += B* cnt[i];
//            continue;
//        }
//        if(cnt[i] == 1){
//            sum += A*cnt[i];
//        }
//    }
//    cout << sum << "\n";
//    return 0;
//}

