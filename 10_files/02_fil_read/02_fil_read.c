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
 * Last Modified Date: 06.04.2023
 *
/*********************************************************************************************/
#include <stdio.h>

int main()
{
    FILE *fptr;
    char filename[100], c;

    printf("Input the filename to be opened: ");
    scanf("%s", filename);

    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("\nThe content of the file %s is:\n", filename);

    while ((c = fgetc(fptr)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fptr);

    return 0;
}

