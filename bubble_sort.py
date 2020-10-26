num_array=list()
n=input("Enter no of elements")
print("elements")
m=int(n)
for i in range(0,int(n)):
    k=input("num: ")
    num_array.append(int(k))
print("array:",num_array)
for i in range(0,m):
    for j in range(0,m-i-1):
        if(num_array[j]>num_array[j+1]):
            temp=num_array[j]
            num_array[j]=num_array[j+1]
            num_array[j+1]=temp
print("the sorted Array is:  ",num_array)

