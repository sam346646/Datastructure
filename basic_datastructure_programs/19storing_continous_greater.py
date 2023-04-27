n=int(input())
l=list(map(int,input().split()))
max=l[0]
t1=[]
t2=[]
j=0
l.append(0)  #since if last value is greater it has to be pushed to list
max=l[0]
for i in range(0,len(l)):
    if l[i]>max:
        max=l[i]
        t1.append(max)   
    else:
        if t1==[]:
            continue
        t2.append(t1)
        j+=1
        t1=[]

print(t2)
print(len(t2))