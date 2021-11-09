#include <iostream>

int main()
{
    int numbers[9]={};
    int max=0;
    int num=0;

    for(int i=0;i<9;i++)
    {
        scanf("%d",&numbers[i]);
        if (numbers[i]>100)
        {
            i--;
        }

        if(numbers[i]>max)
        {
            max=numbers[i];
            num=i;
        }
    }

    printf("%d\n",max);
    printf("%d",num+1);

    return 0;
}