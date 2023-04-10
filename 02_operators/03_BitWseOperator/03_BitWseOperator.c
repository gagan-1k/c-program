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
    int a = 50, b = 5;

    // Using the & operator
    int and_result = a & b;
    printf("a & b = %d\n", and_result); 

    // Using the | operator
    int or_result = a | b;
    printf("a | b = %d\n", or_result); 

    // Using the ^ operator
    int xor_result = a ^ b;
    printf("a ^ b = %d\n", xor_result); 

    // Using the ~ operator
    int not_result = ~a;
    printf("~a = %d\n", not_result); 

    // Using the << operator
    int left_shift_result = a << 2;
    printf("a << 2 = %d\n", left_shift_result); 

    // Using the >> operator
    int right_shift_result = a >> 2;
    printf("a >> 2 = %d\n", right_shift_result);

    return 0;
}



// Program End
