def printUnsorted(arr,n):
    for i in range (0,n):
        s=i
        if(arr[i+1]<arr[i]):
            break
    for j in range(n-1,-1,-1):
        e=j
        if(arr[j-1]>arr[j]):
            break
    
    mini=arr[s]
    maxi=arr[s]
    for i in range(s,e+1):
        if(arr[i]<mini):
            mini=arr[i]
        if(arr[i]>maxi):
            maxi=arr[i]
    for i in range(s):
        if arr[i]>mini:
            s=i
            break
    for i in range (n-1,e,-1):
        if (arr[i]<maxi):
            e=i
            break
    print ("The unsorted subarray which makes the given array")
    print ("sorted lies between the indexes %d and %d"%( s, e))
arr = [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60]
arr_size = len(arr)
printUnsorted(arr, arr_size)
