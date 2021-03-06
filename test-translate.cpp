//---test-translate.cpp------
#include "catch.hpp"
#include "base_conv.hpp"

//Stage 5
TEST_CASE("stage-5", "[nu]") {
    REQUIRE(converter(4512) == "FQN");
    REQUIRE(converter(2637) == "CWK");
    REQUIRE(converter(17362) == "YQT");
    REQUIRE(converter(84937) == "DUPU");
}

//Stage 4
TEST_CASE("stage-4", "[nu]"){
    //Decimal to two-letter format
    REQUIRE(converter(1) == "A");
    REQUIRE(converter(4) == "D");
    REQUIRE(converter(26) == "Z");
    REQUIRE(converter(27) == "AA");
    REQUIRE(converter(30) == "AD");
    REQUIRE(converter(52) == "AZ");
    REQUIRE(converter(677) == "ZA");
    REQUIRE(converter(702) == "ZZ");
}

//Stage 3
TEST_CASE("Decimal-to-letter-ext"){
    REQUIRE(converter(0) == "A");
    REQUIRE(converter(3) == "D");
    REQUIRE(converter(25) == "Z");
    REQUIRE(converter(26) == "A");
    REQUIRE(converter(29) == "D");
    REQUIRE(converter(51) == "Z");
}

//Stage 2
TEST_CASE("Decimal-to-letter"){
    REQUIRE(converter(0) == "A");
    REQUIRE(converter(3) == "D");
    REQUIRE(converter(25) == "Z");
}

//Stage 1
TEST_CASE("Convert from int to ASCII"){
    REQUIRE(converter(65) == "A");
    REQUIRE(converter(67) == "C");
    REQUIRE(converter(65+25) == "Z");
}
