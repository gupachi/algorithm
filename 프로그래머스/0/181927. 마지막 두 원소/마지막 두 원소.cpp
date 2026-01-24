#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    int x,y;
    vector<int> b = arr;
    reverse(arr.begin(),arr.end());
    if(arr[0] > arr[1]){
        y = arr[0] - arr[1];
        b.push_back(y);
    }else if(arr[0] <= arr[1]){
        y = arr[0] * 2;
        b.push_back(y);
    }
    return b;
}