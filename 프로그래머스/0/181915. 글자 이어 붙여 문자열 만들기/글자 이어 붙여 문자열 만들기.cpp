#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string mystring, vector<int> v) {
    string answer = "";

    vector<int> v_sorted = v;  // 원본 보존

    // 1. 중복 제거
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    // 2. index → char 매핑
    unordered_map<int, char> mp;
    for (int i = 0; i < v.size(); i++) {
        mp[v[i]] = mystring[v[i]];
    }

    // 3. 원본 순서대로 answer 생성
    for (int i = 0; i < v_sorted.size(); i++) {
        answer += mp[v_sorted[i]];
    }

    return answer;
}
