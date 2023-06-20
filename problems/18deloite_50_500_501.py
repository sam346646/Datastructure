def smallest(x,y):
    if x%y==0:
            return x
    else:
        i=0
        while i<9:
            t=int(str(x)+str(i))
            if t%y==0:
                return t
            i+=1
print(smallest(33,11))