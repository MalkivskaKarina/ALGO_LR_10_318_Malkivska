#include <iostream>
#include "Time.h"

using namespace std;

// --------------------------------------------------
// Перевірка правильності часу
// --------------------------------------------------
bool IsValidTime(TTime t)
{
    return (t.hour >= 0 && t.hour < 24 &&
            t.minute >= 0 && t.minute < 60 &&
            t.second >= 0 && t.second < 60);
}

// --------------------------------------------------
// Додавання секунд
// --------------------------------------------------
TTime AddSec(TTime t, int n)
{
    // Якщо час неправильний —
    // повертаємо без змін
    if (!IsValidTime(t))
        return t;

    // Переведення часу у секунди
    int totalSeconds =
        t.hour * 3600 +
        t.minute * 60 +
        t.second;

    // Додавання секунд
    totalSeconds += n;

    // Нормалізація часу
    totalSeconds %= (24 * 3600);

    // Для від’ємних значень
    if (totalSeconds < 0)
        totalSeconds += 24 * 3600;

    // Повернення до формату часу
    t.hour = totalSeconds / 3600;

    totalSeconds %= 3600;

    t.minute = totalSeconds / 60;

    t.second = totalSeconds % 60;

    return t;
}

// --------------------------------------------------
// Функція виконання завдання
// --------------------------------------------------
void Task1()
{
    TTime t;
    int n;

    cout << "\n===== TASK 1 : Param79 =====\n";

    for (int i = 1; i <= 5; i++)
    {
        cout << "\nMoment #" << i << endl;

        cout << "Input hour: ";
        cin >> t.hour;

        cout << "Input minute: ";
        cin >> t.minute;

        cout << "Input second: ";
        cin >> t.second;

        cout << "Input N seconds: ";
        cin >> n;

        TTime result = AddSec(t, n);

        cout << "New time: ";

        cout << result.hour << ":"
             << result.minute << ":"
             << result.second << endl;
    }
}
