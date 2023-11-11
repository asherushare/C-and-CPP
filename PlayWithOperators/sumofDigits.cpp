#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the sum of digits
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    // Output the result
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
