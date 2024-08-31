
#include <iostream>
using namespace std;

int sum_from_to(int first, int last) {
    int sum = 0;

    // Swap first and last if first is greater than last
    if (first > last) {
        int temp = first;
        first = last;
        last = temp;
    }

    // Calculate the sum from first to last
    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}
int main() {  // Removed the semicolon here
    int first, last;

    cout << "Enter the first integer: ";
    cin >> first;
    cout << "Enter the last integer: ";
    cin >> last;

    int result = sum_from_to(first, last);
    cout << "The sum from " << first << " to " << last << " is: " << result << endl;

    return 0;
}
