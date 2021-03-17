#include<string>
#include<iostream>
#include "for_ranged.h"

int main() 
{
	std::string name = "John";
	//loop_string_w_index(name);
	//loop_string_w_for_range(name);
	loop_string_w_for_range_ref(name);
	return 0;
}