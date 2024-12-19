#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int cube(int num) {
    return num * num * num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Square of " << number << " is: " << square(number) << endl;
    cout << "Cube of " << number << " is: " << cube(number) << endl;
    return 0;
}
