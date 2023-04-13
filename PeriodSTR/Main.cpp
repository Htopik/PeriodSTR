#include <string>
#include <iostream>
using namespace std;

bool IsKPeriodic(string str, int k) {
    if (str.length() % k != 0) //���� ����� ������ �� ������ k, �� � �������� �� � ���
        return 0;
    string substr = str.substr(0, k); //������� ������ ���������
    for (int i = 0; i < str.length() / k; ++i) {
        if (str.substr(i * k, k) != substr) //���������, ����� ��� ���������� ��������� ������� � ������
            return 0; //���� �� �������, ������ �� ������ K
    }
    return 1;
}

int main() {
    //��������� ��� ������
    cout << IsKPeriodic("abcabcabcabc", 3) << '\n';
    cout << IsKPeriodic("abcabcabcabc", 2) << '\n';
    cout << IsKPeriodic("abcdabcdabcdabcd", 4) << '\n';
    cout << IsKPeriodic("aaa", 3) << '\n';
    cout << IsKPeriodic("ababababab", 5) << '\n';
    cout << IsKPeriodic("ababababab", 2) << '\n';
    return 0;
}