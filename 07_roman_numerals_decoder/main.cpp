#include <iostream>
#include <string>
#include <map>

int solution(std::string roman)
{   
    int result = 0;
    std::map<char, int> nums =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < roman.size(); i++)
    {
        if (!nums[roman[i+1]])
        {
            result += nums[roman[i]];
            return result;
        }
        else if (nums[roman[i+1]] > nums[roman[i]])
        {
            result += nums[roman[i + 1]] - nums[roman[i]];
            i++;
        }
        else
        {
            result += nums[roman[i]];
        }
    }
    return result;
}

int main()
{

    std::cout << solution("XXI") <<"\n";
    std::cout << solution("I") <<"\n";
    std::cout << solution("IV") <<"\n";
    std::cout << solution("MMVIII") <<"\n";
    std::cout << solution("MDCLXVI") <<"\n";
    return 0;
}