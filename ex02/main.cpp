#include "Array.hpp"
#include <iostream>

void test_canonical_form()
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "test canonical form " << std::endl;
    std::cout << "-------------------------" << std::endl;
    try
    {
        Array<int> arr1(3);
        Array<int> arr2 = arr1;
        Array<int> arr3(arr2);

        std::cout << "adding 5 15 25 to arr1" << std::endl;
        arr1[0] = 5;
        arr1[1] = 15;
        arr1[2] = 25;

        std::cout << "adding 10 to index 1 at arr2" << std::endl;
        arr2[1] = 10;

        std::cout << "adding 7 to index 2 at arr3" << std::endl;
        arr3[2] = 7;

        std::cout << "arr1 elements:" << std::endl;
        for (size_t i =0; i < arr1.size(); i++)
        {
                std::cout << arr1[i] << std::endl;
        }
        std::cout << "arr2 elements:" << std::endl;
        for (size_t i =0; i < arr2.size(); i++)
        {
            std::cout << arr2[i] << std::endl;
        }
        std::cout << "arr3 elements:" << std::endl;
        for (size_t i =0; i < arr3.size(); i++)
        {
                std::cout << arr3[i] << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

void test_basic_case()
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "test basic working case" << std::endl;
    std::cout << "-------------------------" << std::endl;
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
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

void test_basic_case_err()
{
    std::cout << "-------------------------" << std::endl;
    std::cout << "test basic case with out of range error " << std::endl;
    std::cout << "-------------------------" << std::endl;
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

int main()
{
    test_canonical_form();
    test_basic_case();
    test_basic_case_err();
}