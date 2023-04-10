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
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, j, len, flag = 0;

    printf("Enter your string for palindrome :");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--)
     {
        if (str[i] != str[j]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag) 
    {
        printf("Entered string is:%s\nNot in palindrome\n", str);
    } 
    else 
    {
        printf("Entered string is:%s\nGive string is in palindrome\n", str);
    }

    return 0;
}
