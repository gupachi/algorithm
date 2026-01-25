#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(int i : numbers){
        i*=2;
        answer.push_back(i);
    }
    return answer;
}