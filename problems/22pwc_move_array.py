def rearrange(l,n):
    t=[]
    i=0
    while i!=n:
        t.append(0)
        i+=1
    for i in range(0,len(l)-n):
        t.append(l[i])
    print(t)
  
l=[1,2,8,5,4]
n=2
rearrange(l,n)  