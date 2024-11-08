#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите n: ";
    cin >> n;
    double s = 0; 
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 2 * i; 
        s += cos(sum);
    }
    cout << "Результат: " << s << "\n";
    return 0;
}