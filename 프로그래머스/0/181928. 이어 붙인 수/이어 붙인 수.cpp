#include <string>
#include <vector>
#include <iostream>
using namespace std;

#include <string>
#include <vector>
using namespace std;

int solution(vector<int> num_list) {
    string odd = "";
    string even = "";
    int answer = 0;
    for (int i = 0; i < num_list.size(); i++) {
        if (num_list[i] % 2 == 1){
            odd += to_string(num_list[i]);   // 짝수 인덱스
        } else {
            even += to_string(num_list[i]);  // 홀수 인덱스
        }
    }
    answer = stoi(odd) + stoi(even);
    return answer;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    cout << solution(arr) << "";
    
}
