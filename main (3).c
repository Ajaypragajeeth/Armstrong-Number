#include<stdio.h>
 int main()
 {
      int number, temp, rem, sum=0;

      printf("Enter number: ");
      scanf("%d",&number);

      temp=number;
      while( number!=0 )
      {
          rem = number%10;
          sum += (rem*rem*rem);
          number /= 10; //number=number/10
      }

      if(temp == sum)
          printf("%d is an Armstrong number of order 3.\n",temp);
      else
          printf("%d is not an Armstrong number of order 3.\n",temp);

      return 0;
 }

O/P:

Enter number: 150
150 is not an Armstrong number of order 3.
Enter number: 148
148 is not an Armstrong number of order 3.

