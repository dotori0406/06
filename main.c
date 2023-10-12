#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int res=1;
    int i;
    for(i=1;i<=n;i++)
      res=res*i;
    
    return res;
}
int combination(int n, int r)
{
    int div1, div2;
    div1=factorial(n);
    div2=factorial(n-r)*factorial(r);
    
    return(div1/div2);
}
int main(int argc, char *argv[])
{
    int n,r;
    int result;
    printf("Input n, r\n");
    scanf("%i %i",&n,&r);
    
    result=combination(n,r);
   
    printf("result is %i",result);






    system("PAUSE"); 
    return 0;
}


