#include "gtest/gtest.h"

#include "digits.h"

TEST( DigitsTest, DigitsCheck )
{
    int N = 1;
    int result = Digits( N );
    EXPECT_EQ (result, 1);
}

TEST( DigitsTest, DigitsCheck1 )
{
    int N = 20;
    int result = Digits( N );
    EXPECT_EQ (result, 2);
}

TEST( DigitsTest, DigitsCheck2 )
{
    int N = 200;
    int result = Digits( N );
    EXPECT_EQ (result, 3);
}
