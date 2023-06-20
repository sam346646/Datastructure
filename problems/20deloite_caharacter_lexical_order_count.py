s="hello world"
l=[]
t=[]
l=s.split()
for i in l:
    j=0
    c=0
    while j!=(len(i)-1):
        if(i[j]<i[j+1]):
            c+=1
        j+=1
    t.append(c)

for i in t:
    print(i,end="")
