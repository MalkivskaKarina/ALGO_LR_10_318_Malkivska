#ifndef BOOLEAN4_H
#define BOOLEAN4_H

// --------------------------------------------------
// Структура для Boolean4
// --------------------------------------------------
struct BooleanData
{
    int A;
    int B;

    bool result;
};

// --------------------------------------------------
// Прототипи функцій
// --------------------------------------------------
void CheckCondition(BooleanData &d);

void TaskBoolean4();

#endif
