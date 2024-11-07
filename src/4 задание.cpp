#include <iostream>
#include <cmath>

int main() {
    setlocale(LC_ALL, "RU")
    double x, p;
    std::cout << "Введите значение x: ";
    std::cin >> x;
    if (x <= -10) {
        p = (12.0 / 7.0) * std::pow(5, 12);
    }
    else if (x > -10 && x <= 0) {
        p = sqrt(10 - std::pow(x, 2));
    }
    else {
        p = cos(M_PI * (x + 1));
    }
    std::cout << "Значение p: " << p << "\n";
    return 0;
}

