#ifndef TLPI_HDR_H
#define TLPI_HDR_H     /* Предотвращает случайное двойное включение */
#include <sys/types.h> /* Определения типов, используемые
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "get_num.h"
   многими программами */
/* Стандартные функции ввода-вывода */
/* Прототипы наиболее востребованных библиотечных
   функций плюс константы EXIT_SUCCESS
   и EXIT_FAILURE */
/* Прототипы многих системных вызовов */
/* Объявление errno и определение констант ошибок */
/* Наиболее используемые функции обработки строк */
/* Объявление наших функций для обработки числовых
                          аргументов (getInt(), getLong()) */
#include "error_functions.h" /* Объявление наших функций обработки ошибок */
typedef enum { FALSE, TRUE } Boolean;
#define min(m,n) ((m) < (n) ? (m) : (n))
#define max(m,n) ((m) > (n) ? (m) : (n))
#endif