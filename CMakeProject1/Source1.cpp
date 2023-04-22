#include "CMakeProject1.h"

void print(std::vector <int>& vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec[i];
	}
}
void read(std::vector<int>& vec)
{
	int size = 0;
	int num = 0;
	std::cin >> size;
	for (int i = 0; i < size; i++)
	{
		std::cin >> num;
		vec.push_back(num);
	}
}