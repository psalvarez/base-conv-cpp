//---test-translate.cpp------
#include "catch.hpp"
#include "base_conv.hpp"

TEST_CASE("Convert computation"){
    REQUIRE(converter(65) == "A");
    REQUIRE(converter(67) == "C");
    REQUIRE(converter(65+25) == "Z");
    //REQUIRE(converter(65) == "A");
}
