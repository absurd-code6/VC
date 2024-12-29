// Introduction to Switch
# include<stdio.h>
int main() {
    /*switch(number) {
        case C1:do something
          break;
        case C2: do something
          break;
        default:do something\
    } */
char homicide;
printf("enter the degree of murder");
scanf("%d",&homicide);
/*Some points: 1)Cases can be in any order
2)Nested switches(switch inside switch are allowed)*/
switch (homicide) {
    case 1:printf("1st degree murder\n");
            break;
    case 2:printf("2nd degree murder\n");
            break;
    case 3:printf("3rd degree murder\n");
            break;
    default:printf("NO such degree\n");        
}
return 0;
}
