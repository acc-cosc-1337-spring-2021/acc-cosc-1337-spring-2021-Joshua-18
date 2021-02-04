#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vars.h"
#include "input.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Verify the echo variable", "verify function param is returned") {
	REQUIRE(echo_variable(5) == 5);
	REQUIRE(echo_variable(10) == 10);
}

TEST_CASE("Verify get total function", "returns product of units * rate") 
{
	REQUIRE(get_total(5, 10) == 50);
	REQUIRE(get_total(6, 6) == 36);
}

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

