#include <iostream>
#include <vector>

int persistence(long long &n, int iterations = 1)
{
    if (n < 10)
    {
        return 0;
    }
    std::vector<int> digits;
    while (n>0)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
    long long temp = 1;
    for (int i = 0; i < digits.size(); i++)
    {
        temp *= digits[i];
    }
    if (temp < 10)
    {
        return iterations;
    }
    else
    {
        return persistence(temp, ++iterations);
    }
}

int main()
{
    long long input = 823758275;
    std::cout << persistence(input);
    return 0;
}