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
 * Author: Gagandeep r naik ( gagandeepnaik17@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 22.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{

    int value = 99;

    // Using the = operator
    printf("value of result = %d\n", value); 

    // Using the += operator...
    value += 99;
    printf("value of result = %d\n", value); 

    // Using the -= operator
    value -= 99;
    printf("value of result = %d\n", value); 

    // Using the *= operator
    value *= 99;
    printf("value of result = %d\n", value); 

    // Using the /= operator
    value /= 99;
    printf("value of result = %d\n", value);

    return 0;
}

// Program End
