#include<stdio.h>

int read_txt(char *filename){
    
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // read one character at a time and
    // display it to the output
    char ch;
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    // close the file
    fclose(fp);


    return 1;
}

/* 
Start.
Enter the value of m and n (or) order of the first matrix.
Enter the value of p and q (or) order of the second matrix.
Create a matrix of size a[m][n] and b[p][q].
Enter the element of matrices row wise using loops.
If a number of columns of first matrix is not equal to the number of rows of second matrix, print matrix multiplication is not possible and exit. If not, proceed to next step.
Create a third matrix, c of size m x q to store the product.
Set a loop from i=0 to i=m.
Set an inner loop for the above loop from j=0 to j=q.
Initialise the value of element (i, j) of new matrix to 0.
Set an inner loop inside the above loop from k=0 to k=p.
Using the add and assign operator (+=) store the value of a[i][k] * b[k][j] in the third matrix, c[i][j].
Print the third matrix.
Stop.
 */


int main(){
    
    read_txt("opentestcases/matrix1a.txt");

    return 0;
}

