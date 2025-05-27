#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

typedef struct acc_t
 {
    float balance;
    char input[30];
    void (*show_balance)(struct acc_t *);
    float (*get_Data)(struct acc_t *);
    void (*deposit)(struct acc_t*,float);
    void (*withdraw) (struct acc_t *,float);
    float (*is_valid) (struct acc_t*);
 } acc_t;

 float _balance(acc_t *a);
 float is_valid_int(const char *it);
 float is_valid_int(const char *it);
 void _withdraw(acc_t *a,float data);
 void _deposit(acc_t *a, float data);
 void _show_balance(acc_t *a);
 void __init__(acc_t *a);
#endif
