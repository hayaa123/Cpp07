#include "iter.hpp"
#include <string>

void printit(const char &c)
{
    std::cout << c << std::endl;
}

void add_10(int &num)
{
    num += 10;
}

int main()
{
    const char *word = "hello";
    int nums[] = {1,2,3};

    iter(word, 5, printit);
    iter(nums, 3, add_10);
    for(int i = 0; i < 3; i++)
        std::cout << nums[i] << std::endl;
}