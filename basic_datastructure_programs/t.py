d={"name":"sam"}
inv={}
for i,j in d.items():
    if j in inv:
        inv[j].append(i)
    else:
        inv[j]=[i]

print(inv) 