#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string sum_strings(const string& a, const string& b)
{
    //TODO: Now we need to account for different sized integers, so far only strings of equal size will work.
    string result = "0000";

    int t_sum = 0;

    for (int i = a.size() - 1; i >= 0; i--)
    {
        t_sum += ((a[i] - 48) + (b[i] - 48));
        if (t_sum > 9)
        {
            result[i] = (char) t_sum % 10 + 48;
            t_sum = 1;
        }
        else
        {
            result[i] = (char)t_sum + 48;
        }
    }
    return result;
}

int main()
{
    cout << sum_strings("2998", "2254") << endl;
    // cout << sum_strings("17282329", "572853225") << "\n";
    // cout << sum_strings("1", "2") << "\n";
    return 0;
}