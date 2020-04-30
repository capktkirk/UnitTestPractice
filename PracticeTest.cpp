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

TEST(PracticeTest, is_single_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("1");
	ASSERT_TRUE(actual);
	actual = obj.isPalindrome("a");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("");
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


/*
 * I don't think this is working as intended.
 */
TEST(PracticeTest, null_char_palindrome){
	Practice obj;
	bool actual = obj.isPalindrome("\0abba");
	ASSERT_TRUE(actual);
	actual = obj.isPalindrome("abba\0");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, unreadable_string)
{
	Practice obj;
	bool actual = obj.isPalindrome("\r\r\t\n");
	ASSERT_FALSE(actual);
}
/*
 * Check simple sorting of positive numbers.
 */
TEST(PracticeTest, is_simple_sort)
{
	Practice obj;
	int num[3] = { 7, 3, 5 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);
}
/*
 * Check for Negative Values.
 */
TEST(PracticeTest, is_negative_sort){
	Practice obj;
	int num[3] = { 1, 0, -1 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);
}

TEST(PracticeTest, is_all_negative){
	Practice obj;
	int num[3] = { -1, -2, -3 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);	
}


TEST(PracticeTest, reverseOrder){
  Practice obj;
  int num[3] = {3, 2, 1};
  obj.sortDescending(num[0], num[1], num[3]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);	
}


TEST(PracticeTest, is_equal_all_negative){
	Practice obj;
	int num[3] = { -1, -1, -1 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);	
}


TEST(PracticeTest, first_less_than_second_and_third){
	Practice obj;
	int num[3] = { -1, 0, 0 };
	obj.sortDescending(num[0], num[1], num[2]);
	ASSERT_LE(num[1], num[0]);
	ASSERT_LE(num[2], num[1]);
	ASSERT_LE(num[2], num[0]);	
}
