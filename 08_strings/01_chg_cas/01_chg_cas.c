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
 * Author: Gagandeep r nai  (gagandeepnaik17@gmail.com.com )
 * Title: Project Engineer
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

#include <stdio.h>
 #include <ctype.h>

int main() {
    char str[] = "PHYTEC";
    int i;
    printf("%s\n",str);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("the changed case is :%s", str);
    
    return 0;
}
