#include "gtest/gtest.h"
//#include "ability_tests.cpp"
//#include "item_tests.cpp"
//#include "attack_test.hpp"
using namespace std;
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
