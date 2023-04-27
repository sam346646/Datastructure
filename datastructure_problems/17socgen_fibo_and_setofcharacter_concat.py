st="abcde"
s="";
temp=""
s+="t"
l=[]
j=0;k=0; t1=1;t2=1;t3=0 
sum=2
for i in range(0,2*len(st)):
    if i%2==0:
        s+=st[j]
        j+=1
    else:
        if k<2:
            s+="1"
        else:
            t3=t1+t2
            t1=t2
            t2=t3
            s+=str(t3)
            sum+=t3 
        k+=1
temp=s.replace("t",str(sum))
print(temp)
    