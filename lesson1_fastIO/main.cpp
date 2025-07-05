#include <iostream>
#include <sstream>
#include <limits>

// ДЛЯ НАСТРОЙКИ ЯЗЫКА В CLION НУЖНО ПОСТАВИТЬ КОДИРОВКУ windows-1251 И std::setlocale(LC_ALL, "RUS");

int main() {
    std::setlocale(LC_ALL, "RUS");

    // Отключает синхронизацию std::cin/std::cout
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // C++ 11 и ниже
    // При вводе большого количества чисел/строк
//    int a;
//    std::scanf("%d", &a); // не производит проверку типа
//    if (a) {
//        std::printf("%d\n", a);
//    } else {
//        std::printf("%s\n", "Вы ввели некорректное число");
//    }

    // для ввода чисел по строчно, конфликтует с std::printf/std::scanf
    std::string input;
    int b;
    int sum = 0;
    while (std::getline(std::cin, input)) {
        std::istringstream iss(input);
        while (iss >> b) {
            sum += b;
        }
        std::cout << "Sum= " << sum << std::endl;
    }

    return 0;
}

/*
 * Маленький объем ввода/вывода	                  |||     cin / cout
 * Средний объем данных	                          |||     ios::sync_with_stdio(false); cin.tie(nullptr);
 * Большой объем числового ввода	              |||     scanf / printf
 * Нестандартный или заранее известный формат	  |||     чтение через getline + istringstream
*/