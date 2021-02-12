#include<iostream>
#include "switch.h"

using std::cin; using std::cout;

int main() 
{
	int num;
	cout<<"Enter number: ";
	cin>>num;

	cout<<menu(num);

	return 0;
}