#if 0
#include "summaryOne.h"

int main()
{
    summaryOne();
    return 0;
}
#else
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    char op;


    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << setprecision(0)<<static_cast<double>(a / b) << endl;
            break;
        default:
            break;
    }

    return 0;
}
#endif