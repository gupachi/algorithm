#include <iostream> 
#include <vector>
#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n;
int main() {
    cin >> n;  
for(int i=1; i<=n; i++){

    v.push_back(i);

} 
sort(v.begin(),v.end());
do{
  for(int i=0; i<v.size();i++){
      cout<<v[i]<<" ";
  }
   cout << "\n"; 
}while(next_permutation(v.begin(),v.end()));
}
