#include <string>
#include <vector>

using namespace std;

int even(int n) {
    return n / 2;
}

int odd(int n) {
    return 3 * n + 1;
}

vector<int> solution(int n) {
    vector<int> answer;

    while (true) {
        answer.push_back(n);

        if (n == 1) break;

        if (n % 2 == 0) {
            n = even(n);
        } else {
            n = odd(n);
        }
    }

    return answer;
}
