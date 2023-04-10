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
 * Last Modified Date: 04.04.2023
 *
/*********************************************************************************************/

#include <stdio.h>

struct student
{
     char name[100];
     int roll;
     float marks;
};

int main()
{
     struct student s;

     printf("Enter information:\n");
     printf("Enter name: ");
     scanf("%s", s.name);
     printf("Enter roll number: ");
     scanf("%d", &s.roll);
     printf("Enter marks: ");
     scanf("%f", &s.marks);

     printf("\nDisplaying Information:\n");
     printf("Name: %s\n", s.name);
     printf("Roll number: %d\n", s.roll);
     printf("Marks: %.1f\n", s.marks);

     return 0;
}
