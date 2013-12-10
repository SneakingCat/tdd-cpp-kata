#include "FizzBuzz.hh"
#include <string>

std::string FizzBuzz::Play(int number) const {
  if (divisibleWith(number, 3*5)) {
    return "fizz buzz";
  } else if (divisibleWith(number, 3)) {
      return "fizz";
  } else if (divisibleWith(number, 5)) {
    return "buzz";
  } else {
    return std::to_string(number);
  }
}
