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
 * Author: Gagandeep r naik  ( gagandeepnaik17@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 22.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{

    int a, b, result;
    
    printf("Enter two values:\n");
    scanf("%d%d", &a, &b);

    // Addition
    result = a + b;
    printf("Addition: %d + %d = %d\n", a, b, result);

    // Subtraction
    result = a - b;
    printf("Subtraction: %d - %d = %d\n", a, b, result);

    // Multiplication
    result = a * b;
    printf("Multiplication: %d * %d = %d\n", a, b, result);

    // Division
    result = a / b;
    printf("Division: %d / %d = %d\n", a, b, result);

    // Modulo Division
    result = a % b;
    printf("Modulo Division: %d %% %d = %d\n", a, b, result);

    // Increment
    printf("Increment the value of a by 1  %d is %d\n", a, ++a);
    
    //decrement
    printf("Decrement of the value of b by 1 %d is %d\n", b, --b);

    return 0;
}

// Program End
