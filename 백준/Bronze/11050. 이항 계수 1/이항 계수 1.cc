#include <iostream>
using namespace std;


long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n,r,sum;

    cin>>n>>r;
    sum = factorial(n)/(factorial(n-r)*factorial(r));
    cout<<sum<<" ";
    
    return 0;
}
