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

#endif
