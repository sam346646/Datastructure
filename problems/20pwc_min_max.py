def rearrange(arr):
    arr.sort()
    l=[]
    k=len(arr)-1
    h=0
    for i in range(0,len(arr)):
        if(i%2==0):
            l.append(arr[h])
            h+=1
        else:
            l.append(arr[k])
            k-=1
    print(l)
  
l=[1,2,8,5,4]
rearrange(l)  