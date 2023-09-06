#include<bits/stdc++.h>
using namespace std;
int N,C;
vector<pair<int,int>> v;
map<int,int>mp, mp_first;
int num[1001];

bool cmp(pair<int,int> a, pair<int,int> b){
   //횟수가 같다면 순서가 빨랐던 숫자순으로 정렬
   if(a.first == b.first) return mp_first[a.second] < mp_first[b.second];
   //횟수가 다르다면 더 많이 등장한 순으로 정렬
   return a.first > b.first;
}

int main(){
   cin >> N >> C;

   for(int i = 0;i<N;i++){
       cin >> num[i];
       mp[num[i]]++;
       if(mp_first[num[i]] == 0) mp_first[num[i]] = i + 1; //1. 핵심로직 1(순서를 기억하는 mp_first)
   }

   //2. 벡터에 횟수-숫자 순으로 집어넣고,
   for(auto it: mp) {
       v.push_back({it.second, it.first});
   }

   sort(v.begin(), v.end(), cmp);

   for(auto i: v)
       for(int j = 0;j<i.first;j++)
           cout << i.second << " ";

   return 0;
}

