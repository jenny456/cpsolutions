num=list()
m=input("enter number of elements:")
n=int(m)
print("Enter elements")
for i in range(0,n):
    k=input("num: ")
    num.append(int(k))
print("4Array  :",num)
for i in range(0,n-1):
    mini=i
    for j in range(i+1,n):
        if(num[j]<num[mini]):
            mini=j
    num[i],num[mini]=num[mini],num[i]
    print(num)
print("Array  ",num)
