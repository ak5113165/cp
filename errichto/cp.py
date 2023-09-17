A=[1,2,3]
n=3
p=[]
p.append(A[0])

for i in range(1,n):
    p.append(p[i-1]+A[i])
print(p)
