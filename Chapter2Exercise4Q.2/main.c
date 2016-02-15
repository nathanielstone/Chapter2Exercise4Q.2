//
//  main.c
//  Chapter2Exercise4Q.2
//
//  Created by Nathaniel Stone on 2/15/16.
//  Copyright © 2016 Nathaniel Stone. All rights reserved.
//

#include <stdio.h>

    int main()
    {
        int arr[10][10];
        int m,n,j,k = 0, p = 0;
        int row = 10;
        int col = 10;
        int *rowNumber, *colNumber;
        
        
        /* Printing a 2 dimensional array letting m = rows and n = columns and let m and n = 10;
         10 rows and 10 columns. Using the pointer and addressing method techniques discussed in the chapter do the exercises.
        
         */
        
        
        printf("\n");
        printf(" A 2 Dimensional Array that displays 10 rows and 10 columns \n \n");
        for (m = 0; m < row; m++) {
            for (n = 0; n < col; n++) {
                arr[m][n] = k;
                k++;
                printf(" %d ", arr[m][n]);
            }
            printf("\n");
        }
        printf("\n");
        
        /*
         To print a specific row allow the variable row0 = to the address at the index of the row you would like to print.
         Loop through the row filling the index and printing each element.
         */
        
         rowNumber = &(arr[0][0]);
        
        printf(" Show specific row of array at index [0][0] \n \n");
        for (int q = 0; q<10; q++){
            printf("%d\t", *(rowNumber + q));
        }
        printf("\n");
        
        /*
         Now to print the consecutive numbers column first we have to switch the index from "[row][column]" to "[column][row]"
         arr[m][n] to arr[n][m].
         */
        
        for (m = 0; m < row; m++) {
            for (n = 0; n < col; n++) {
                arr[n][m] = p;
                p++;
                
                // Put a printf statment here to print the columns first then to the right.
                
            }
        }
        
        printf("\n");
        
        //Set col0 equal to the column at index[0][0].
        
        colNumber = &(arr[0][0]);
        
        printf("Show specific column of array at index[0][0] \n\n ");
        
        //loop through the column filling the index with each element.
        for(j = 0; j<10; j++){
            printf(" %d \n", *(colNumber + j));
        }
        printf("\n\n");

        
        return 0;
    }
    
    


