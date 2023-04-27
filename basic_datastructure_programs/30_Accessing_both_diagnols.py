n=4
k=l=1

for i in range(1,2*n):
    for j in range(1,2*n):
        if i==j:
            if i>n:
                print(i-2*k,end="")
                k+=1
            else:
                print(i,end="")
        elif i+j==2*n:
            if i>n:
                print(i-2*l,end="")
                l+=1
            else:
                print(i,end="")
        else:
            print(" ",end="")
    print()