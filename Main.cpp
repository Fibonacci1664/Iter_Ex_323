#include<iostream>
#include<vector>

int main()
{
	std::vector<int> nums(10, 5);

	for (auto iter = nums.begin(); iter != nums.end(); ++iter)
	{
		*iter *= 2;

		std::cout << *iter << ", ";
	}


	return 0;
}