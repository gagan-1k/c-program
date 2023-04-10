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
 * Author: Gagandeep r naik  (gagandeeepnaik17@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 01.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int m = 300;
     float fx = 300.6;
     char cht = 'z';

     printf("Pointer : Demonstrate the use of & and * operator :\n");
     printf("--------------------------------------------------------\n");

     printf("m = %d\n", m);
     printf("fx = %f\n", fx);
     printf("cht = %c\n", cht);
     printf("\nUsing & operator :\n");
     printf("-----------------------\n");
     printf("address of m = %p\n", &m);
     printf("address of fx = %p\n", &fx);
     printf("address of cht = %p\n", &cht);

     printf("\nUsing & and * operator :\n");
     printf("-----------------------------\n");
     printf("value at address of m = %d\n", *(&m));
     printf("value at address of fx = %f\n", *(&fx));
     printf("value at address of cht = %c\n", *(&cht));

     int *mptr = &m;
     float *fxptr = &fx;
     char *chtptr = &cht;

     printf("\nUsing only pointer variable :\n");
     printf("----------------------------------\n");
     printf("address of m = %p\n", mptr);
     printf("address of fx = %p\n", fxptr);
     printf("address of cht = %p\n", chtptr);

     printf("\nUsing only pointer operator :\n");
     printf("----------------------------------\n");
     printf("value at address of m = %d\n", *mptr);
     printf("value at address of fx= %f\n", *fxptr);
     printf("value at address of cht= %c\n", *chtptr);

     return 0;
}

// Program End
