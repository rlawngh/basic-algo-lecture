#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0; 
// 헤드는 가장 앞 원소 인덱스, 꼬리는 가장 뒤 인덱스+1
// 빈 큐에는 헤드=꼬리=0
// 큐의 크기=꼬리-헤드
// 원형 큐도 있음
// 이건 그냥 선형 큐

void push(int x){
  dat[tail]=x;
  tail++;
}

void pop(){
  if(tail>head)
  head++;
}

int front(){ // 제일 앞 원소 반환
  return dat[head];
}

int back(){ // 제일 뒤 원소 반환
  return dat[tail-1];
}

void test(){
  push(10); push(20); push(30);
  cout << front() << '\n'; // 10
  cout << back() << '\n'; // 30
  pop(); pop();
  push(15); push(25);
  cout << front() << '\n'; // 30
  cout << back() << '\n'; // 25
}

int main(void) {
  test();  
}
