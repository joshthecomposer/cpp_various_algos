#include <vector>
#include <iostream>

std::vector<int> sortArray(std::vector<int> array)
{
    int lowest = 0;

    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] % 2 > 0)
        {
            for (int j = i+1; j < array.size(); j++)
            {
                if (array[j] % 2 > 0 && array[j] < array[i])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
    }
    return array;
}


int main()
{
    std::vector<int> output = sortArray({9, 8, 7, 6, 5, 4, 3, 2, 1, 0});
    for(int i : output)
    {
        std::cout << i << " , ";
    }
    return 0;
}