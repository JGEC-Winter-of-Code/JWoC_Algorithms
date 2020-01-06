
def search(arr, x): 
  
    for i in range(len(arr)): 
  
        if arr[i] == x: 
            return i 
  
    return -1

print("Enter the size of the array")
n= int(input())

arr = []
for i in range(n):
    z=int(input())
    arr.append(z)    

print("Enter the number to search")
x= int(input())

a = search(arr,x)

if a != -1:
    print("Element is present at position",a)
else:
    print("Element not present")
