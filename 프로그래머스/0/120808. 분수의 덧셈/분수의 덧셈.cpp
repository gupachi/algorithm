#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int lcm = denom1*denom2 / gcd(denom1,denom2);
    int re1 = lcm / denom1;
    int re2 = lcm / denom2;
    int sum = (numer1*re1) + (numer2*re2);
     int g = gcd(sum, lcm);
    sum /= g;
    lcm /= g;

    answer.push_back(sum);
    answer.push_back(lcm);

    return answer;
}