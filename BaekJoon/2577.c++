#include <iostream>

int main()
{
    int A,B,C,num;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    num=A*B*C;
    int arr[10]={0,};
    int count=0;
    while(num>0)
    {
        count=num%10;
        arr[count]++;
        num/=10;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}