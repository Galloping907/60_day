#include <stdio.h>
int main()
{
    int a;
    int b=0;
    scanf("%d",&a);
   if(a>3)  
    {
        for(int i=3;i<a;i++)
        {
            if(a%i==0)
            {
                b++;
            }
        }
    }
    if(a==2||a==3)
    {
        b=1;
    }
    if(b==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}