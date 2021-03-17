#include "for_ranged.h"
#include<iostream>
#include<vector>

using std::vector;
using std::cout;

/*
Function loop_vector_w_index 
The function creates an int vector with values 9, 10, 99, 5, 67
and displays the numbers to screen using an indexed for loop as follows: 9 10 99 5  67

@param none


*/



/*
Function loop_vector_w_index_val 
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>
*/
void loop_vector_w_index_val(std::vector<int> nums)
{
    for(size_t i = 0; i< nums.size(); ++i)
    {
        cout<<nums[i]<<"\n";
        nums[i] = -1;
    }
}


/*
Function loop_vector_w_index_ref
Displays the incoming parameter vector numbers to screen using an indexed for loop.

@param vector<int>&
*/
void loop_vector_w_index_ref(std::vector<int>& nums)
{
    for(size_t i = 0; i< nums.size(); ++i)
    {
        cout<<nums[i]<<"\n";
        nums[i] = -1;
    }
}


/*
Write code for function loop_vector_w_index_const_ref
Displays the incoming parameter vector numbers to screen use indexed loop

@param const vector<int>&
*/

std::vector<double> get_vector()
{
    vector<double> nums;
    nums.push_back(5.5);
    nums.push_back(11.1);
    nums.push_back(2.9);

    return nums;
}

void loop_vector_w_for_ranged(std::vector<int> nums)
{
    for (auto num: nums)
    {
        cout<<num<<"\n";
        num = -1;
    }

    for (auto num: nums)
    {
        cout<<num<<"\n";
        
    }
    
}

void loop_vector_w_for_ranged_ref(std::vector<int>& nums)
{
    for (auto& num: nums)
    {
        cout<<num<<"\n";
        num = -1;
    }
}