#include <stdio.h>
#include <time.h>
int main ( )
{
int j, k, n;
while (1) { // infinite loop
printf( "\nEnter any number : ");
scanf("%d",&k);
printf("Enter any number : ");
scanf("%d", &j);
n=k%j;
printf("%d", n);
time_t rawtime;
struct tm * timeinfo;
time (& rawtime);
timeinfo = localtime (&rawtime);
printf("\nCurrent local time and date : %s", asctime (timeinfo));
}
}

