#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int i=0;
    vector<int> stk;
    while(true){
        if(i>= arr.size())break;
        if(stk.size()==0){
            stk.push_back(arr[i]);
            i++;
        }
        else if(stk.size()!=0 && stk.back() < arr[i]){
              stk.push_back(arr[i]);
              i++;
        }else if(stk.size()!=0 && stk.back() >= arr[i]){
             
              stk.pop_back();
        }else{
            break;
        }
    }
    return stk;
}