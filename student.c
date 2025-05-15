#include <stdio.h>
#include <string.h>



typedef struct student
{
  int mark;
  char name[20];
  char (*get_grade)(struct student*);
  void (*get_name)(struct student*);

} student;
void 
_get_name(student *s)
{
    printf("%s",s->name);
}
char 
_get_grage(student *s)
{
  if (s->mark >= 90)
    return 'A';
  else if (s->mark >= 75)
    return 'B';
  else if (s->mark >= 60)
    return 'c';
  else
    return 'F';

}

void
__init__(student *s , int mark , char *name)
{
  s->mark = mark;
  strcpy(s->name , name);
  s->get_grade = _get_grage;
  s->get_name = _get_name;
}

int 
main()
{
  student s1;
  char name[] = "dharani";
  __init__(&s1,90,name); 
  s1.get_name(&s1);
  printf(" Your Grade is %c \n",s1.get_grade(&s1));
}
