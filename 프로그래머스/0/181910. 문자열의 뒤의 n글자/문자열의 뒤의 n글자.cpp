#include <string>
#include <vector>
#include <iostream>
using namespace std;
vector<char> arr;
string solution(string my_string, int n) {
    string answer = "";
    for(char c : my_string){
        arr.push_back(c);
    }
    for(int i=arr.size()-n; i<arr.size(); i++){
        answer+=arr[i];
    }
    return answer;
}

int main(){
    string my_string;
    int n;
    cin>>my_string>>n;
    cout << solution(my_string,n) << " ";
}