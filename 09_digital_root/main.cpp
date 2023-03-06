#include <iostream>
#include <string>
#include <vector>
using namespace std;

int digital_root(long long &input)
{
    int sum = 0;
    while (input > 0)
    {
        sum += input % 10;
        input /= 10;
    }
    if (sum > 9)
    {
        input = sum;
        return digital_root(input);
    }
    return sum;
}

int main()
{
    
    long long  input = 9223372036854775807;
    cout << digital_root(input) << endl;
    return 0;
}