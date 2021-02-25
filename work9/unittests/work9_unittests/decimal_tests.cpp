#include "gtest/gtest.h"

#include "decimal.h"

TEST (DecimalTests, DecimalCheck)
{
    int num = 2;
    int result = Decimal( num );
    EXPECT_EQ (result, 10);
}

TEST (DecimalTests, DecimalCheck2)
{
    int num = 10;
    int result = Decimal( num );
    EXPECT_EQ (result, 1010);
}

TEST (DecimalTests, DecimalCheck3)
{
    int num = 55;
    int result = Decimal( num );
    EXPECT_EQ (result, 110111);
}
