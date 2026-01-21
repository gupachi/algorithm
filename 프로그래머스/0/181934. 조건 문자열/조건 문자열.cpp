#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string ineq, string eq, int n, int m) {
    if (ineq == ">" && eq == "=") {
        return n >= m;
    } 
    else if (ineq == "<" && eq == "=") {
        return n <= m;
    } 
    else if (ineq == ">" && eq == "!") {
        return n > m;
    } 
    else if (ineq == "<" && eq == "!") {  // ✅ && 로 수정
        return n < m;
    } 
    else {
        return -1;
    }
}

int main() {
    string ineq, eq;  // ✅ 변수 선언
    int n, m;

    cin >> ineq >> eq >> n >> m;
    cout << solution(ineq, eq, n, m);
    return 0;
}
