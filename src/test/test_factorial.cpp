#include <gtest/gtest.h>
#include "../src/factorial.cpp"

int add(int x, int y) {
    return x + y;
}

TEST(SubTest, TwoAndThree) {
    EXPECT_EQ(sub(3, 2), 2);
}

TEST(TestCaseName, TestName){
    EXPECT_EQ(1, 1);
}