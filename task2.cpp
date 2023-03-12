#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    std::map<int, std::vector<std::string>> studentsByClass;

    int classNum;
    std::string lastName;

    // —читываем данные и группируем по классам
    while (std::cin >> classNum >> lastName) {
        studentsByClass[classNum].push_back(lastName);
    }

    // ¬ыводим студентов по классам и сохран€ем их пор€док в каждом классе
    for (int i = 9; i <= 11; ++i) {
        auto& students = studentsByClass[i];
        for (const auto& student : students) {
            std::cout << i << " " << student << std::endl;
        }
    }

    return 0;
}