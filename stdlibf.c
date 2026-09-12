#include<stdio.h>
#include<string.h>
void main() {
/*char username[]="Dickhead";
int j=strlen(username);
printf("%d",j);*/

char original[]="Raspberry";
char modified[]="Marshmallow";
strcpy(original,modified);
puts(original);
}