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
    char sentence[100];

    printf("Input a sentence for the file: ");
    fgets(sentence, 100, stdin);

    fptr = fopen("test.txt", "w");
    if (fptr == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    printf("\nThe file test.txt created successfully...!!");

    return 0;
}
