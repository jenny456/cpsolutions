def interpolationsearch(arr,l,r,x):
    po=l+((r-l)*(x-arr[l])/(arr[r]-arr[l]))
    pos=int(po)
    if ( l<=r and x>=arr[l] and x<=arr[r]):
        if arr[pos]==x:
            return pos
        elif x>arr[pos]:
            return interpolationsearch(arr,pos+1,r,x)
        else:
            return interpolationsearch(arr,l,pos-1,x)
    else:
        return -1
    
arr=[1,4,6,7,8,10]
n=len(arr)
r=n-1
x=80
p=interpolationsearch(arr,0,r,x)
if(p!=-1):
    print("pos",p)
else:
    print("not found")
        
