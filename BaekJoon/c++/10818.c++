#include <iostream>

int main()
{
    int count;
    int max=-1000000;
    int min=1000000;
    scanf("%d",&count);
    
    int numbers[count]={};

    for(int i=0;i<count;i++)
    {
        scanf("%d",&numbers[i]);
        if(numbers[i]<min)
        {
            min=numbers[i];
        }
        if(numbers[i]>max)
        {
            max=numbers[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);

    return 0;
}