#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> v, int num1, int num2) {
  vector<int> result(v.begin()+num1, v.begin()+num2+1);
  for(int x : v) {
    cout << x << " ";
  }
  return result;
}

int main(){
  vector<int> v;
  int num1,num2;
  cin>>num1>>num2;
  solution(v,num1,num2);
  
}