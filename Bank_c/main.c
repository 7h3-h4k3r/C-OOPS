#include<stdio.h>
#include "bank_account.h"
int 
main()
{
 acc_t ac;
 __init__(&ac);
 ac.deposit(&ac,ac.get_Data(&ac));
 ac.show_balance(&ac);
 
}