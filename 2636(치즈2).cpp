#include<bits/stdc++.h>
using namespace std;

const int dy[] = {-1,0,1,0};
const int dx[] = {0,1,0,-1};

int a[101][101];
int visited[101][101];
int counted[101][101];

int N,M;

int c = 0; //치즈수

//치즈가 다 녹았는지 확인
//bool isEmpty(){
//    bool flag = true;
//    for(int i = 0;i<N;i++){
//        for(int j = 0;j<M;j++){
//            if(a[i][j] == 1) flag = false;
//        }
//    }
//    if(flag) return true;
//    else return false;
//}

void bfs(int y, int x){
    memset(visited, 0, sizeof(visited));
    memset(counted, 0, sizeof(counted));
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
                //visited[ny][nx] = 1; //여기에 배치하면 counted누적이 불가함
                //핵심 로직1
                if(a[ny][nx] == 1){
                    counted[ny][nx]++;
                    continue; //더 전진X. 0의 제몫을 다함
            }
            q.push({ny,nx});
            visited[ny][nx] = 1; //핵심 로직1
        }
    }
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++)
            if(counted[i][j] >= 2) {
                a[i][j] = 0;
                c--;
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

    while(c > 0){
        bfs(0,0);
        cnt++;
    }

    cout << cnt << "\n";

    return 0;
}

//어거지 오답 풀이
//void bfs(int y, int x){
//    memset(visited, 0, sizeof(visited));
//    visited[y][x] = 1;
//    queue <pair<int,int>> q;
//    q.push({y,x});
//    while(q.size()){
//            tie(y,x) = q.front(); q.pop();
//            for(int i = 0;i<4;i++){
//                int ny = y + dy[i];
//                int nx = x + dx[i];
//                if(ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
//                if(visited[ny][nx]) continue;
//                visited[ny][nx] = 1;
//                //핵심 로직
//                if(a[ny][nx] == 1){
//                    if(a[ny-1][nx-1] == 0 && a[ny-1][nx] == 0 && a[ny][nx-1] == 0){
//                        a[ny][nx] = 0;
//                        cout << "야야\n";
//                        c--; //치즈 감소
//                        continue;
//                    }
//                    if(a[ny-1][nx+1] == 0 && a[ny-1][nx] == 0 && a[ny][nx+1] == 0){
//                        a[ny][nx] = 0;
//                        c--; //치즈 감소
//                        continue;
//                    }
//                if(a[ny+1][nx+1] == 0 && a[ny+1][nx] == 0 && a[ny][nx+1] == 0){
//                    a[ny][nx] = 0;
//                    c--; //치즈 감소
//                    continue;
//                    }
//                if(a[ny+1][nx-1] == 0 && a[ny+1][nx] == 0 && a[ny][nx-1] == 0){
//                    a[ny][nx] = 0;
//                    c--; //치즈 감소
//                    continue;
//                    }
//                if(a[ny][nx-1] == 0 && a[ny][nx+1] == 0){
//                    a[ny][nx] = 0;
//                    c--; //치즈 감소
//                    continue;
//                }
//            }
//            q.push({ny,nx});
//        }
//    }
//}
