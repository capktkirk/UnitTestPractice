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
    actual = obj.isPalindrome("with spacesceaps htiw");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_palindrome_with_symbols)
{
	Practice obj;
	bool actual = obj.isPalindrome("..a..");
	ASSERT_TRUE(actual);
}