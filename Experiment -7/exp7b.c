#include<stdio.h>
int main()
{
int ResultantMatrix[4][4],i,j,k;
int matrix1[4][4] ={ {2, 23, 23, 45},
{66, 45, 3, 23},
{3, 5, 89, 67},
{4, 4, 9, 7}};

int matrix2[4][4] = { {3, 5, 6, 4},
{64, 89, 56, 2},
{56, 26, 56, 99},
{90, 7, 43, 2}};

while(1)
{

for (j = 0; j < 4; j++)
{
for (i = 0; i< 4; i++)
{
ResultantMatrix[i][j] = 0;
for (k = 0; k < 4; k++)
ResultantMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
printf("result=%d",ResultantMatrix[i][j]);
}
}

}

}
