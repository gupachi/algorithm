#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> v){
    vector<int> answer;
    for(int k : arr){
        answer.push_back(k);
    }
      for(int i=0; i<v.size(); i++){

           
            swap(answer[v[i][0]],answer[v[i][1]]);
                   
        
    }      
     
    return answer;
}