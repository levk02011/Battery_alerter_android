#include <iosrtream>
#include "BatInfo.cpp"
#include <chrono>
#include <thread>

int main() {
    // Ініціалізація змінної BTI
    auto BTI = batteryManager;

    // Бескінечний цикл для перевірки змінної кожну секунду
    while (true) {
        // Логіка перевірки змінної BTI
        std::cout << "Значення BTI: " << BTI << std::endl;

        // Затримка на 1 секунду
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}
/*
#include <iostream>
#include <chrono>
#include <thread>

int main() {
    // Ініціалізація змінної BTI
    int BTI = 0;

    // Бескінечний цикл для перевірки змінної кожну секунду
    while (true) {
        // Логіка перевірки змінної BTI
        std::cout << "Значення BTI: " << BTI << std::endl;

        // Затримка на 1 секунду
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // Оновлення змінної BTI (для демонстрації збільшуємо її на 1)
        BTI++;
    }

    return 0;
}

*/
// just save
