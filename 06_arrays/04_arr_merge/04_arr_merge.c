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
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main() 
{
    int a1, a2, a3, i, j;
        
    printf("Enter the size of first array: ");
    scanf("%d", &a1);

    int arr1[a1];
    printf("Enter %d elements of first array:\n", a1);
    for (i = 0; i < a1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &a2);

    int arr2[a2];
    printf("Enter %d elements of second array:\n", a2);
    for (i = 0; i < a2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    a3 = a1 + a2;
    int arr3[a3];
    for (i = 0; i < a1; i++) 
    {
        arr3[i] = arr1[i];
    }

    for (j = 0; j < a2; j++) 
    {
        arr3[i++] = arr2[j];
    }

    printf("\nThe merged array is:\n");
    for (i = 0; i < a3; i++) 
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}


// Program End
