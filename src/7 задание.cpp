#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int n;
    std::cout << "Введите количество чисел n: ";
    std::cin >> n;

    int  x ;
    int sum_even = 0;
    int product_starts_with_3 = 1;
    int count_ends_with_55 = 0;
    for (int i = 0; i < n; ++i) {
        std::cout << "Введите число: ";
        std::cin >> x;

        // Сумма четных чисел
        if (x % 2 == 0) {
            sum_even += x;
        }

        // Произведение чисел, начинающихся на 3
        if (x / 10 == 3) {
            product_starts_with_3 *= x;
        }

        // Количество чисел, заканчивающихся на 55
        if (x % 100 == 55) {
            count_ends_with_55++;
        }
    }
    std::cout << "Сумма четных чисел: " << sum_even << "\n";
    std::cout << "Произведение чисел, начинающихся на 3: " << product_starts_with_3 << "\n";
    std::cout << "Количество чисел, заканчивающихся на 55: " << count_ends_with_55 << "\n";
    return 0;
}