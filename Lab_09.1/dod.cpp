#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsVar;

void nsDod::dod() {
    R = (pow((x - 1) / (x + 1), 2)) * (2 * n - 1) / (2 * n + 1);
    a *= R;
}
