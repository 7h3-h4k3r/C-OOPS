#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "../includes/strct_header.h"

float _balance(acc_t *a)
 {
    return a->balance;
 }

float is_valid_int(const char *it)
 {
    char *endptr;
    strtol(it, &endptr, 10);
    while (isspace((unsigned char)*endptr)) endptr++;
    return *endptr == '\0';
 }
 
float  _get_Data(acc_t *a)
 {
    printf(" Enter Your Amount => ");
    if (fgets(a->input, sizeof(a->input), stdin) != NULL) {
        a->input[strcspn(a->input, "\n")] = '\0'; // remove newline

        if (is_valid_int(a->input)) {
            return (float)strtol(a->input, NULL, 10);
        } else {
            printf("Invalid integer input.\n");
            exit(-1);
        }
    } else {
        printf("Input error.\n");
        exit(-1);
    }

    return 0;
 }

void _withdraw(acc_t *a,float data)
 {
    a->balance -= data;
 }

void _deposit(acc_t *a, float data)
 {
    a->balance += data;
 }

void _show_balance(acc_t *a)
  { 
  printf("Available Balance in Your Account %f ",a->balance);

  }
void __init__(acc_t *a)
  {
    a->get_Data = _get_Data;
    a->show_balance = _show_balance;
    a->deposit = _deposit;
    a->withdraw = _withdraw;

  }