#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <iostring>
using namespace std;

TEST_CASE("good snowman code"){
    CHECK(snowman(11111111) == string(" _===_ \n (.,.) \n<( : )>\n ( : ) "));
    CHECK(snowman(22222222) == string("  ___  \n ..... \n\\(o.o)/\n (] [) \n (\" "\"") "")");
    CHECK(snowman(33333333) == string("   _   \n  /_\\  \n (O_O) \n/(> <)\\\n (___) "));
    CHECK(snowman(44444444) == string("  ___  \n (_*_) \n (- -) \n (   ) \n (   ) "));
}

TEST_CASE("Bad snowman code") {
    //Negative num
    CHECK_THROWS(snowman(-11111111));
    CHECK_THROWS(snowman(-22222222));
    CHECK_THROWS(snowman(-33333333);
    CHECK_THROWS(snowman(-44444444);
    //Short num
    CHECK_THROWS(snowman(1111111));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(11111));
    CHECK_THROWS(snowman(1111));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(11));
    CHECK_THROWS(snowman(1));
    //Invaild num
    CHECK_THROWS(snowman(20222222));
    CHECK_THROWS(snowman(02222222));
    CHECK_THROWS(snowman(22022222));
    CHECK_THROWS(snowman(22202222));
    CHECK_THROWS(snowman(28222222));
    CHECK_THROWS(snowman(72222222));
    CHECK_THROWS(snowman(22622222));
    CHECK_THROWS(snowman(22292222));

}