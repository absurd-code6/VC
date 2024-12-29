// Intro to Associativity(for same precedence) //
// How the hell on earth will u slove x=3*2/4*6 ??
# include<stdio.h>
int main()
{
/* According to associativity Left ---> right
3*2=6,
6/4=1.5(rounded off to 2),
2*6=12(ans)*/
    int x=3*2/4*6;
    printf("%d",x);
    return 0;
}
