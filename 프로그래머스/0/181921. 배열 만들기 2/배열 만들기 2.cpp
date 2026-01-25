#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> nums = {0, 5};   // 사용할 숫자
vector<int> path;           
vector<int> result;
int k;                        

void dfs(int depth, int l, int r) {
     
    if (depth == k) {
        int value = 0;
        for (int x : path) {
            value = value * 10 + x;  // 숫자로 변환
        }
         //[l,r] 범위 안에 들어올 때만. 
        if (value >= l && value <= r) {
            result.push_back(value);
        }

        return;
    }

    // 중복 순열
    for (int i = 0; i < nums.size(); i++) {
        path.push_back(nums[i]);
        dfs(depth + 1, l, r);
        path.pop_back();
    }
}

vector<int> solution(int l, int r) {
    k = to_string(r).length();  // r의 자리수
    dfs(0, l, r);
    if(result.size()==0){
        result.push_back(-1);
    }
    return result;
}
