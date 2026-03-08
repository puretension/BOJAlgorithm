// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
    
//         return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main() {
//     ll n;
//     cin >> n;

//     if (n == 0) {
//         cout << 0;
//         return 0;
//     }
//     if (n == 1) {
//         cout << 1;
//         return 0;
//     }

//     long long minOps = numeric_limits<long long>::max();
    
//     for (long long c = 1; c * c <= n; ++c) {
//         long long square = c * c;
//         long long k = 0;
//         if (n > square) {
//             k = (n - square + c - 1) / c;
//         } else {
//             k = (square - n) / c + ((square - n) % c != 0); 
//         }
//         minOps = min(minOps, c + k); 
//     }

//     cout << minOps;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// int main() {
//     int N;
//     cin >> N;

//     set<int> numbers;
//     for (int i = 1; i <= N; i++) {
//         numbers.insert(i);
//     }

//     for (int i = 0; i < N; i++) {
//         int A;
//         cin >> A;
//         auto it = numbers.begin();
//         advance(it, A);
//         cout << *it << '\n';
//         numbers.erase(it);
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// ll N, K, M;
// int main() {
//     cin >> N >> K >> M;

//     int result = 1;

//     while (N || K) {
//         int A = 1, B = 1;
//         int n = N % M, k = K % M;

//         for (int i = n; i > n - k; i--)
//             A = A * i % M;

//         for (int i = k; i >= 2; i--)
//             B = B * i % M;

//         int invB = 1, exp = M - 2;
//         while (exp) {
//             if (exp & 1) invB = invB * B % M;
//             exp >>= 1;
//             B = B * B % M;
//         }

//         result = result * (A * invB % M) % M;
//         N /= M, K /= M;
//     }

//     cout << result;
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     string str[1001];

//     cin >> n;
//     bool flag = false;
//     for(int i = 0;i<n;i++){
//         cin >> str[i];
//         if(str[i] != "0") flag = true; 
//     }

//     if(!flag){
//         cout << "0";
//         return 0;
//     }
    
//     sort(str, str + n, [](string a, string b){
//         return a + b > b + a; //글자 a-b순서, b-a순서로 붙여보고 더 큰값으로 정렬. 그냥 개꿀문제
//     });
//     for(int i = 0;i<n;i++) cout <<str[i];

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll n,m,sum,ans = 1e18;
// ll a[300001];

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll n, m;
// vector<int> a;

// int main() { 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n;
//     for(int i = 0; i < n; i++) {
//         int num;
//         cin >> num;
//         a.push_back(num);
//     }

//     cin >> m;
//     sort(a.begin(), a.end());
    
//     ll low = 0, high = a[n-1], mid, ans = 0;

//     while(low <= high) {
//         ll sum = 0;
//         mid = (low + high) / 2;
//         for(int i = 0; i < n; i++) {
//             if(a[i] > mid) 
//                 sum += mid;
//             else 
//                 sum += a[i];
//         }

//         if(sum > m) {
//             high = mid - 1;
//         } else {
//             ans = max(ans, mid);
//             low = mid + 1;
//         }
//     }

//     cout << ans;

//     return 0;
// }


// bool check(ll mid){
//     sum = 0;
//     for(int i = 0;i<m;i++){
//         sum += a[i] / mid;
//         if(a[i] % mid) sum++;
//     }
//     return n>=sum;
// }

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n >> m;

//     ll low = 1, high = 0, mid;
//     for(int i = 0;i<m;i++){
//         cin >> a[i];
//         high = max(high, a[i]);
//     }

//     while(low<=high){
//         mid = (low + high) / 2;
//         if(check(mid)){
//             ans = min(ans, mid); //4개씩 나눠줄때 3대입, 3개씩 나눠줄때 5, 2개는 n<sum이므로 불만족
//             high = mid - 1; 
//         }else{
//             low = mid + 1;
//         }
//     }

//     cout << ans;

//         return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll n,m, ans = 1e18;
// ll a[300001];

// bool check(ll mid){
//     ll sum = 0;
//     for(int i = 0;i<m;i++){
//         sum += a[i] / mid; //7일때 3나누고 몫 2, 4일때 3나누고 몫1
//         if(a[i] % mid) sum++; //나머지 1명에게 1주는거, 나머지 1명에게 1주는거
//     }
//     return n >= sum;
// }

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n >> m;
//     ll low = 1, high = 0, mid;
//     for(int i = 0;i<m;i++){
//         cin >> a[i];
//         high = max(high, a[i]);
//     }
//     while(low <= high){
//         mid = (low + high) / 2;
//         if(check(mid)){
//             ans = min(ans,mid);
//             high = mid - 1;
//         }else{
//             low = mid + 1;
//         }
//     }
//     cout << ans;
//      return 0;
// }

// 1-8 -> 2-2, 4-1, 6-4, 7-6, 9-7
// 2-2 -> 1-8, 4-1
// 3-9 -> 4-1, 6-4, 7-6, 9-7

// 4-1 -> 1-8, 2-2, 3-9
// 6-4 -> 1-8, 3-9
// 7-6 -> 1-8, 3-9
// 9-7 -> 1-8, 3-9
// 10-10
//A: 1,2,3,4,6,7,9,10
//1,2,4,6,7,8,9,10
//B전봇대에 연결된 전깃줄 위치가 증가하는 순서로 LIS

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main() {
//     int n;
//     cin >> n;

//     vector<pair<int, int>> v(n);
//     for (int k = 0; k < n; ++k)
//         cin >> v[k].first >> v[k].second;

//     sort(v.begin(), v.end());

//     vector<int> lis;
//     for (int k = 0; k < n; ++k) {
//         int key = v[k].second;
//         //lower_bound? 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
//         auto it = lower_bound(lis.begin(), lis.end(), key);
//         if (it == lis.end()) //만약 key가 lis 내의 모든 요소보다 크다면(증가수열이면) 추가!
//             lis.push_back(key);
//         else
//             *it = key; //[2,4,6]일때 5삽입한다? [2,4,5]로 교체하여 후속요소가 더 쉽게삽입, 증가수열 
//     }

//     cout << n - lis.size() << endl;

//     return 0;
// }


////⭐️
// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll n, maxNum;
// ll s[2001], d[2001];
// int main(){
//     cin >> n;
//     for(int i = 0; i < n; i++) cin >> s[i];
//      fill(d, d + n, 1);  // d 배열을 1로 초기화
//     for(int i = 1; i < n; i++){
//         for(int j = 0; j < i; j++){
//             if(s[j] > s[i]) d[i] = max(d[i], d[j] + 1);
//         }
//     }
//     for(int i = 0; i < n; i++) maxNum = max(maxNum, d[i]);
//     cout << n - maxNum;
// }   

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// //1, 2, 4, 8, 9
// //if mid == 4?, c <3 이므로 x
// //if mid == 3? 1-4-8 OR 1-4-9

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n,c;
//     cin >> n >> c;
//     vector<int>v;
//     for(int i = 0;i<n;i++){
//         int sum;
//         cin >> sum;
//         v.push_back(sum);
//     }

//     sort(v.begin(), v.end());

//     //위치가 아니라, 거리자체를 이분탐색하는게 포인트
//    int ans = 0, start = 1, end = v[n-1] - v[0]; 
//    //end = 끝점 - 시작점

//    while(start <= end){
//     int mid = (start + end) / 2; //1,2,4,8,9일때 4가 중앙값이아닌 1+8/2 -> 4가 중앙값!
//     int s = v[0]; //시작점위치
//     int cnt = 1;
//     for(int i = 1;i<n;i++){
//         //현재집에서 다음집까지 거리가 mid보다 크다면?
//         if(v[i] - s >= mid){
//             cnt++;
//             s = v[i]; //갱신
//         }
//     }

//     //c개 이상은 사용해야함. 
//     if(cnt >= c){
//         ans = max(ans,mid);
//         start = mid + 1;
//     }else{
//         end = mid - 1;
//     }
//    }

//    cout << ans;
//    return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main() {
//     int n;
//     cin >> n;

//     vector<pair<int, int>> v(n);
//     for (int k = 0; k < n; ++k){
//         cin >> v[k].first >> v[k].second;
//     }
//     sort(v.begin(), v.end());

//     vector<int> lis;
//     for (int k = 0; k < n; ++k) {
//         int key = v[k].second;
//         //lower_bound? 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
//         auto it = lower_bound(lis.begin(), lis.end(), key);
//         if (it == lis.end()) //만약 key가 lis 내의 모든 요소보다 크다면(증가수열이면) 추가!
//             lis.push_back(key);
//         else
//             *it = key; //[2,4,6]일때 5삽입한다? [2,4,5]로 교체하여 후속요소가 더 쉽게삽입, 증가수열 
//     }

//     cout << n - lis.size() << endl;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int>v(n);
//     for(int k = 0;k<n;k++){
//         int sum;
//         cin >> sum;
//         v[k].push_back(sum);
//     }
    
//     sort(v.begin(), v.end());



//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll n,v1[2000],v2[2000],f[2000], ans;
// int main() { 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//    cin >> n;

//     for(int i = 0; i < n; i++) cin >> v1[i];

//     for(int i = n-1; i >= 0; i--) {
//         for(int j = i+1; j < n; j++) {
//             if(v1[i] < v1[j]) v2[i] = max(v2[j], v2[i]);
//             else f[i] = max(f[j], f[i]);
//             }
//     v2[i]++;
//     f[i]++;
//     ans = max(ans, v2[i] + f[i] - 1);
// }
// cout << ans;

    
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// ll t,n;
// ll dp[100] = {1,1,1,2,2};

// int main(){
//     cin >> t;

//     for(int i=5;i<100;i++)
//         dp[i] = dp[i-1] + dp[i-5];

//     while(t--){
//         cin >> n;
//         cout << dp[n-1] << "\n";
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// //3 -> 길이 1
// //1 -> 길이 1
// //2 -> 길이1
// //1,2 -> 길이 2
// //3,1,2 -> 길이 3
// int main() { 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll n;
//     //while(cin >>n){

//     int T;
//     cin >> T;
//     for(int x = 1;x<=T;x++)
//     {
 
//     cin >> n;

//     vector<ll> a(n);
//     vector<ll> lis;

//     for(int k = 0; k < n; k++)
//         cin >> a[k];

//     int totalLength = 0;
//      for(int i = 0; i < n; i++) {
//             lis.clear();
//             for(int j = i; j < n; j++) {
//                 auto it = lower_bound(lis.begin(), lis.end(), a[j]);
//                 if(it == lis.end()) {
//                     lis.push_back(a[j]);
//                 } else {
//                     *it = a[j];
//                 }
//                 totalLength += lis.size();
//             }
//         }

//         cout << "Case #" << x << ": " << totalLength << "\n";
//     }
//     return 0;
// }



  // for(int i = 0;i<n;i++){
    //          for(int k = 0; k < n; k++) {
    //              auto it = lower_bound(lis.begin(), lis.end(), a[k]);
    //              if(it == lis.end()) {
    //              lis.push_back(a[k]);
    //              totalLength += a[k];
    //     }
    //     else *it = a[k];
    // }
    // }

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// int t,n,m,temp;

// int check(int target, vector<int> &v){
//     int l = 0, r = v.size()-1;
//     int mid;
//     while(l<=r){
//         mid = (l + r) / 2;
//         if(v[mid] > target) r = mid - 1;
//         else if(v[mid] == target) return 1;
//         else l = mid + 1;
//     }
//     return 0;
// }

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n; 
//     cin >> n;

//     int v[1001];
//     vector<int>totalLength;

//     for(int k = 0;k<n;k++){
//         cin >> v[k];
//     }

//     for(int k = 0;k<n;k++)
//         for(int j = k;j<n;j++)
//             totalLength.push_back(v[k] + v[j]); // 누적을 통한 3수의 합

//     sort(v, v+n);
//     sort(totalLength.begin(),totalLength.end());

//     for(int k = n-1;k>=0;k--){
//         for(int j = k;j>=0;j--){
//             int maxNum = v[k] - v[j];
//             bool ans = check(maxNum, totalLength); //x,y,z,k있다고할때, x+y = k-z 성립하면 됨. 단 k가 최대값!!! 
//             if(ans) {
//                 cout << v[k];
//                  return 0;
//             }
//         }
//     }
//         return 0;
// }

// int main(){
//     int n,m,sum;
//     vector<int>a;
//     vector<int>b;
//     vector<int>ans;
//     cin >> n >> m;

//     for(int k = 0;k<n;k++) cin >> sum, a.push_back(sum);
//     sort(a.begin(),a.end());
//     for(int k = 0;k<m;k++) cin >> sum, b.push_back(sum);
//     sort(b.begin(), b.end());
//     int cnt = 0;
//     for(int k = 0;k<n;k++) if(!check(a[k], b)) cnt += 1, ans.push_back(a[k]);
//     if(!cnt){
//         cout << "0";
//     }else{
//         cout << cnt << "\n";
//         for(int k = 0;k<ans.size();k++){
//             cout << ans[k] << " ";
//         }
//     }

// }

    // scanf("%d", &t);
    // while(t--){
    //     vector<int>v;
    //     scanf("%d", &n);
    //     for(int k = 0;k<n;k++) scanf("%d", &temp),v.push_back(temp);
    //     sort(v.begin(), v.end());
    //     scanf("%d", &m); for(int k = 0;k<m;k++) scanf("%d", &temp), cout  << check(temp,v) << "\n";
    // }

// int main(){ 
//     scanf("%d", &t);
//     while(t--){
//         vector<int>v;
//         scanf("%d", &n);
//         for(int k = 0;k<n;k++) scanf("%d", &temp),v.push_back(temp);
//         sort(v.begin(), v.end());
//         scanf("%d", &m); for(int k = 0;k<m;k++) scanf("%d", &temp), cout  << check(temp,v) << "\n";
//     }
// }


// int bSearch(vector<int>&arr, int target, int start, int end){
//     while(start<=end){
//         int mid = (start + end) / 2;
//         if(arr[mid] == target) return mid;
//         else if(arr[mid] > target) end = mid - 1;
//         else start = mid + 1; 
//     }
//     return -1;
// }

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, target;
//     cin >> n >> target;

//     vector<int>arr;

//     for (int k = 0; k < n; k++)
//     {
//         int x;
//         cin >> x;
//         arr.push_back(x);
//     }
//    int result = bSearch(arr, target, 0, n - 1);
//     if (result == -1) {
//         cout << "no answer\n";
//     } else {
//         cout << (result + 1) << '\n'; 
//     }

    
//         return 0;
// }



// #include <bits/stdc++.h>
// using namespace std; 
// int main() {
//     int n, max = 0,temp = 0, min = 0, avg = 0;
//     cin >> n;
//     int a[100001];
//     for(int k = 0;k<n;k++){
//         cin >> a[k];
//         for(int j = k+1;j<n;j++){
//             if(a[k] < a[j]){
//                 temp = a[k];
//                 a[k] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     max = a[0];
//     for(int k  = 0;k<n;k++){
//         int test = 0;
//         for(int j = k;j<n;j++){
//             test += a[j];
//             avg = max/n;
//             if(max < test && avg < a[j]){
//                 max = test;
//             }
//         }
//     }

//     cout << max << "\n";

// return 0; 
// }



// #include <bits/stdc++.h>
// using namespace std; 

// int ans = 0;
// int main(){
//     int N;
//     cin >> N;
//     vector<int> nums(N);

//     for(int k = 0;k<N;k++)
//         cin >> nums[k];
    
//     sort(nums.begin(), nums.end(),greater<>());
    
//     for(int k = 0;k<N;k++){
//         int tmax = nums[k];
//         int t = 1;
//         for(int j = k + 1; j < N;j++){
//             if(nums[j] <= tmax/t){
//                 break;
//             }
//                 tmax += nums[j];
//                 t++;
//         }
//         if(ans < tmax)  ans = tmax;
//     }
//     cout << ans;

//     return 0;
// }


// int main() {
//     int N;
//     cin >> N;

//     vector<Meeting> meetings(N);
//     for (int k = 0; k < N; ++k)
//         cin >> meetings[k].start >> meetings[k].end;

//     sort(meetings.begin(), meetings.end(), compare);

//     int count = 0;
//     int currentTime = 0;
//     for (int k = 0; k < N; ++k) {
//         if (meetings[k].start >= currentTime) {
//             currentTime = meetings[k].end;
//             count++;
//         }
//     }

//     cout << count << endl;
//     return 0;
// }



// //모든 수에 최대공약수 1은 디폴트(소수간의 비교라도)
// //입력받은거 인자로 2중포문으로 gcd 구하고 totalLength으로 누적 -> ans
// // totalLength이 누적되지않게 배열 원소로 각각 출력
// #include <bits/stdc++.h>
// using namespace std; 

// long long n_arr[101] = { 0 };
//  long long totalLength[101] = { 0 };

// int gcd(int x, int y)
// {
//     if (x % y == 0) return y;
//     else return gcd(y, x % y);
// }
 
// int main()
// {
//     int t, n;
 
//     cin >> t;
 
//     for (int k = 0; k < t; k++)
//     {
//         cin >> n;
//         for (int j = 0; j < n; j++)
//         {
//             cin >> n_arr[j];
//         }
//         for (int k = 0; k < n; k++)
//         {
//             for (int p = k + 1; p < n; p++)
//             {
//                 totalLength[k] += gcd(n_arr[k], n_arr[p]);
//             }
//         }
//     }
 
//     for (int k = 0; k < t; k++)
//         cout << totalLength[k]<<"\n";
// }


// #include<bits/stdc++.h>
// using namespace std;

// int a[10001] = {0,};
// int d[10001] = {0,};

// int main(){ 
//     int n,k;
//     cin >> n >> k;

//     for(int k = 1;k<=n;k++) 
//         cin >> a[k];


// d[0] = 1;

// for(int k = 1;k<=n;k++){
//     for(int j = a[k]; j<=k;j++){
//         d[j] = d[j] + d[j-a[k]];
//     }
// }

// cout << d[k] << "\n";

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int c[1001] = {0,};
// int d[1001] = {0,};

// int main(){ 
//     int n;
//     cin >> n;

//     for(int k = 1;k<=n;k++){
//         cin >> c[k];
//         d[k] = c[k]/k; //평균값
//     }

//     for(int k = 1;k<=n;k++){
//         for(int j = 1; k+j<=n; j++){
//             if(c[k] + c[j] > c[k+j]){ //기존거 보다 크다면?
//                 c[k+j] = c[k] + c[j]; //체인지
//                 d[k+j] = d[k+j]/(k+j); //평균값도 체인지
//             }
//         }
//         if(c[n] < d[n] * n)
//             c[n] = d[n] * n;
//     }

//     cout << c[n];

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     int n,m;
//     cin >> n; //크래인
//    vector<int> c(m);

//     for(int k = 0;k<n;k++){
//         cin >>c[k]; //크래인 각각의 무게
//     }
//     sort(c.begin(), c.end(),greater<>());

//     cin >> m; // 상자수
//     vector<int> box(m);
//     for(int k = 0;k<m;k++)
//         cin >> box[k]; //상자 각각의 무게
//     sort(box.begin(), box.end(),greater<>());

//     int ans = 0;

//     int flag = 0;
//    if(c[0] < box[0]) ans << -1;
//    else{
//     while(box[m-1] != -1){
//     int cnt = 0;
//     for(int k = 0;k<n;k++){
//         for(int j = 0;j<m;j++){
//             if((c[k] > box[j]) && box[j] != -1 && cnt < m){
//                 box[j] = -1;
//               }
//               if(k == n-1 && j == m-1) flag = 1;
//           }
//            printf("@\n");
//         cnt += 1;
//           if(cnt == m || flag){
//             flag = 0;
//             ans += 1;
//             cnt = 0;
//             printf("2\n");
//           }
//       }
//     }
// }
// cout << ans << "\n";


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     int n, m;
//     //크래인
//     cin >> n;
//     vector<int> cranes(n);
//     for(int k = 0; k < n; k++)
//         cin >> cranes[k];
//     sort(cranes.begin(), cranes.end(), greater<>());

//     //박스
//     cin >> m;
//     vector<int> boxes(m);
//     for(int k = 0; k < m; k++){
//         cin >> boxes[k];
//     }
//     sort(boxes.begin(), boxes.end(), greater<>());

//     //-1
//     if(cranes[0] < boxes[0]){
//         cout << -1 << "\n";
//         return 0;
//     }

//     int ans = 0;

//     while(!boxes.empty()){
//         for(int k = 0; k < cranes.size(); k++){ 
//             for(int j = 0; j < boxes.size(); j++){ 
//                 if(cranes[k] >= boxes[j]){ 
//                     boxes.erase(boxes.begin() + j);
//                     break;
//                 }
//             }
//         }
//         ans++;
//     }

//     cout << ans << "\n";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int n;
//     cin >> n;
//     int ans = 0;
//     vector<int> a(n);
//     for(int k = 0;k<n;k++)
//         cin >> a[k];
   
//     sort(a.begin(), a.end(), greater<>());

//      // 2, 10 15
//      // 6, 1 2 50 80 9000 9200

//      for(int k = 0;k<n;k++){
//         int totalLength = 0;
//         int cnt = 1;
//         for(int j = 0;j<=k;j++){
//             totalLength += a[k]; //비교값 누적.시간복잡도 고려하자..(OlogN)
//         }
//         if(ans <= totalLength) ans = totalLength;
//      }
//     cout << ans;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;

//     //시간복잡도 O(N), 앞에서부터 최대값까지 비교하면 무조건 초과.
//     //max 값을 뒤에서부터 찾아내면, 값이 커지는 시점에 new max가 갱신되고, 값이 작아질때에는 max - a[k]로 누적시키면 된다.
    
//     while(t--){
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for(int k = 0;k<n;k++){
//             cin >> a[k];
//         }
//         long long max = 0;
//         long long ans = 0;
//         for(int k = n-1;k>=0;k--){
//             if(max < a[k]) max = a[k];
//             else ans += max - a[k]; 
//         }
//         cout << ans << "\n";
//         }

//         return 0;
// }


// //최빈값이 여러 개 있을 경우 두번쨰로 작은 수를 출력
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n;		
// 	double element;
// 	vector <double> v;
// 	double ans1 = 0;
// 	double ans2 = 0;
// 	double ans3 = 0;
// 	double ans4 = 0;

// 	cin >> n;
// 	for(int k = 0; k < n; k++) {
// 		cin >> element;
// 		v.push_back(element);
// 	}

// 	// 1. 산술평균(젤쉽)
// 	for (int k = 0; k < n; k++) {
// 		ans1 += v[k];
// 	}
// 	ans1 = round(ans1 / n);
// 	// -0 출력 방지(예외사항 적어놓은거 그대로 반영)
// 	if (ans1 == -0) {
// 		ans1 = 0;
// 	}

// 	// 2. 중앙값(오름차순 정렬후 중앙위치값, 9개일때 5번째, 홀수라 편하다)
// 	sort(v.begin(), v.end());
// 	if (n == 1) {
// 		ans2 = v[0]; //1개일땐 이걸로
// 	}
// 	else {
// 		ans2 = v[(n - 1) / 2];
// 	}

	
// 	// 3. 최빈값(이거에 달림)
// 	int count[8001] = { 0, };
// 	for (int k = 0; k < n; k++) {
// 		// 4-1. 0 또는 양수일 경우
// 		if (v[k] >= 0) {
// 			count[int(v[k])]++;
// 		}
// 		// 4-2. 음수일 경우(-1은 4001번째에 저장)
// 		else {
// 			count[int(fabs(v[k])) + 4000]++;
// 		}
// 	}

// 	// 최빈값이 여러개일 경우(여러 개 있을 때에는 최빈값 중 두! 번째로 작은 값을 출력)
// 	int max = count[0];
// 	for (int k = 0; k < 8001; k++) {
// 		if (max < count[k]) {
// 			max = count[k];
// 		}
// 	}

// 	vector <double> mv;
//     //최빈값이 2개이상일경우 잡기위함
// 	for (int k = 0; k < 8001; k++) {
// 		if (max == count[k]) 
//             (k<=4000) ? mv.push_back(k) :	mv.push_back((k - 4000) * (-1)); //음수로 다시 변환(4001번째에 저장한 -1 같은 경우)
// 	}

// 	// 정렬 필요. 두번째로 작은 최빈값 출력(핵심 로직)
// 	sort(mv.begin(), mv.end());

//     (mv.size() == 1) ? ans3 = mv[0] : ans3 = mv[1];

// 	// 4. 범위 (최댓값과 최솟값의 차이)
// 	ans4 = v[n - 1] - v[0];

// 	cout << ans1 << "\n";
// 	cout << ans2 << "\n";
// 	cout << ans3 << "\n";
// 	cout << ans4 << "\n";

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     int max;
//     double ans1,ans2,ans3,ans4;

//     cin >> n;
//     vector<double> a(n);

//     for(int k = 0;k<n;k++){
//         cin >> a[k];
//         ans1 += a[k];
//     }

//     ans1 = round(ans1/n); //1
//     if(ans1 == -0) ans1 = 0;

//     sort(a.begin(), a.end());

//     int mid = (n-1)/2;
//     ans2 = a[mid]; //2
    
//     int cntArr[8001] = {0,};

//      for(int k = 0;k<n;k++)
//        (a[k] >= 0) ? cntArr[int(a[k])]++ : cntArr[int(fabs(a[k]))+4000]++;

//     max = 0;

//     for(int k = 0;k<8001;k++){
//         if(max < cntArr[k]){
//             max = cntArr[k];
//         }
//     }

//       vector<double> ans3Arr;

//      for(int k = 0;k<8001;k++){
//         if(max == cntArr[k]){
//             (k<=4000) ? ans3Arr.push_back(k): ans3Arr.push_back((k-4000) * (-1));
//         }
//      }

//      sort(ans3Arr.begin(),ans3Arr.end());

//      (ans3Arr.size() == 1) ? ans3 = ans3Arr[0] : ans3 = ans3Arr[1]; // 3

//      ans4 = a[n - 1] - a[0]; //4

//     cout << ans1 << "\n";
//     cout << ans2 << "\n";
//     cout << ans3 << "\n";
//     cout << ans4 << "\n";

//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int dp[101][100001];
// int w[101];
// int v[101];

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n,k;
//     cin >> n >> k;

//     for(int k = 1;k<=n;k++){
//         cin >> w[k] >> v[k]; // i번째 무게-가치
//         for(int j = 1;j<=k;j++){  //당연히 입력받은 새로운 무게보다 클때에만 갱신
//         (j >= w[k]) ? dp[k][j] = max(dp[k-1][j], v[k] + dp[k-1][j-w[k]]) : dp[k][j] = dp[k-1][j]; 
//         }
//     }
//     cout << dp[n][k];

//         return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;
//     int coin[21] = { 0, };
 
//     while(T--) {
//         int N;
//         int M;
//         cin >> N;
 
//         for (int k = 1;k <= N; k++) {
//             cin >> coin[k];
//         }
//         cin >> M;
 
//         int dp[10001] = { 0 };
//         dp[0] = 1; //핵심로직 1
 
//         for (int k = 1;k <= N;k++) {
//             for (int j = coin[k]; j<= M; j++) {
//                 dp[j] += dp[j - coin[k]];//핵심로직 2
//             }
//         }
//         cout << dp[M] << "\n";
//     }
//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// string s;
// char str[51];
// int alpha[26] = {0,};

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> s;
    
//     int size = s.size();
    
//     for(int k = 0;k<size;k++){
//         alpha[s[k] - 'A']++;
//     }

//     int oddCount = 0;
//      for(int k = 0;k<size;k++){
//         if(alpha[k] % 2 != 0){
//             oddCount++;
//             str[size/2] = k + 'A';
//             alpha[k]--;
//         }
//     }

//     if(oddCount > 1){
//         cout << "I'm Sorry Hansoo";
//         return 0;
//     }else{
//         for(int k = 0;k<size;k++){
//             int l = 0;
//             int r = size - 1;
//             str[l++] = k + 'A';
//             str[r--] = k + 'A';
//             alpha[k] -= 2;
//         }
//     }
//     for(int k=0; k<s.size(); k++) {
// 			cout << str[k];
// 		}

//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() { 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N;
//     cin >> N;
//     int arr[301] = {0,};
//     int dp[301] = {0,};

//     for(int k = 1; k <= N; k++) {
//         cin >> arr[k];
//     }

//     dp[1] = arr[1];
//     if (N >= 2) {
//         dp[2] = arr[1] + arr[2];
//     }
//     if (N >= 3) {
//         dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
//     }

//     for(int k = 4; k <= N; k++) {
//         dp[k] = max(dp[k-2] + arr[k], dp[k-3] + arr[k-1] + arr[k]);
//     }

//     cout << dp[N] << "\n";

//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// long INF = 1e9;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int N;
//     cin >> N;

//     long long dp[N+1][10];
//     for(int k = 1;k<=9;k++){
//         dp[1][k] = 1;
//     }
//     dp[1][0] = 0;

//     for(int k = 2;k<=N;k++){
//         for(int j = 0;j<=9;j++){
    // 핵심 로직 예외처리!
//     if(j == 0) dp[k][0] = dp[k-1][1] % INF;
//         else if(j == 9) dp[k][9] = dp[k-1][8] % INF;
//         else dp[k][j] = (dp[k-1][j-1] + dp[k-1][j+1]) % INF;
//         }
//     }
//  long long cnt = 0;
// for(int k = 0; k <= 9; k++){
//     cnt = (cnt + dp[N][k]) % INF;
// }


//    cout << cnt << "\n";

//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;

//     int arr[n+1][10];

//     for(int k = 0;k<10;k++){
//         arr[1][k] = 1;
//     }

//     for(int k = 2;k<=n;k++){
//         for(int j = 0;j<10;j++){
//             if(j == 0){
//                 arr[k][j] = 1;
//                 continue;
//             }
//             arr[k][j] = (arr[k-1][j] + arr[k][j-1]) % 10007;
//         }
//     }    
    
//     int ans = 0;
//     for(int k = 0;k<10;k++){
//         ans += arr[n][k];
//     }

//     ans %= 10007;

//     cout << ans << "\n";

//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t,m,s,d;

//     cin >> t >> m >> s;
//     cin >> d;

//     int t1 = 0,m1 = 0, s1 = 0;

//     t1 = d / 3600;
//     d %= 3600;
//     m1 = d / 60;
//     d %= 60;
//     s1 += d;

//     t += t1;
//     m += m1;
//     s += s1;

//     if(s>=60){
//         m+= 1;
//         s-=60;
//     }

//     if(m>=60){
//         t+= 1;
//         m-=60;
//     }

//     if(t>=24){
//         t %= 24;
//     }

//     cout << t << " " << m << " " << s << " " << "\n";

//      return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;

//     cin >> n;

//     if(n%2 == 1){
//         cout << "SK";
//     }else{
//         cout << "CY";
//     }
    
    
//         return 0;
// }

//  typedef unsigned long long int ll;


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll n;
//     cin >> n;
    
//     // if(n==1){
//     //     cout << "SK";
//     // }else if(n == 2){
//     //     cout << "CY";
//     // }else if(n == 3){
//     //     cout << "SK";
//     // }else if(n == 4){
//     //     cout << "SK";
//     // }else if(n == 5){
//     //     cout << "SK";
//     // }else{
//     //     if(n%2 == 1){
//     //    cout << "CY";
//     //     }else{
//     //         cout << "SK";
//     //     }
//     // }

//     if(n%7 == 0 || n % 7 == 2){
//       cout << "CY" << "\n";
//     }else{
//               cout << "SK";
//     }
    
//         return 0;
// }


// const int MOD = 15746;

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;

//     int dp[1000001];

//     cin >> n;

//     dp[1] = 1;
//     dp[2] = 2;

//     // for(int k = 3;k<=n;k++){
//     //     dp[k] = dp[k-1] % MOD + dp[k-2] % MOD;
//     // }

//     // cout << dp[n] % MOD << "\n";

// // 준영스 모듈러 
//         for(int k = 3;k<=n;k++){
//         dp[k] = (dp[k-1] + dp[k-2]) % MOD;
//     }

//     cout << dp[n] << "\n";

//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int a[10001], d[10001];

// int main(){ 
//     int n,k;
//     cin >> n >> k;

//     for(int k = 0;k<n;k++){
//         cin >> a[k];
//     }

//     fill(d, d+10001, 100001);
//     d[0] = 0;

//     sort(a,a + n);

//     for(int k = 0; k<n;k++){
//         for(int j = a[k]; j<=k; j++){
//             d[j] = min(d[j], d[j - a[k]] + 1);
//         }
//     }

//     if(d[k] == 100005){
//         cout << -1 << "\n";
//     }else{
//         cout << d[k] << "\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int l[1000001] = {0,};
// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, ans= 0;
//     cin >> n;

//     for(int k = 0;k<n;k++){
//         int sum;
//         cin >> sum;
//         l[sum] = l[sum-1] + 1;
//         ans = max(ans, l[sum]);
//     }

//     cout << n - ans << "\n"; 

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

// int sum; // 입력받을 요소의 개수
// int inputArray[1000001]; // 입력받은 요소를 저장할 배열
// int posInSeq[1000001]; // 각 요소가 LIS에서 위치하는 인덱스를 저장할 배열
// int lenLIS; // LIS의 길이를 저장할 변수
// vector<int> LIS; // LIS를 저장할 벡터
// vector<int> result; // 결과를 출력하기 위한 벡터

// int main(){
//     cin >> sum;
//     for (int k = 1; k <= sum; k++) cin >> inputArray[k];

//     LIS.push_back(inputArray[1]);
//     for (int k = 2; k <= sum; k++) {
//         if (LIS[lenLIS] < inputArray[k]) {
//             LIS.push_back(inputArray[k]);
//             lenLIS++;
//             posInSeq[k] = lenLIS;
//         }
//         else {
//             int pos = lower_bound(LIS.begin(), LIS.end(), inputArray[k]) - LIS.begin();
//             LIS[pos] = inputArray[k];
//             posInSeq[k] = pos;
//         }
//     }

//     cout << lenLIS + 1 << '\n';
//     for(int k=sum; k>=1 && lenLIS >=0; k--){
//         if (posInSeq[k] == lenLIS) {
//             result.push_back(inputArray[k]);
//             lenLIS--;
//         }
//     }

//     for (int k = result.size() - 1; k >= 0; k--)
//         cout << result[k] << ' ';
// }


// #include<bits/stdc++.h>
// using namespace std;

// int arr[1001];
// int arrIdx[1001];
// int lenArr;
// vector<int>LIS;
// vector<int>result;
// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;

//     for(int k = 1;k<=n;k++) 
//         cin >> arr[k];
    
//     LIS.push_back(arr[1]); //1번째 수열 값

//     for(int k = 2;k<=n;k++){
//         if(LIS[lenArr] < arr[k]){ // LIS[0] == 10 < 20, LIS[1] == 20 < 10 X, LIS[1] == 20 < 30, 
//         LIS.push_back(arr[k]); // 20 push, 30 push
//         lenArr++; // 1, 2
//         arrIdx[k] = lenArr; // 20까지 1, 30까지 2, 
//         }else{
//             int pos = lower_bound(LIS.begin(), LIS.end(), arr[k]) - LIS.begin(); // 0, 1
//             LIS[pos] =arr[k]; //LIS[0] = 10, LIS[1] = 20,
//             arrIdx[k] = pos; //arrIdx[3] = 0 //3번째 10의 초기화 지점, arrIdx[5] = 0 //5번째 20의 초기화 지점
//         }
//     }

//     cout << lenArr + 1 << '\n';
//     for(int k=n; k>=1 && lenArr>=0; k--){
//         if (arrIdx[k] == lenArr) {
//             result.push_back(arr[k]);
//             lenArr--;
//         }
//     }

//     for (int k = result.size() - 1; k >= 0; k--)
//         cout << result[k] << ' ';
  
//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;

//     int a[7];

//     int ans1 = 0,ans2 = -1,minNum = 100;
//     for(int k = 0;k<7;k++){
//         cin >> a[k];
//         if(a[k] % 2){
//             ans1 += a[k];
//             if(a[k] < minNum){
//                 minNum = a[k];
//             }
//         }
//     }

//     if(!ans1){
//         cout << ans2;
//     }else{
//         cout << ans1 << "\n" << minNum;
//     }
//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n1,n2;

//     while(true){
//         cin >> n1 >> n2;
//     if(n1 == 0 && n2 == 0){
//             break;
//         }
//         else if(n1 % n2 == 0){
//             cout << "multiple\n";
//         }else if(n2 % n1 == 0){
//             cout << "factor\n";
//         }else{
//             cout << "neither\n";
//         }
//     }
    
//         return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--){
//         int x,y,l,d,cnt = 0;
//         cin >> x >> y;
//         l = y - x;
//         d = sqrt(l);
//         if(pow(d,2) == l){
//             cnt = (2 * d) - 1;
//         }else{
//             cnt = 2*d;
//         }
//         if(l > d*(d+1)) cnt += 1;
//         cout << cnt << "\n";
//     }
    
//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n,m;
//     cin >> n >> m;
//     int arr[n+1] = {0,};
//     for(int k = 0;k<m;k++){
//         int a,b,c;
//         cin >> a >> b >> c;

//         for(int j = a;j<=b;j++){
//             arr[j] = c;
//         }
//     }

//     for(int k = 1;k<=n;k++){
//         cout << arr[k] << " ";
//     }
//         return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, s;
//     cin >> n >> s;

//     vector<int> arr(n); 
//     for(int k = 0; k < n; k++){
//         cin >> arr[k];
//     }

//     int totalLength = 0, end = 0, m = INT_MAX; 
//     for(int start = 0; start < n; start++){
//         while(totalLength < s && end < n){
//             totalLength += arr[end];
//             end++;
//         }

//         if(totalLength >= s){
//             m = min(m, end - start); 
//         }
//         totalLength -= arr[start];
//     }

//     if(m == INT_MAX) m = 0; 
//     cout << m << "\n";
    
//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// 	int n;
// 	scanf("%d", &n);

// 	int ret = 1;
// 	int max = 1;
// 	int add = 6;

// 	while (1) {
// 		if (n <= max) break;

// 		max += add;
// 		add += 6;
// 		++ret;
// 	}

// 	printf("%d\n", ret);
    
//         return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n,m,cnt = 0, totalLength = 0;
// 	int arr[10001];
// 	cin >> n >> m;
// 	for(int k = n; k<=m;k++){
// 		if(sqrt(k) == (int)sqrt(k)){
// 			arr[cnt] = k;
// 			totalLength += k;
// 			cnt++;
// 		}
// 	}

// 	if(cnt == 0){
// 		cout << -1;
// 		return 0;
// 	}
// 	cout << totalLength << "\n" << arr[0];
    
//         return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> arr(n); 

//     for(int k = 0; k < n; k++){
//         cin >> arr[k];
//     }

//     int totalLength = 0, end = 0, maxNum = INT_MAX; 

//     for(int start = 0; start < n; start++){
//         while(totalLength < m && end < n){
//             totalLength += arr[end];
//             end++;
//         }

//         if(totalLength <= m){
//             maxNum = min(maxNum, end - start); 
//         }
//         totalLength -= arr[start];
//     }

//     if(maxNum == INT_MAX) m = 0; 
//     cout << maxNum << "\n";
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> arr(n); 
//     for(int k = 0; k < n; k++){
//         cin >> arr[k];
//     }

//     sort(arr.begin(), arr.end()); 

//     int minDiff = INT_MAX;
//     int j = 0;

//     for(int k = 0; k < n; ++k){
//         while(j < n && arr[j] - arr[k] < m){
//             j++;
//         }
//         if(j < n){
//             minDiff = min(minDiff, arr[j] - arr[k]);
//         }
//     }

//     cout << (minDiff == INT_MAX ? 0 : minDiff) << "\n";
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n, m;
//     cin >> n >> m;

//     vector<int> arr(n); 
//     for(int k = 0; k < n; k++){
//         cin >> arr[k];
//     }

//     sort(arr.begin(), arr.end()); 

//     int minDiff = INT_MAX;
//     int j = 0;

//     for(int k = 0; k < n; ++k){
//         while(j < n && arr[j] - arr[k] < m){
//             j++;
//         }
//         if(j < n){
//             minDiff = min(minDiff, arr[j] - arr[k]);
//         }
//     }

//     cout << (minDiff == INT_MAX ? 0 : minDiff) << "\n";
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// const int MOD = 1000000009;
// long long dp[1000001];

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     dp[1] = 1;
//     dp[2] = 2;
//     dp[3] = 4;

//     for (int k = 4; k <= 1000000; k++) {
//         dp[k] = (dp[k - 1] + dp[k - 2] + dp[k - 3]) % MOD;
//     }

//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         cout << dp[n] << "\n";
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// long long dp[91] = {0,};
// int main(){ 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     dp[1] = 1;
//     dp[2] = 1;


//     for(int k = 3;k<=n;k++){
//         dp[k] = dp[k-1] + dp[k-2];
//     }

//     cout << dp[n];
    
//         return 0;
// }

// const int MAX_LENGTH = 100;
// long long k;
// long long dp[MAX_LENGTH + 1][2];
// long long totalLength[MAX_LENGTH + 1];


// int main(){
//     scanf("%lld", &k);
    
//     dp[1][1] = 1; totalLength[1] = 1;
    
//     for (int k = 2; k <= MAX_LENGTH; k++){
//         dp[k][0] = dp[k - 1][0] + dp[k - 1][1];   //dp[k][0]: 길이가 n이고, 마지막숫자가 0
//         dp[k][1] = dp[k - 1][0];        //dp[k][1]: 길이가 n이고, 마지막숫자가 1
//         totalLength[k] = dp[k][0] + dp[k][1] + totalLength[k - 1]; // 길이가 n인 이친수 중에서 가장 큰 수가 전체 이친수에서 몇번째인가?
//     }
    
//     if (k == 1){
//         printf("1\n");
//     }
//     else {
//         printf("1");
//         int n = 0;
//         for (int k = 2; k <= MAX_LENGTH; k++){
//             if (k <= totalLength[k]) {
//                 n = k; break;
//             }
//         }
//         k -= (totalLength[n - 1] + 1);
//         n -= 1;
//         while (n > 0) {
//             if (k > totalLength[n - 1]){
//                 printf("1");
//                 k -= (totalLength[n - 1] + 1);
//             }
//             else {
//                 printf("0");
//             }
//             n -= 1;
//         }
//         printf("\n");
//     }
    
//     return 0;
// }