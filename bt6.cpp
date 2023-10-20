#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int A = a, B = b, x = 0 , y = 0, g;
    bool flag = 0;

    x = 1; y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        {
            int tmp = x1;
            x1 = x - q * x1;
            x = tmp;
        }

        {
            int tmp = y1;
            y1 = y - q * y1;
            y = tmp;
        }

        {
            int tmp = b1;
            b1 = a1 - q * b1;
            a1 = tmp;
        }
    }

    cout << "GCD is: " << a1 << '\n';
    cout << "The pair of found {x, y} is: " << x << ' ' << y << " => " << x * A + y * B << " == " << a1 << '\n';
    cout << "LCM is: " << A * B / a1;

    return 0;
}
