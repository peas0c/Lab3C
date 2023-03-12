#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> player1, player2;

    // ��������� ����� �������
    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        player1.push_back(card);
    }
    for (int i = 0; i < 5; i++) {
        int card;
        cin >> card;
        player2.push_back(card);
    }

    int moves = 0; // ���������� �����
    while (!player1.empty() && !player2.empty() && moves < 1000000) {
        moves++;

        int card1 = player1.front(); // ������� ����� � ������ 1
        int card2 = player2.front(); // ������� ����� � ������ 2
        player1.pop_front();
        player2.pop_front();

        if ((card1 == 0 && card2 == 9) || (card1 > card2 && !(card1 == 9 && card2 == 0))) {
            // ����� ������ 1 ���������
            player1.push_back(card1);
            player1.push_back(card2);
        } else {
            // ����� ������ 2 ���������
            player2.push_back(card1);
            player2.push_back(card2);
        }
    }

    if (moves == 1000000) {
        cout << "botva";
    } else if (player2.empty()) {
        cout << "first";
    } else {
        cout << "second";
    }
    cout << " " << moves << endl;

    return 0;
}