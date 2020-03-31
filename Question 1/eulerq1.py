l=[]
for i in range(2,2000001):
    l.append(i)
d=l
p=l[0]
while(p*p<2000000):
    for j in range(0,len(d)):
        if(l[j]%p==0):
            d.pop(j)
print(d)
print(l)
print(sum(d))
            
