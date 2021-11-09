num=int(input())

five=0
three=0

while(num>-1):
    if(num%5==0):
        five=num//5
        print(five+three)
        break;
    num-=3
    three+=1
else:
    print(-1)
        
