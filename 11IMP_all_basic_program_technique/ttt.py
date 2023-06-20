n=int(input())
l=list(map(int,input().split()))
t1=[]
t2=[]
l.append(0)
for i in range(0,len(l)):
    if l[i]>0:
        e=l[i]
        t1.append(e)   
    else:
        if t1==[]:
            continue
        t2.append(t1)
        t1=[]

print(t2)
sum=0
max=0
for i in t2:
    sum=0
    for j in i:
        sum+=j
    if sum>max:
        max=sum

print(max)