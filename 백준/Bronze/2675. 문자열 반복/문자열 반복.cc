#include <iostream>

using namespace std;
int n,t;
string s;

string split(const string& s, int t) {
    string result;
    for(char c : s){
        result.append(t, c);
    }
    return result;
}
int main() {
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t >> s;
        string n = split(s,t);
        cout << n << "";
        cout << "\n";    
    }
   
    return 0;
}