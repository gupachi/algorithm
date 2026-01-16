#include <iostream>

int n = 0;

int fact(int n) {
    if (n == 0) return 0;
    else if (n == 1 || n==2) return 1;
    return  fact(n - 2) + fact(n - 1);
}

int main() {
    using namespace std;

    cin >> n;

    cout << fact(n) << endl;
    
}