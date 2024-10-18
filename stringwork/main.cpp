#include <stdio.h>
#include "char_array.h"
#include "c_string.h"
#include "file_string.h"
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

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
            process_file_string("D:/Algoth/Lab1string/stringwork/file1.txt", "D:/Algoth/Lab1string/stringwork/file2.txt");
            break;
        }
        default:
            printf("Неверный выбор!\n");
    }

    return 0;
}