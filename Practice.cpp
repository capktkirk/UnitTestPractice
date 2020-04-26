#include "Practice.h"
#include <string>
#include <iostream>
using std::string;
// using std::string::find;

// Receive three integers and rearrange their values so that they are in
// descending order from greatest (first) to least (third)
void Practice::sortDescending(int & first, int & second, int & third)
{
  if( first < second )
  {
    int temp = first;
    first = second;
    second = temp;
  }
  if( first < third )
  {
    int temp = first;
    first = third;
    third = temp;
  }
  if( second < third )
  {
    int temp = second;
    second = third;
    third = temp;
  }
}

// Receive a string and return whether or not it is strictly a palindrome,
// where it is spelled the same backwards and forwards when considering every
// character in the string, but disregarding case ('x' is the same as 'X')
bool Practice::isPalindrome(string input)
{
  // while((auto pos = input.find('\0')) != std::string::npos)
  // auto pos = input.find('\0');
  // while(pos != std::string::npos)
  // {
  //     input.erase(pos);
  //     pos = input.find('\0');
  // }
  void* ptr = &input;
  std::cout << "input == " << input << ptr+1 << '\n';

  //input.erase(input.find('\0'));
  for(int i=0; i < input.size(); i++)
  {
    if( input[i] < 'A' || input[i] > 'Z' )
    {
      //change lower case to upper case
      input[i] = input[i] - ('a' - 'A');
    }
  }
  for(int i=0; i < input.size()/2; i++)
  {
    if( input[i] != input[input.size()-1-i] )
      return false;
  }
  return true;
}
