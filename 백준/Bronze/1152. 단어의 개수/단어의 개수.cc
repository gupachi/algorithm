#include <iostream>
#include <vector>
using namespace std;
string n;

int getSize(const vector<string>& a){
    return a.size();
}
vector<string> split(const string& input,string deliminate){
    vector<string> result;
    auto start = 0;
    auto end = input.find(deliminate);
    while(end != string::npos){
        string token= input.substr(start,end-start);
     if (!token.empty())  // ⭐ 빈 문자열 제외
            result.push_back(token);
        start = end+deliminate.size();
        end = input.find(deliminate,start); //여기서 중요한게 start 다음 지점부터
    }
    string last = input.substr(start);
    if (!last.empty())  // ⭐ 빈 문자열 제외
        result.push_back(last);
    return result;
}
int main() {
   // cin>>n : 공백 전까지만 읽음
   getline(cin, n);
   vector<string> words= split(n," ");
   int count = getSize(words);
   cout << count << "";
   return 0;
}
