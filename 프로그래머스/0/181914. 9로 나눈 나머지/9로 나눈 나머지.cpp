#include <string>
using namespace std;

int solution(string number) {
    int answer = 0;
    
    if (!number.empty()) {
        for (char i : number) {
            answer += (i - '0'); // char -> int
        }
    }

    answer %= 9; // 9로 나눈 나머지
    return answer;
}
