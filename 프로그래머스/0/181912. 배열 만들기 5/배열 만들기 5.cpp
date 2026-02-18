#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {

    vector<int> answer;
    for (const string& str : intStrs) {
       
        if (s + l <= str.size()) {
            // 부분 문자열 추출
            string sub = str.substr(s, l);

            // 숫자로 변환
            long long num = stoll(sub);
           
            // K보다 큰 경우만 저장
            if (num > k) {
                answer.push_back(num);
            }
        }
    }

    return answer;
}