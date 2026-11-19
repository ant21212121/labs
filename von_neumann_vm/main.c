#include <stdio.h>

/*
 * Принципы архитектуры фон Неймана в программе:
 * 1. Совместное хранение команд и данных в единой памяти memory[256].
 * 2. Последовательный переход по командам с помощью счетчика cpu_state[0] (PC).
 * 3. Выполнение арифметических операций в аккумуляторе cpu_state[1] (ACC).
 */

int cpu_state[8];
int memory[256];

int main()
{
    int i = 0;
    while (i < 256 && scanf("%d", &memory[i]) == 1)
    {
        i++;
    }

    cpu_state[3] = memory[0]; // вектор прерываний
    cpu_state[0] = 5;         // pc: адрес первой команды
    cpu_state[1] = 0;         // acc
    cpu_state[4] = 0;         // флаг работы

    while (cpu_state[4] == 0)
    {
        int pc = cpu_state[0];

        if (pc < 0 || pc >= 256)
        {
            if (cpu_state[5] != 0)
            {
                printf("Повторное прерывание: программа остановлена.\n");
                cpu_state[4] = 1;
                break;
            }
            printf("Ошибка: выход pc за границы памяти (%d)\n", pc);
            cpu_state[5] = 1;
            cpu_state[0] = memory[0];
            continue;
        }

        int cmd = memory[pc];
        cpu_state[2] = cmd;

        if (cmd == 0)
        {
            printf("pc=%d: команда 0, operand=0, acc=%d\n", pc, cpu_state[1]);
            cpu_state[4] = 1;
            break;
        }

        if (pc + 1 >= 256)
        {
            if (cpu_state[5] != 0)
            {
                printf("Повторное прерывание: программа остановлена.\n");
                cpu_state[4] = 1;
                break;
            }
            printf("pc=%d: команда %d, ошибка: нет ячейки для операнда\n", pc, cmd);
            cpu_state[5] = 1;
            cpu_state[0] = memory[0];
            continue;
        }

        int operand = memory[pc + 1];

        if (operand < 0 || operand >= 256)
        {
            if (cpu_state[5] != 0)
            {
                printf("Повторное прерывание: программа остановлена.\n");
                cpu_state[4] = 1;
                break;
            }
            printf("pc=%d: команда %d, operand=%d, ошибка: выход за границы\n", pc, cmd, operand);
            cpu_state[5] = 1;
            cpu_state[0] = memory[0];
            continue;
        }

        if (cmd == 1)
        {
            cpu_state[1] = memory[operand];
            printf("pc=%d: команда 1, operand=%d, acc=%d\n", pc, operand, cpu_state[1]);
            cpu_state[0] += 2;
        }
        else if (cmd == 2)
        {
            cpu_state[1] = cpu_state[1] + memory[operand];
            printf("pc=%d: команда 2, operand=%d, acc=%d\n", pc, operand, cpu_state[1]);
            cpu_state[0] += 2;
        }
        else if (cmd == 3)
        {
            cpu_state[1] = cpu_state[1] - memory[operand];
            printf("pc=%d: команда 3, operand=%d, acc=%d\n", pc, operand, cpu_state[1]);
            cpu_state[0] += 2;
        }
        else if (cmd == 4)
        {
            printf("pc=%d: команда 4, operand=%d, acc=%d\n", pc, operand, cpu_state[1]);
            cpu_state[0] = operand;
        }
        else if (cmd == 5)
        {
            printf("pc=%d: команда 5, operand=%d, acc=%d\n", pc, operand, cpu_state[1]);
            if (cpu_state[1] == 0)
            {
                cpu_state[0] = operand;
            }
            else
            {
                cpu_state[0] += 2;
            }
        }
        else
        {
            if (cpu_state[5] != 0)
            {
                printf("Повторное прерывание: программа остановлена.\n");
                cpu_state[4] = 1;
                break;
            }
            printf("pc=%d: неизвестная команда %d\n", pc, cmd);
            cpu_state[5] = 2;
            cpu_state[0] = memory[0];
        }
    }

    printf("Программа завершена.\n");
    return 0;
}
