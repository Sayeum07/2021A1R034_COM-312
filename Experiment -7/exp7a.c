#include<stdio.h>
#include<time.h>
int main()
{
clock_t start,end;
double runtime;
start = clock();
int i,num=1,primes=0;
while(num<=10000000){
i=2;
while(i<=num){
if (num%i==0)
  break;
i++;
}
if (i==num)
primes++;
//clear("clear");
printf("%d prime numbers calculated\n",primes);
num++;
}
end=clock();
return 0;
}
