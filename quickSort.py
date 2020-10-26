def partition(arr,low,high):
    pivot=arr[high]
    i=low
    for j in range(low,high-1):
        if(arr[j]<=pivot):
            arr[j],arr[i]=arr[i],arr[j]
            i=i+1
    arr[i],arr[high]=arr[high],arr[i]
    return(i)
def quickSort(arr,low,high):
    if(low<high):
        pi=partition(arr,low,high)
        quickSort(arr,low,pi-1)
        quickSort(arr,pi+1,high)


num=list()
m=input("enter number of elements:")

print("Enter elements")
for i in range(0,int(m)):
    k=input("num: ")
    num.append(int(k))
print(" Array  :",num)
n=len(num)
quickSort(num,0,int(n-1))
print(" Array  :",num)

        
    
