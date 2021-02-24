#include "gtest/gtest.h"

#include "divisor.h"

TEST (DivisorTests, DivCheck)
{
    int N1 = 1;
    int N2 = 1;
    int N3 = 1;
    int result = Divisor( N1, N2, N3 );
    EXPECT_EQ (result, 1);
}

TEST (DivisorTests, DivCheck2)
{
    int N1 = 3;
    int N2 = 9;
    int N3 = 27;
    int result = Divisor( N1, N2, N3 );
    EXPECT_EQ (result, 3);
}

TEST (DivisorTests, DivCheck3)
{
    int N1 = 5;
    int N2 = 15;
    int N3 = 10;
    int result = Divisor( N1, N2, N3 );
    EXPECT_EQ (result, 5);
}
