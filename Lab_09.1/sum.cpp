#include "sum.h"
#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = (x - 1) / (x + 1);
    s = a;
    do {
        n++;
        dod();
        s += a;
    } while (fabs(a) >= e);
}
