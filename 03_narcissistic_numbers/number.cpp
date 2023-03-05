#include <iostream>
#include <string>
#include <vector>
#include <math.h>

bool narcissistic(int input)
{
    int value = input;
    std::vector<int> digits;
    while (value > 0)
    {
        int digit = value%10;
        digits.push_back(digit);
        value /= 10;
    }

    int sum = 0;
    for (int i = 0; i < digits.size(); i++)
    {
        digits[i] = (int) pow(digits[i], digits.size());
        sum += digits[i];
        std::cout << sum << "\n";
    }
    return sum == input;
}

int main()
{
    bool answer = narcissistic(371);
    std::cout << answer <<"\n";
    return 0;
}