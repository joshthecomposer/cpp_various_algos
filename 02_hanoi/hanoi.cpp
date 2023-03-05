#include <iostream>
#include <string>

int hanoi(int input)
{
    int i = 0;
    int output = 1;
    while (i < input)
    {
        output *= 2;
        i++;
    }
    return output - 1;
}

int main()
{
    int answer = hanoi(10);
    std::cout << answer <<"\n";
    return 0;
}