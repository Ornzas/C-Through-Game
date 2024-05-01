// Прогрпмма Die Roller
// Демонстрирует генератор случайных чисел
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    // Запускает генератор случайных чисел
    int randomNumber = rand(); // Генерирует случайне число
    int die = (randomNumber % 6) + 1; // Получаем число между 1 и 6
    cout << "You rolled a " << die << endl;
    // cout << time(0) << endl;
    return 0;
}