#include "psscheck.h"
#include <gtest/gtest.h>


TEST(PasswordTest, PositiveNos)     
    { 
    EXPECT_FALSE(passUpperLower("fdefsfADw@##@"));
    EXPECT_FALSE(passUpperLower("WADWDA#@@#dqwd"));
    EXPECT_EQ(0, special_character("WADWDA#@@#d", 11));
    EXPECT_FALSE(atLeastLetter("WADWDAd"));
    }
/* 
TEST(PasswordTest, NegativeNos) 
    {
    EXPECT_EQ(1, passUpperLower("fdefsfdasdsasd"));
    EXPECT_EQ(1, atLeastLetter("#@@#@##@#@@##@"));
    }  */

int main(int argc, char **argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
