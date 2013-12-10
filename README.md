tdd-cpp-kata
============

A very basic skeleton to get up and running using C++ and Google Test
for TDD. The example used in the skeleton is an implementation of the "fizz buzz" game: http://en.wikipedia.org/wiki/Fizz_buzz

Setting up the environment
--------------------------

* Create a directory and change to it:

*$ mkdir tdd-kata*
*$ cd tdd-kata*

* Fetch the Google Test framework.

*tdd-kata$ wget http://googletest.googlecode.com/files/gtest-1.7.0.zip*

* Unpack the zip-archive.

*tdd-kata$ file-roller --extract-here gtest-1.7.0.zip*

* Configure and build the framework.

*tdd-kata$ cd gtest-1.7.0*

*tdd-kata/gtest-1.7.0$ ./configure*

*tdd-kata/gtest-1.7.0$ make*

* Set this directory path in the environment variable GTEST_DIR (example
show syntax for Bash).

*tdd-kata/gtest-1.7.0$ export GTEST_DIR=\`pwd\`*

* Change one level up in the directory structure.

*tdd-kata/gtest-1.7.0$ cd ..*

* Clone this repository.

*tdd-kata$ git clone https://github.com/SneakingCat/tdd-cpp-kata.git*

* Change directory to the cloned repository and make the unit tests.

*tdd-kata$ cd tdd-cpp-kata*

*tdd-kata/tdd-cpp-kata$ make*

* If everything goes ok you should now have a Linux binary called UnitTests.

*tdd-kata/tdd-cpp-kata$ ./UnitTest*

More information about Google Test can be found at:
http://code.google.com/p/googletest/

