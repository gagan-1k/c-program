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
 * Last Modified Date: 28.03.2023
 *
/*********************************************************************************************/

#include <stdio.h>
#include "sum.h"

int main()
{
    int num1, num2, result;
    
    printf("Enter two numbers to add:\n");
    scanf("%d %d", &num1, &num2);
    
    result = sum(num1, num2);
    
    printf("The sum of %d and %d is %d\n", num1, num2, result);
    
    return 0;
}

