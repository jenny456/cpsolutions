def printClosest(arr1,aar2,m,n,x):
    diff=1000000000
    l=0
    r=n-1
    while(l<m and r>=0):
        if(abs(arr1[l]+arr2[r]-x)<diff):
            diff=abs(arr1[l]+arr2[r]-x)
            i=l
            j=r
        if(abs(arr1[l]+arr2[r])<x):
             l=l+1
        else:
             r=r-1
    return i,j
arr1 = [1, 4, 5, 7]
arr2 = [10, 20, 30, 40]
m = len(arr1)
n = len(arr2)
x = 38
p,q=printClosest(arr1, arr2, m, n, x)
print("the closest pair ", arr1[p],arr2[q])

             
