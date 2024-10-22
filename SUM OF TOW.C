#include <stdio.h>
int sumOfDigits(int num) {
int sum = 0;
while (num > 0) {
sum += num % 10;
num /= 10;      
}
return sum;
}
void main() {
int number1, number2, sum1, sum2, totalSum;
printf("Enter the first number: ");
scanf("%d", &number1);
printf("Enter the second number: ");
scanf("%d", &number2);
sum1 = sumOfDigits(number1);
sum2 = sumOfDigits(number2);

totalSum = sum1 + sum2;

printf("Total sum of digits: %d\n", totalSum);

return 0;
}
