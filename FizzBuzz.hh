#ifndef FIZZBUZZ_HH
#define FIZZBUZZ_HH

#include <string>

class FizzBuzz {
public:
  // Play fizz buzz
  std::string Play(int number) const;

private:
  bool divisibleWith(int a, int b) const {
    return a % b == 0;
  }
};

#endif
