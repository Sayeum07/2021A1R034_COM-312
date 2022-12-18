#include<unistd.h>
#include<sys/types.h>
#include<errno.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(void)
{ // declare cariable
int var=1;
int* p= (int*) malloc(2);
pid_t PID = fork();
*p = 0;
if (PID >=0)//if fork successfull
{
if(PID ==0)//if it is child process
{
printf("\n\nChild Process :\n Initial Value = %d",var);
var=5;
printf("\nNew Value of var =%p",p);
printf("\nAddress of var in child = %p\n",&var);
}
else //if it is parent process
{
printf("\n\nParent Process:\n Initial Value =%d",var);
var=10;
printf("\nNew value =%d",var);
printf("\nAddress of malloc in parent = %p",p);
printf("\nAddress of var in child =%p\n",&var);
}
}
return 0;
}
