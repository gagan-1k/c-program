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
 * Last Modified Date: 20.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{

    char name[50];
    int rollnumber;
    float cgpa;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your roll number: ");
    scanf("%d", &rollnumber);
    
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", rollnumber);
    printf("CGPA: %.2f\n", cgpa);
    
    return 0;
}

// Program End
