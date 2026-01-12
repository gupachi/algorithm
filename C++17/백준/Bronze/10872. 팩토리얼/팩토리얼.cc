#include <iostream>

int n, result = 1;

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    using namespace std;

    cin >> n;

    if (n == 0 || n == 1) {
        cout << 1 << endl;
    } else {
        cout << n * fact(n - 1) << endl;
    }
}
