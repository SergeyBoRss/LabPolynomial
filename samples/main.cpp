#include "Polynomial.h"

int main() {
    Polynomial pol1("12x^2yz+12+11x");
    Polynomial pol2("0");
    Polynomial pol3("-12x^2yz-12-11x");
    Polynomial pol4("1");
    Polynomial pol5("x^5");
    Polynomial pol6 = pol1 + pol1*(-1);
    pol1.print();
    return 0;
}