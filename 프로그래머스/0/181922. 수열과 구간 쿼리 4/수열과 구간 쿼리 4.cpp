#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
 
    for (int q = 0; q < queries.size(); q++) {
        int s = queries[q][0];
        int e = queries[q][1];
         int k = queries[q][2];
          for (int i = s; i <= e; i++) {
                if (k != 0 && i % k == 0) {
                       arr[i]++;
        
              
        }
    }
        
    }
    for(int j : arr){
        answer.push_back(j);
    }
    return answer;
}