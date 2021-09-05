N,S=map(int,input().split())
num_list=[]

num=input()
num_list=list(map(int,num.split(maxsplit=N)))

min_num=0
calc_list=[]

def calcsum(num_list,start,end):
    sum_num=0
    for i in range(start,end+1):
        sum_num+=num_list[i]
    return sum_num

for i in range (0,N-1):
    for j in range(i+1,N):
        if calcsum(num_list,i,j)>=S:
            calc_list.append(j-i+1)

if not calc_list:
    print(0)
else:
    print(min(calc_list))



