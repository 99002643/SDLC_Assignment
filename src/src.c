
#include <calculator_operations.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}
int factorial(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return operand1 * factorial(operand1-1);
}
int checkForPrime(int operand1)
{
    if(int i==1)
    {
        return 1;
    }
    else if(operand1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         checkForPrime(operand1);//calling the function checkForPrime itself recursively
      }
}
