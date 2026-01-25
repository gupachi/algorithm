#include <string>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(int num1, int num2) {
    double num = double(num1) / double(num2);
    double result = num *1000;
    int answer = floor(result);
    return answer;
}