def rearrange(l,n):
    t=[]
    i=0
    while i!=n:
        t.append(0)
    for i in range(0,len(l)-n-1):
        t.append(l[i])
    print("s")
    print(t)
  
l=[1,2,8,5,4]
n=2
rearrange(l,n)  
print("s")
