#include "chars.h"
#include<iostream>

using std::cout;

int main() 
{
	//Create a char variable and display it
	auto letter = 'a';
	cout<<letter<<"\n";
	
	char l = '9';
	cout<<l<<"\n";

	cout<<"Letter a ASCII value is: " <<get_char_ascii_value('a');

	return 0;
}