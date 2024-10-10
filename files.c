#include <stdio.h>
#include <stdlib.h>

int main(){
    /**
     * If we want to handle a file, first we need to get the physical address of
     * the file that is so called pointer. For doing that, we usually use fopen
     * funtion to get the pointer of the specified file. This function need to two
     * main parameter: file name and mode. For mode, there are 'r' for reading the
     * file, 'w' for writing a file and 'a' for appending the file. The writing mode
     * will create the file if the file doesn't exist
     * */ 
    // FILE * file=fopen("demo.txt","w");
    /**
     * fptintf funtion is made to write the text content to the specified file. There are
     * two essentional parameters: target file's pointer and the content you would 
     * like to write into
     * */ 
    // fprintf(file,"Hello world!\nHi!\n");
    /**
     * After manipulation had done, we should use fclose to close the file to release the
     * memory
     * */ 
    // fclose(file);

    /**
     * Open a file in append mode
     * */ 
    // FILE * append=fopen("demo.txt","a");
    /**
     * Append the new content into the file
     * */ 
    // fprintf(append,"This is the append content");
    /**
     * Close the file
     * */ 
    // fclose(append);


    // char line[250];
    /**
     * Read the file in 'r' mode
     * */ 
    // FILE * read=fopen("demo.txt","r");

    /**
     * fgets get the content of the file, it takes three parameters: string for 
     * storing the content read from the file, max limit for the length limit and
     * pointer of the file that should be read. The function will read the content
     * line by line, everytime we invoke it, the pointer the file will be increase
     * (for fgets function)
     * */ 
    // fgets(line,250,read);
    // printf("%s",line);
    // fgets(line,250,read);
    // printf("%s",line);
    // fgets(line,250,read);
    // printf("%s",line);

    // fclose(read);

    return 0;
}