// #include<bits/stdc++.h>
// using namespace std;

// int n, result = 0;
// vector<string> words;
// int alphabet[26];  // 알파벳 별 가중치

// bool comp(int a, int b) {
//     return a > b;
// }

// int main() {
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         string word;
//         cin >> word;
//         words.push_back(word); // 벡터에 단어 저장
//     }

//     // 각 알파벳별 가중치 계산(핵심 로직)
//     for (int i = 0; i < n; i++) {
//         int pow = 1;
//         //마지막 char부터
//         for (int j = words[i].size() - 1; j >= 0; j--) {
//             int alp = words[i][j] - 'A';
//             alphabet[alp] += pow;
//             pow *= 10; // 자리수증가
//         }
//     }

//     sort(alphabet, alphabet + 26, comp);

//     int num = 9;
//     for (int i = 0; i < 26; i++) {
//         if (alphabet[i] == 0) break;
//         result += alphabet[i] * num;
//         num--;
//     }

//     cout << result << endl;

//     return 0;
// }
