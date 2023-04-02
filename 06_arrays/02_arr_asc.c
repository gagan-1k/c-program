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
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main() 
{
    int size, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < size-1; i++) 
    {
        for (j = i+1; j < size; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in ascending order: ");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





// Program End
