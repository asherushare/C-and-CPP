#include<iostream>
using namespace std;

int main() {
    int n;
    int r;
    int sum = 0;

    cout << "Enter number: ";
    cin >> n;

    while (n != 0) {
        r = n % 10;
        n = n / 10;
        sum = sum * 10 + r;  // Fix this line
    }

    cout << sum;

    return 0;
}
