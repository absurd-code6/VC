# include<stdio.h>
void main() {
    char word[100],ch;
    int i,count=0;
    printf("Enter the word:");
    fgets(word,sizeof(word),stdin);
    printf("Enter character:");
    scanf("%c",&ch);
    for(i=0;word[i]!='\0';i++) {
        if(ch==word[i])
        ++count;
    }
    printf("frequency of %c = %d",ch,count);
}
