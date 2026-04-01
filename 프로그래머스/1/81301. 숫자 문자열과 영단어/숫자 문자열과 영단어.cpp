#include<bits/stdc++.h>
using namespace std;
string temp;
map<string,int> a;

int solution(string s) {
   string result=" ";
    a = {{"zero",0}, {"one", 1}, {"two", 2}, {"three", 3},
  {"four", 4}, {"five", 5}, {"six", 6},
  {"seven", 7}, {"eight", 8}, {"nine", 9} };
  for(char ch : s){
      //1.숫자면 
      if(isdigit(ch)){
          result+=ch;
      }else{
          //temp:일시로 값을 담아둔다.
          temp+=ch;
          if(a.count(temp)==1){
              result+=to_string(a[temp]);
              //temp 초기화 할 것.
              temp="";
          }
          
      }
  }
  int answer= stoi(result);
  cout<<answer<<"\n";
  return answer;
}