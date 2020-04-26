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
	ASSERT_TRUE(obj.isPalindrome("aa"));
	ASSERT_FALSE(obj.isPalindrome("ab"));
	ASSERT_TRUE(obj.isPalindrome("tacocat"));
	ASSERT_TRUE(obj.isPalindrome(".."));
}

TEST(PracticeTest, is_notAlpha){
	Practice obj;
	bool actual = obj.isPalindrome("./\\.");
	ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_Number){
	ASSERT_FALSE(obj.isPalindrome("1"));
}