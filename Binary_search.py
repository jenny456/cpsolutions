def binarySearch(arr,l,r,x):
    if r>l:
        m=l+(r-l)/2
        if arr[mid]==x:
            return mid
        elif arr[mid]<x:
            return binarySearch(arr,m+1,r,x)
        elif arr[mid]>x:
            return binarysearch(arr,l,m-1,x)
    else:
        return -1
    
        
            
