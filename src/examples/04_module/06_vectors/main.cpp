#include "vec.h"
#include <string>
using std::string;

using std::vector;
using std::cout;

int main() 
{
	vector<string> names{"joe", "mary", "john"};
	names[1] = "jane";
	// vector<int> nums(10, 10);
	// nums.push_back(10);
	// nums.push_back(3);
	// nums.push_back(2);

	// loop_vector_w_for_ranged(nums);

	for (auto name: names)
	{
		cout<<name<<"\n";
	}

	return 0;
}