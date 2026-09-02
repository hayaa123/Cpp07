#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arr1(3);

        arr1[0] = 5;
        arr1[1] = 15;
        arr1[2] = 25;

        for (size_t i =0; i < arr1.size(); i++)
        {
                std::cout << arr1[i] << std::endl;
        }
        arr1[3] = 25;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
}