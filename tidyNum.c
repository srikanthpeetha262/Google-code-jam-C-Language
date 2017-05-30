#include <stdio.h>
#include <math.h>

//checkTidy function decleration
long long createArray(long long input1,long long c,long long i,long long n, long long digitCount, long long num[] );


int main()
{
    long long INPUT1, I,C,N, DIGITCOUNT;
    long long NUM[2];
    int call;
    
    //calling the "checkTidy" function
    call = createArray(INPUT1, C, I, N, DIGITCOUNT, NUM);

    return 0;

}


long long createArray(long long input1,long long i, long long n, long long digitCount, long long c, long long num[] )
{
    long long j=0;
    printf("\nenter the input1: ");
    scanf("%lli",&input1);
    printf("\nthe input is %lli\n", input1);
    

    c = 0; // digit position 
    
    n = input1;
    while (n != 0)
        {
               n /= 10; //n=n/10
               c++;     // count number of digits 
        }
    digitCount = c;
    printf("\nnumber of elements:%lli", c);
    num[digitCount];
    n = input1;

    //printf("\nthe value of c is:%lli", c);
    // extract each digit 
    //printf("n =%lli\n",n); 


    printf("\n");
    do
        {
                num[c-1] = n % 10;
                ///printf("%lli,", num[c-1]);
                n /= 10;
                c--;
        }while(c>0);

    printf("\nThe array elements are: ");
    
    for(i=0; i<digitCount;i++)
        {
            printf("%lli,", num[i]);
        }


    long long a;    
    a=0;
    j=1;
    printf("\n");

    for(i=0; i<=digitCount; i++)
       {           
		if(num[i]<=num[j])
			a++;
		j++;
       }


    if(a==digitCount)
        {
          printf("\nThe Number is tidy");
        }
    else
        printf("\nThe Number is untidy");

    printf("\n");

return 11;
}


