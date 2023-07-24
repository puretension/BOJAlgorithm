#include<bits/stdc++.h>
using namespace std;

int num; // 입력받을 요소의 개수
int inputArray[1000001]; // 입력받은 요소를 저장할 배열
int posInSeq[1000001]; // 각 요소가 LIS에서 위치하는 인덱스를 저장할 배열
int lenLIS; // LIS의 길이를 저장할 변수
vector<int> LIS; // LIS를 저장할 벡터
vector<int> result; // 결과를 출력하기 위한 벡터

int main(){
    cin >> num;
    for (int i = 1; i <= num; i++) cin >> inputArray[i];

    LIS.push_back(inputArray[1]);
    for (int i = 2; i <= num; i++) {
        if (LIS[lenLIS] < inputArray[i]) {
            LIS.push_back(inputArray[i]);
            lenLIS++;
            posInSeq[i] = lenLIS;
        }
        else {
            int pos = lower_bound(LIS.begin(), LIS.end(), inputArray[i]) - LIS.begin();
            LIS[pos] = inputArray[i];
            posInSeq[i] = pos;
        }
    }

    cout << lenLIS + 1 << '\n';
    for(int i=num; i>=1 && lenLIS >=0; i--){
        if (posInSeq[i] == lenLIS) {
            result.push_back(inputArray[i]);
            lenLIS--;
        }
    }

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i] << ' ';
}


#include<bits/stdc++.h>
using namespace std;

int num; // 입력받을 요소의 개수
int inputArray[1000001]; // 입력받은 요소를 저장할 배열
int posInSeq[1000001]; // 각 요소가 LIS에서 위치하는 인덱스를 저장할 배열
vector<int> result; // 결과를 출력하기 위한 벡터
set<int> s; // std::set을 이용하여 LIS를 저장

int main(){
    cin >> num;
    for (int i = 1; i <= num; i++) cin >> inputArray[i];
    
    for (int i = 1; i <= num; i++) {
        // std::set의 lower_bound 함수를 사용하여 적절한 위치를 찾는다
        auto it = s.lower_bound(inputArray[i]);
        // 이미 같은 값이 존재한다면, 그 자리에 덮어씌운다
        if(it != s.end() && *it == inputArray[i]) continue;
        // 적절한 위치에 요소를 삽입
        if(it != s.end()) s.erase(it);
        s.insert(inputArray[i]);
        // 각 요소가 LIS에서 위치하는 인덱스를 저장
        posInSeq[i] = distance(s.begin(), s.find(inputArray[i]));
    }
    
    cout << s.size() << '\n';
    int lenLIS = s.size() - 1;
    for(int i=num; i>=1 && lenLIS >=0; i--){
        if (posInSeq[i] == lenLIS) {
            result.push_back(inputArray[i]);
            lenLIS--;
        }
    }
    
    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i] << ' ';
}
