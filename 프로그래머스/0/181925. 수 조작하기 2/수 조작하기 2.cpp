#include <string>
#include <vector>

using namespace std;

string solution(vector<int> arr) {
    string answer;
    for(int i=0; i<arr.size()-1; i++){
      int result = arr[i+1] - arr[i];
       if(result == 1){
           answer+="w";
       }else if(result == -1){
           answer+="s";
       }else if(result == 10){
           answer+="d";
       }else if(result == -10){
           answer+="a";
       }
    }
    return answer;
}