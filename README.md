tdd-cpp-kata
============

A very basic skeleton to get up and running using C++ and Google Test
for TDD. The example used in the skeleton is the "FizzBuzz" game.

Setting up the environment
--------------------------

In order to fetch Google Test and the skeleton repository proxies for
http and https may have to be set. On site at Ericsson this can be
made by:

*export http_proxy=http://www-proxy.lmera.ericsson.se:8080; export https_proxy=https://www-proxy.lmera.ericsson.se:8080*

Create a base directory for the kata and go fetch Google Test:

*mkdir tdd-kata ; cd tdd-kata ; wget http://googletest.googlecode.com/files/gtest-1.7.0.zip ; unzip gtest-1.7.0.zip*

Build you local copy of Google Test:

*cd gtest-1.7.0/ && ./configure && make && export GTEST_DIR=`pwd` && cd ..*

Clone this repository and build the skeleton.

*git clone https://github.com/SneakingCat/tdd-cpp-kata.git && cd tdd-cpp-kata/ && make && ./UnitTest*

After this moment you can use the commands *make clean*, *make* and
*./UnitTest* for your build and test cycle.

http://code.google.com/p/googletest/

