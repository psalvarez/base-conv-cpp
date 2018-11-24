//---test-translate.cpp------
#include "catch.hpp"
#include "base_conv.hpp"

TEST_CASE("Decimal-to-letter"){
    REQUIRE(converter(0) == "A");
    REQUIRE(converter(3) == "D");
    REQUIRE(converter(25) == "Z");
}

TEST_CASE("Convert from int to ASCII"){
    REQUIRE(converter(65) == "A");
    REQUIRE(converter(67) == "C");
    REQUIRE(converter(65+25) == "Z");
}
