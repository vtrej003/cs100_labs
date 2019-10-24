#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}
TEST(EchoTest, 0) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "0";
    EXPECT_EQ("0", echo(1,test_val));
}
TEST(EchoTest, NotSure) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "NotSure";
    EXPECT_EQ("NotSure", echo(2,test_val));
}
TEST(EchoTest, 1) {
T(EchoTest, 1) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "0"; test_val[2] = "1";
    EXPECT_EQ("1", echo(3,test_val));
}
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
