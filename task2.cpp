#include <iostream>
#include <string>
#include <map>
#include <vector>

int main() {
    std::map<int, std::vector<std::string>> studentsByClass;

    int classNum;
    std::string lastName;

    // ��������� ������ � ���������� �� �������
    while (std::cin >> classNum >> lastName) {
        studentsByClass[classNum].push_back(lastName);
    }

    // ������� ��������� �� ������� � ��������� �� ������� � ������ ������
    for (int i = 9; i <= 11; ++i) {
        auto& students = studentsByClass[i];
        for (const auto& student : students) {
            std::cout << i << " " << student << std::endl;
        }
    }

    return 0;
}