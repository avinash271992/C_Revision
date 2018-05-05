/*C_Revision
#Count total set bits in all numbers from 1 to n
#https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/
*/
#include<stdio.h>
int main()
{
int n=5,c=1,count,i;
static int set_bit=0;
//scanf("%d",&n);
while(c<=n)
{
i=0;
count=c;
printf("count =%d, i=%d\n",count,i);
while(i<=31)
{
if((count>>i&1)==1)
{
set_bit++;
printf("set bit %d\n",set_bit);
}
i++;
}
c=c+1;
}
printf("number of set bits %d\n",set_bit);
}
