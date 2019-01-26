#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE( "XXX" )
{
  REQUIRE( true );
}

//SCENARIO("BitstreamTest: read bits from stream", "[getters]")
//{
//  GIVEN("A Bitstream with 1 byte of data")
//  {
//    uint8_t data[1];
//    BitstreamReader* bs = new BitstreamReader(data, 1);
//    WHEN("we set the leftmost bit")
//    {
//      data[0] = 1 << 7;
//      THEN("we should get 1 when reading 1 bit")
//      {
//        REQUIRE(0b1 == bs->get<1>());
//      }
//    }
//  }
//}
