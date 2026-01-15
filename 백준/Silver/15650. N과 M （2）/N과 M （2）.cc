#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n,k,start;
int cnt = 0;
void print(vector<int>b){
    for(int i : b)cout<<i<<" ";
    cout<<"\n";
}
void combi(int start, vector<int> b) {
    // 기저 사례
    if (b.size() == k) {
        print(b);
        return;
    }

    for (int i = start + 1; i <= n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main() {
    cin>>n>>k;
    vector<int> b;
    combi(0, b);
    
    return 0;
}