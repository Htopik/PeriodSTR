#include <string>
#include <iostream>
using namespace std;

bool IsKPeriodic(string str, int k) {
    if (str.length() % k != 0) //≈сли длина строки не кратна k, то и говорить не о чем
        return 0;
    string substr = str.substr(0, k); //находим первую подстроку
    for (int i = 0; i < str.length() / k; ++i) {
        if (str.substr(i * k, k) != substr) //провер€ем, чтобы все последущие подстроки совпали с первой
            return 0; //≈сли не совпали, строка не кратка K
    }
    return 1;
}

int main() {
    //ѕроизведЄн р€д тестов
    cout << IsKPeriodic("abcabcabcabc", 3) << '\n';
    cout << IsKPeriodic("abcabcabcabc", 2) << '\n';
    cout << IsKPeriodic("abcdabcdabcdabcd", 4) << '\n';
    cout << IsKPeriodic("aaa", 3) << '\n';
    cout << IsKPeriodic("ababababab", 5) << '\n';
    cout << IsKPeriodic("ababababab", 2) << '\n';
    return 0;
}