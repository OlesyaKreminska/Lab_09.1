#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "xp = "; cin >> x_p;
    cout << "xk = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> e;
    cout << fixed;

    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "log(x)" << " |"
        << setw(9) << "S" << " |"
        << setw(5) << "n" << "  |" << endl;
    cout << "-----------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        sum();
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(4) << log(x) << " |"
            << setw(10) << setprecision(4) << 2 * s << " |"
            << setw(5) << n << " |" << endl;
        x += dx;
    }

    cout << "-----------------------------------------" << endl;
    return 0;
}
