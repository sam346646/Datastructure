def fun(a):
    sumg=0
    suml=0
    t=[]
    for i in range(len(a)):
        sumg=suml=0
        for j in range(i+1,len(a)):
            if a[j]<a[i]:
                suml+=a[j]
            else:
                sumg+=a[j]
        p=sumg*suml
        t.append(p)
    print(t)
