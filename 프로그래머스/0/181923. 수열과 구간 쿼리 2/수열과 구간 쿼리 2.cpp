#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> v) {
    vector<int> answer;

    for (int i = 0; i < v.size(); i++) {
        int mn = 1000000000; 
        bool found = false; 

        for (int j = v[i][0]; j <= v[i][1]; j++) {
            if (j >= 0 && j < arr.size() && arr[j] > v[i][2]) {
                mn = min(mn, arr[j]);
                found = true;
            }
        }

        if (found)
            answer.push_back(mn);
        else
            answer.push_back(-1);
    }

    return answer;
}