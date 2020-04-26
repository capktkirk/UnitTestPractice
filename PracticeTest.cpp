/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
    actual = obj.isPalindrome("aba");
    ASSERT_TRUE(actual);
    actual = obj.isPalindrome("wit h tiw");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_symbols)
{
	Practice obj;
	bool actual = obj.isPalindrome("!@#$%^&*()..a..)(*&^%$#@!");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("123abc");
	ASSERT_FALSE(actual);
}


TEST(PracticeTest, is_simple_sort)
{
	Practice obj;
	int num[3] = { 7, 5, 3 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);
}

Test(PracticeTest, is_sort_with_negative)
{
	Practice obj;
	signed int num[3] = { 2, -1, -2 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);
}

// Test(PracticeTest, have_two_same)
// {
// 	Practice obj;
// 	int num[3] = {1, 1, 2};
// 	obj.sortDescending(num[0], num[1], num[2]);
// 	ASSERT_LE(num[2], num[1]);
// 	ASSERT_EQ(num[1], num[0]);

// }