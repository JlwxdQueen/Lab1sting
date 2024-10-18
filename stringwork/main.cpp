#include <stdio.h>
#include "char_array.h"
#include "c_string.h"
#include "file_string.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif

    int choice;
    printf("Выберите способ обработки строки:\n");
    printf("1. Строка как массив символов\n");
    printf("2. Строка как Cи-строка\n");
    printf("3. Строка из файла\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);
    getchar();

    switch (choice) {
        case 1: {
            char str[100];
            printf("Введите строку: ");
            fgets(str, sizeof(str), stdin);
            process_char_array(str);
            break;
        }
        case 2: {
            char str[100];
            printf("Введите строку: ");
            fgets(str, sizeof(str), stdin);
            process_c_string(str);
            break;
        }
        case 3: {
            process_file_string("../stringwork/file1.txt", "../stringwork/file2.txt");
            break;
        }
        default:
            printf("Неверный выбор!\n");
    }

    return 0;
}
