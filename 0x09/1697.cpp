// http://boj.kr/ba53d62b7651443cbf7b2028c28ce197
#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dist[100002]; // 여긴 이렇게 깊이를 배열에다가 저장함
int n,k;
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  fill(dist, dist+100001,-1); // -1로 초기화
  dist[n] = 0; // 시작점은 거리 0
  queue<int> Q;
  Q.push(n);
  while(dist[k] == -1){ // 이걸로 종료 조건 판단
    int cur = Q.front(); Q.pop();
    for(int nxt : {cur-1, cur+1, 2*cur}){ // 이렇게 +1,-1,2* 한번에 관리
      if(nxt < 0 || nxt > 100000) continue; // 왜 이래도 되는지에 대한 논증 필요!!
      if(dist[nxt] != -1) continue; // 이미 방문한 곳 건너뜀
      dist[nxt] = dist[cur]+1;
      Q.push(nxt);
    }        
  }
  cout << dist[k];
}
