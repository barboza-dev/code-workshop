#include <iostream>
using namespace std;

int main() {
    cout << "Hello, world!" << std::endl;
    int n, sum = 0, num;
    cout << "How many numbers do you want to sum? ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        sum += num;
    }
    cout << "The sum is: " << sum << endl;
>>>>>>> feature
    return 0;
}