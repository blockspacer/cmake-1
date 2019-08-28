#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "../src/inc/utl/utils.hpp"


TEST_CASE("testing the factorial function") {
    CHECK(utl::factorial(1) == 1);
    CHECK(utl::factorial(2) == 2);
    CHECK(utl::factorial(3) == 6);
    CHECK(utl::factorial(10) == 3628800);
}

