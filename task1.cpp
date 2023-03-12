
#include <iostream>
#include <set>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::set<int> unique_numbers;
    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> numbers[i];
        unique_numbers.insert(numbers[i]);
    }

    std::cout << unique_numbers.size() << std::endl;

    return 0;
}