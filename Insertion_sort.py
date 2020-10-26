num=list()
m=input("enter number of elements:")
n=int(m)
print("Enter elements")
for i in range(0,n):
    k=input("num: ")
    num.append(int(k))
print(" Array  :",num)
for i in range(1,n):
    key=num[i]
    j=i-1
    while j>=0 and key<num[j]:
        num[j+1]=num[j]
        j-=1
        
    num[j+1]=key
print("array :",num)


    
