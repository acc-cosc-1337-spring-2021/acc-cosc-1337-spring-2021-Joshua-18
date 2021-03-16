#include "value_ref.h"

#include<iostream>
using std::cout;

#include<string>
using std::string;

int main() 
{

	auto letter = 'a';//char
	cout<<"Memory used by char: "<<sizeof(letter)<<"\n";

	string name = "Joe";//create and assign value to string
	cout<<"Memory of string on stack is: "<<&name<<"\n";
	cout<<"Memory space used by string is: "<<sizeof(name)<<"\n";
	cout<<"Size of name string is: "<<name.size()<<"\n";
	cout<<"Capacity of name string is: "<<name.capacity()<<"\n";
	
	cout<<name[0]<<"\n";

	string name1 ("Joe");
	name1.push_back(' ');
	name1.append("Do");
	name1.push_back('e');
	cout<<name1<<"\n";
	string name2 {'h', 'i'};
	cout<<name2<<"\n";




















	// string name;
	// use_static_variable();
	// use_static_variable();
	// use_static_variable();
	// use_static_variable();
	// use_static_variable();
	// auto num = 5;//existing int variable
	// //int& num_ref = num;

	// std::cout<<"Value of num is: "<<num<<"\n";
	// std::cout<<"Address of num is: "<<&num<<"\n\n";
	

	// int& num_ref = num;//??reference variable, can only be assigned once!
	// std::cout<<"Value of num is: "<<num<<"\n";
	// std::cout<<"Value of num_ref is: "<<num_ref<<"\n\n";

	// num_ref = 10;
	// std::cout<<"Value of num is: "<<num<<"\n";
	// std::cout<<"Value of num_ref is: "<<num_ref<<"\n";
	// std::cout<<"Address of num_ref is: "<<&num_ref<<"\n\n";

	// auto num1 = 5;
	// auto num2 = 0;

	// pass_by_val_and_ref(num1, num2);// call by value


	// int num = 10;
	// pass_by_const_ref(10);

	
	return 0;
}