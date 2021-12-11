#include "gtest/gtest.h"
#include "multiply.h"

TEST(multiplication_fuction_test, simple_vs_india){
    EXPECT_EQ(multiply::simple_multiplication(5,10), multiply::india_multiplication(5,10) );
}