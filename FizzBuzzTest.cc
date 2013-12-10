#include "FizzBuzz.hh"
#include "gtest/gtest.h"
#include <string>

// Play the "fizz buzz" game: http://en.wikipedia.org/wiki/Fizz_buzz
TEST(FizzBuzz, Play) {
  FizzBuzz fizzBuzz;

  // A fizz buzz player is given a number. If the number is divisible
  // with three the player shall respond with "fizz", if the the
  // number is divisible with five the player shall resond with
  // "fuzz", if the number is divisible with both three and five the
  // player shall respond with "fizz buzz". I all other cases the
  // player shall respond with the number given as a string.

  ASSERT_EQ("1", fizzBuzz.Play(1));
  ASSERT_EQ("2", fizzBuzz.Play(2));
  ASSERT_EQ("fizz", fizzBuzz.Play(3));
  ASSERT_EQ("4", fizzBuzz.Play(4));
  ASSERT_EQ("buzz", fizzBuzz.Play(5));
  ASSERT_EQ("fizz", fizzBuzz.Play(6));
  ASSERT_EQ("7", fizzBuzz.Play(7));
  ASSERT_EQ("8", fizzBuzz.Play(8));
  ASSERT_EQ("fizz", fizzBuzz.Play(9));
  ASSERT_EQ("buzz", fizzBuzz.Play(10));
  ASSERT_EQ("11", fizzBuzz.Play(11));
  ASSERT_EQ("fizz", fizzBuzz.Play(12));
  ASSERT_EQ("13", fizzBuzz.Play(13));
  ASSERT_EQ("14", fizzBuzz.Play(14));
  ASSERT_EQ("fizz buzz", fizzBuzz.Play(15));

  // Number serie is tested upto 15, more tests are left as an
  // excersize to the reader :-)
}
