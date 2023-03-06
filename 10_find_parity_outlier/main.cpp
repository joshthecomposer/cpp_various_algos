#include <vector>
#include <iostream>

int findOutlier(std::vector<int> arr)
{
    int odd = 0;
    int even = 0;
    bool is_even;
    int i = 0;
    while (odd < 2 && even < 2)
    {
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1)
        {
            odd++;
        }
    
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        i++;
    }
    even > odd ? is_even = true : is_even = false;

    for (i = 0; i < arr.size(); i++)
    {
        if (is_even && (arr[i] % 2 == 1 || arr[i] % 2 == -1))
        {
            return arr[i];
        }
        else if (!is_even && arr[i] % 2 == 0)
        {
            return arr[i];
        }
    }
    return 0;
}

int main()
{
    std::cout << findOutlier({2, 3, 4}) << std::endl;
    std::cout << findOutlier({1, 2, 3}) << std::endl;
    std::cout << findOutlier({4, 1, 3, 5, 9}) << std::endl;
    std::cout << findOutlier({2, -6, 8, -10, -3}) << std::endl;
    std::cout << findOutlier({17, 6, 8, 10, 6, 12, 24, 36}) << std::endl;

    // std::cout << -3 % 2 << std::endl;
    return 0;
}