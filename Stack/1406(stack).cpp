#include<bits/stdc++.h>

using namespace std;

int main(){
    string str = "";
    cin >> str;
    stack<char> left,right; //커서 왼쪽 스택과 오른쪽 스택
    for(int i = 0;i<str.size();i++)
        left.push(str[i]); //커서왼쪽에 전부 넣는다
    
    int N;
    cin >> N;
    
    for(int i = 0;i<N;i++)
    {
        char ch;
        cin >> ch;
        
        switch(ch){
            case 'P': cin >> ch;
                left.push(ch);
                continue;
            case 'B': if(!left.empty())
                        left.pop();
                        continue;
            case 'L':
                    //커서 왼쪽 문자를 오른쪽 스택에 push
                    if(!left.empty())
                    {
                        right.push(left.top());
                        left.pop();
                    }
                continue;
            case 'D': if(!right.empty())
            {
                //커서 오른쪽 문자를 왼쪽 스택에 push
                left.push(right.top());
                right.pop();
            }
                continue;
        }
    }
    
    //커서 왼쪽 데이터들을 스택의 오른쪽으로 모두 옮김(LIFO이기에 맨마지막 데이터가 맨처음으로 출력될 것)
    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }
    
    return 0;
}
