#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    return(a+b);
}

int main(int argc, char* argv[])
{
    int num1,num2;
    
    if (argc==1)
    printf("No command line arguments found.\n");
    
    else
    {
        num1=atoi(argv[1]);
        num2=atoi(argv[2]);
        printf("%d\n", add(num1,num2));
        
    }
    return 0;
}
