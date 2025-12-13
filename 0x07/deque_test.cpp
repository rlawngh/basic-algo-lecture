#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;
// head: 가장 앞 원소 인덱스, tail: 가장 뒤 원소 인덱스+1
// 그냥 선형 덱 구현

void push_front(int x){
  dat[head-1]=x;
  head--;
}

void push_back(int x){
  dat[tail]=x;
  tail++;
}

void pop_front(){
  if(head!=tail) head++;
}

void pop_back(){
  if(head!=tail) tail--;
  
}

int front(){
  return dat[head];
}

int back(){
  return dat[tail-1];
  
}

void test(){
  push_back(30); // 30
  cout << front() << '\n'; // 30
  cout << back() << '\n'; // 30
  push_front(25); // 25 30
  push_back(12); // 25 30 12
  cout << back() << '\n'; // 12
  push_back(62); // 25 30 12 62
  pop_front(); // 30 12 62
  cout << front() << '\n'; // 30
  pop_front(); // 12 62
  cout << back() << '\n'; // 62
}

int main(void){
  test();
}
