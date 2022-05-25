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



int main(){
    
    read_txt("opentestcases/matrix1a.txt");

    return 0;
}
https://www.scaler.com/topics/matrix-multiplication-in-c/
