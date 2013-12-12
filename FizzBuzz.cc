#include "FizzBuzz.hh"
#include <string>
#include <sstream>

std::string FizzBuzz::Play(int number) const {
  if (divisibleWith(number, 3*5)) {
    return "fizz buzz";
  } else if (divisibleWith(number, 3)) {
      return "fizz";
  } else if (divisibleWith(number, 5)) {
    return "buzz";
  } else {
    return toString(number);
  }
}

bool FizzBuzz::divisibleWith(int a, int b) const {
    return a % b == 0;
}

std::string FizzBuzz::toString(int number) const {
  std::stringstream asString;
  asString << number;
  return asString.str();
}
