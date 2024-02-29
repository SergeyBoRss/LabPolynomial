#include <gtest.h>
#include "Polynomial.h"

TEST(Polynomial, can_create_polynomial) {
    ASSERT_NO_THROW(Polynomial("12xyz+12x^2y^2z^2-4z-7"));
}

TEST(Polynomial, can_create_empty_polynomial) {
    ASSERT_NO_THROW(Polynomial());
}

TEST(Polynomial, can_add_pol) {
    Polynomial pol1("12x^2yz+12+11x");
    Polynomial pol2("6x+25x^2y^2z^2+5");
    Polynomial pol3 = pol1 + pol2;
    Polynomial pol4("25x^2y^2z^2+12x^2yz+17x+17");
    ASSERT_EQ(pol3, pol4);
}

TEST(Polynomial, can_sub_pol) {
    Polynomial pol1("12x^2yz+12+11x");
    Polynomial pol2("11x+25x^2y^2z^2+5");
    Polynomial pol3 = pol1 - pol2;
    Polynomial pol4("-25x^2y^2z^2+12x^2yz+7");
    ASSERT_EQ(pol3, pol4);
}

TEST(Polynomial, can_mul_pol_pol) {
    Polynomial pol1("12x^2yz+12+11x");
    Polynomial pol2("x^5");
    Polynomial pol3 = pol1 * pol2;
    Polynomial pol4("12x^7yz+12x^5+11x^6");
    ASSERT_EQ(pol3, pol4);
}

TEST(Polynomial, can_mul_pol_const) {
    Polynomial pol1("12x^2yz+12+11x");
    Polynomial pol2 = pol1 * 2;
    Polynomial pol3("24x^2yz+24+22x");
    ASSERT_EQ(pol2, pol3);
}

TEST(Polynomial, can_dif_arithm) {
    Polynomial pol1("5x^2");
    Polynomial pol2("xyz");
    Polynomial pol3 = pol1 + pol2 * (-2);
    Polynomial pol4("5x^2-2xyz");
    ASSERT_EQ(pol3, pol4);
}
