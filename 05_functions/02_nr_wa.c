/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Gagandeep r naik  (gagandeepnaik17@gmail.com )
 * Title: Project trainee
 * Last Modified Date: 19.03.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
void sum(int num1, int num2) 
{
  int result;
  
  result = num1 + num2;
  
  printf("Sum = %d\n", result);
}

int main() 
{
  int num1, num2;
  
  printf("Enter two numbers: ");
  scanf("%d%d", &num1, &num2);
  
  sum(num1, num2);
  
  return 0;
}

// Program End
