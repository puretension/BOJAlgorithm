#include<bits/stdc++.h>
using namespace std;

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

int a[101][101];
int visited[101][101];

int N,M;

int c = 0; //치즈수

//가장자리가 0이라는 조건이 없다면? 치즈가 없는 부분을 찾는 로직을 넣어서 거기서 시작해야함

void bfs(int y, int x){
    memset(visited, 0, sizeof(visited));
    visited[y][x] = 1;
    queue <pair<int,int>> q;
    q.push({y,x});
    while(q.size()){
        tie(y,x) = q.front(); q.pop();
        for(int i = 0;i<4;i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = 1;
            //핵심 로직
            if(a[ny][nx] == 1) {
                a[ny][nx] = 0;
                c--; //치즈 감소
                continue;
            }
            q.push({ny,nx});
        }
    }
}

//가장자리에는 치즈가 놓여있지않기에 자동적으로 0셋팅, 가장자리에서 bfs돌리기
//디버깅 하면서 치즈확인

int main(){
    cin >> N >> M;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> a[i][j];
            if(a[i][j] == 1) c++;
        }
    }

    int cnt = 0; //시간
    int beforeEnd = 0; //마지막 삭제전 치즈수

    while(c > 0){
        beforeEnd = c;
        bfs(0,0);
        cnt++;
    }

    cout << cnt << "\n";
    cout << beforeEnd;

    return 0;
}



