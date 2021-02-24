#include "gtest/gtest.h"

#include "number.h"

TEST (NumberTests, NumberCheck)
{
    int number = 56;
    int result = new_number( number );
    EXPECT_EQ (result, 65);
}

TEST (NumberTests, NumberCheck2)
{
    int number = 345;
    int result = new_number( number );
    EXPECT_EQ (result, 543);
}

TEST (NumberTests, NumberCheck3)
{
    int number = 2345;
    int result = new_number( number );
    EXPECT_EQ (result, 5342);
}
