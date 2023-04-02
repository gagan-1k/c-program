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
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
      int a, b, c, d;
    printf("Enter the values: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d) 
    {
        printf("%d is the greatest\n", a);
    }
    else if (b > a && b > c && b > d) 
    {
        printf("%d is the greatest\n", b);
    }
    else if (c > a && c > b && c > d) 
    {
        printf("%d is the greatest\n", c);
    }
    else 
    {
        printf("%d is the greatest\n", d);
    }
     return 0;
}

// Program End
