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
 * Title: Project Engineer
 * Last Modified Date: 30.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>

// Main Function
int main() 
{
    char str[100];
    printf("Plz enter a str: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; 
    
    if (strcmp(str, "hi") == 0)
     {
        printf("Hello\n");
    } 
    else 
    {
        printf("not enter hi\n");
    }

    return 0;
}


// Program End
