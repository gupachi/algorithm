#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> arr;

int solution(int n) {
    vector<int> arr;  // ✅ 지역 변수
    
    for (int i = 1; i < n; i++) {
        if (n % i == 1) {
            arr.push_back(i);
        }
    }
    return arr[0];
}


int main() {
    cin >> n;
    cout << solution(n) << " ";

    return 0;
}

