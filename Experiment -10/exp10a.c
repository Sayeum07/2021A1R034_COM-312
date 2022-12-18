#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
fork();
fork();
int var=1,i=1;
while(1)
{
if(i==5)
{
break;
}
printf("Address of var in loop = %p\n",&var);
i++;
}
return 0;
}
