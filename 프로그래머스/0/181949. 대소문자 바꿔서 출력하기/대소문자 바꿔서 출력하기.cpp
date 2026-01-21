#include <iostream>
#include <string>
#include <vector>   // ✅ 추가

using namespace std;
// 'a' - 'A' == 32

int main(void) {
    string answer = "";
    vector<char> arr;
    string str;

    cin >> str;

    for (char c : str) {
        arr.push_back(c);
    }

    for (int i = 0; i < arr.size(); i++) {  // ✅ 세미콜론 추가
        if (65 <= arr[i] && arr[i] <= 90) {
            arr[i] = arr[i] + 32;
        } 
        else if (97 <= arr[i] && arr[i] <= 122) {
            arr[i] = arr[i] - 32;
        } 
        else {
            return 0;   // ✅ main이므로 return 0
        }
    }

    for (char c : arr) {
        answer += c;
    }

    cout << answer;   // ✅ 출력
    return 0;
}
