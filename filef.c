/*FILE-container in a storage device to store data
RAM is volatile(contents are lost when program terminates).Files are used to 
persist the  data. File operations
 are create,open,close,read from,write in a file
 Typs of files -> Text files(textual data, .txr,.c) and 
 binary files(binary data,.exe,.mp3,.jpg).FILE is a hidden struct that needs 
 to be created to open a file
 A FILE pointer that points to this structure is created & used to access file
 FILE*fptr;  */
#include<stdio.h>
int main() {
    FILE *fptr;
    /*fptr=fopen("filename"(eg. binar.c),mode(determines file operation)); */
    /*modes are "r" -open to read,"rb"-open to read in binary,"w"-open to write
    "wb"-open to write in binary,"a"-open to append. w and wb create a new file 
    if thefile name entered doesn't exist*/

    // check if a file exists or not //
    /*fptr=fopen("X.c","r");
    if(fptr==NULL)
    printf("File doesn't exist");
    else
    fclose(fptr);*/
    /* read frm file-int a;-> fscanf(fptr(file pointer),"fromat specifier(%d)",&a
    )*/
    int a;
    fptr=fopen("Hi.txt","w");
/* fgetc returns EOF(End Of File) to show that file has ended*/
    return 0;
}