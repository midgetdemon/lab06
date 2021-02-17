#include "../header/rectangle.hpp"
#include "../src/rectangle.cpp"

#include "gtest/gtest.h"

TEST(ConstructorTests, PositiveDefault){
	Rectangle r1;
	r1.set_width(3);
	EXPECT_EQ(r1.get_width(), 3);
	r1.set_height(142);
	EXPECT_EQ(r1.get_height(), 142);
}

TEST(ConstructorTests, PositiveParameter){
	Rectangle r1(7, 4);
	EXPECT_EQ(r1.get_width(), 7);
	EXPECT_EQ(r1.get_height(), 4);
}

TEST(ConstructorTests, NegativeDefault){
	Rectangle r1;
	r1.set_width(-7);
	EXPECT_EQ(r1.get_width(), -7);
	r1.set_height(-12);
	EXPECT_EQ(r1.get_height(), -12);
}

TEST(ConstructorTests, NegativeParameter){
	Rectangle r1(-2, -5);
	EXPECT_EQ(r1.get_width(), -2);
	EXPECT_EQ(r1.get_height(), -5);
}

TEST(ConstructorTests, Zero){
	Rectangle r1(0, 0);
	EXPECT_EQ(r1.get_width(), 0);
	EXPECT_EQ(r1.get_height(), 0);
	Rectangle r2;
	r2.set_width(0);
	EXPECT_EQ(r2.get_width(), 0);
	r2.set_height(0);
	EXPECT_EQ(r2.get_height(), 0);
}

TEST(AreaTests, PositivePositive){
	Rectangle r1;
	r1.set_width(8);
	r1.set_height(2);
	EXPECT_EQ(r1.area(), 16);
	Rectangle r2(4, 9);
	EXPECT_EQ(r2.area(), 36);
}

TEST(AreaTests, PositiveNegative){
	Rectangle r1(6, -7);
	EXPECT_EQ(r1.area(), -42); 
	Rectangle r2;
	r2.set_width(-3);
	r2.set_height(13);
	EXPECT_EQ(r2.area(), -39);
}

TEST(AreaTests, NegativeNegative){
	Rectangle r1(-2, -4);
	EXPECT_EQ(r1.area(), 8);
	Rectangle r2;
	r2.set_width(-9);
	r2.set_height(-10);
	EXPECT_EQ(r2.area(), 90);
}

TEST(AreaTests, Zero){
	Rectangle r1(0, 0);
	EXPECT_EQ(r1.area(), 0);
	Rectangle r2;
	r2.set_width(0);
	r2.set_height(0);
	EXPECT_EQ(r2.area(), 0);
}

TEST(PerimeterTests, PositivePositive){
	Rectangle r1(4, 5);
	EXPECT_EQ(r1.perimeter(), 18);
	Rectangle r2;
	r2.set_width(32);
	r2.set_height(2);
	EXPECT_EQ(r2.perimeter(), 68);
}

TEST(PerimeterTests, PositiveNegative){
	Rectangle r1(8, -2);
	EXPECT_EQ(r1.perimeter(), 12);
	Rectangle r2(6, -10);
	EXPECT_EQ(r2.perimeter(), -8);
	Rectangle r3(5, -5);
	EXPECT_EQ(r3.perimeter(), 0);
}

TEST(PerimeterTests, NegativeNegative){
	Rectangle r1(-3, -7);
	EXPECT_EQ(r1.perimeter(), -20);
	Rectangle r2;
	r2.set_width(-15);
	r2.set_height(-12);
	EXPECT_EQ(r2.perimeter(), -54);
}

TEST(PerimeterTests, Zero){
	Rectangle r1(0, 0);
	EXPECT_EQ(r1.perimeter(), 0);
	Rectangle r2;
	r2.set_width(0);
	r2.set_height(0);
	EXPECT_EQ(r2.perimeter(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
