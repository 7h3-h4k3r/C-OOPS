#include<stdio.h>
#include "../includes/strct_header.h"
int 
main()
{
 acc_t ac;
 __init__(&ac);
 printf("dharani");
 ac.deposit(&ac,ac.get_Data(&ac));
 ac.show_balance(&ac);
 
}