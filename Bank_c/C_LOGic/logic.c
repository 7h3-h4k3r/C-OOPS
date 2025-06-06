
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void __sintc(char *p)
    {
        int i = 0;
        while (*p != '\0')
        {
            printf("%c",*p);
            p++;
        }
    }

int __comma_saprate(char *arr )
{   
    printf("%s\n ",arr);
    char temp_char = *(arr);
    int temp_index = 0;
    for (int i = 0 ;i<strlen(arr);i++){
        if(*(arr+i) == ',')
        {
            if((int)*(arr+i+1)<(int)temp_char){
                temp_char =  *(arr + i +1);
                temp_index = i+1;
            }
        }
    }
    return temp_index;
}
int allocate(char **arr, int size) {
    *arr = (char*)calloc(size, sizeof(char));
    if (*arr == NULL) {
        printf("Allocation Failed\n");
        exit(-1);
    }
    return 1;
}

int __rm_index(char *str, int index)
{
    int i = 0;
    for(i = index ; i < strlen(str) ;i++){
        *(str+i) = *(str+i+1);
    }
    *(str+i) ='\0';
}
int _rm(char *c , char *str)
    {
        if(strlen(c) != 1)
            return -1;
        int i = 0;
        while ( i != strlen(str))
        {
            if((*c == *(str+i))){
                __rm_index(str,i);
                i=-1;
            }
            i++;
        }
        return 1;
    }
int swap_new(char *arr , int index){
    char *Word[10];
    int count = 0;
    char* token = strtok(arr, ",");
    while (token != NULL) {
        Word[count++] = token;
        token = strtok(NULL, ",");
    }

    for(int i =0;i<count;i++){
        for ( int j = 0 ;j<count;j++){
            if(Word[i][0] > Word[j][0]){
                char *temp = Word[i];
                Word[i] = Word[j];
                Word[j] = temp;
            }
        }
    }
    for ( int i =0 ;i<count;i++){
        printf("%s\n",Word[i]);
    }

}
//Args = [["cat","hat"],["apple"],["banana"]]

int main(int argc, char* argv[])
{
    char *arr;
    if(argc == 2)
    {
     if(_rm("[",argv[1]) && _rm("]",argv[1]) && allocate(&arr,strlen(argv[1]))){
        printf("Successfully Removed The Open Bracket and Close Bracket && Allocation Memory sizeof(allocation memory) %ld \n",sizeof(arr));
     }
    swap_new(argv[1],__comma_saprate(argv[1]));
     
    }
    else
    {
      printf("0 argument found\n");
    }
    return 0;
}