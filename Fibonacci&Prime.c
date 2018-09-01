#include<stdio.h>
int fib(int n)
    {
        int a=1,b=1,c=0,i;
        if(n==1)
        c=a;
        else if(n==3)
        c=b;
        else
        {
            for(i=5;i<=n;i=i+2)
            {
                c=a+b;
                a=b;
                b=c;
            }
        }
        return c;
    }
int isPrime(int n)
    {
        int i;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            return 0;
        }
        return 1;
    }
int prime(int n)
    {
        int x,c;
        for(x=2,c=0;c<n/2;x++)
        {
            if(isPrime(x))
            c++;
        }
    return x-1;
    }
int main()
{
    int n,z;
    scanf("%d",&n);
    if(n%2==0)
    z=prime(n);
    else
    z=fib(n);
    printf("%d",z);
}
