import sys 

def partition(arr,low,high): 
	i = ( low-1 )		 # index of smaller element 
	pivot = arr[high]	 # pivot 

	for j in range(low , high): 

		# If current element is smaller than the pivot 
		if arr[j] < pivot: 
		
			# increment index of smaller element 
			i = i+1
			arr[i],arr[j] = arr[j],arr[i] 
    #swapping values
	arr[i+1],arr[high] = arr[high],arr[i+1] 
	return ( i+1 ) 



# Function to do Quick sort 
def quickSort(arr,low,high): 
	if low < high: 

		# pi is partitioning index, arr[p] is now 
		# at right place 
		pi = partition(arr,low,high) 

		
		quickSort(arr, low, pi-1) 
		quickSort(arr, pi+1, high) 

# Driver code to test above 
print("These programs sorts array using QUICK SORT \n")
print("Time complexity in best case is O(n*logn) and in worst case is O(n^2) \n")
print("Do you want to take array as input :-\n ")
print("press - 1 (for YES) else press any no. : ")
x = int(input())
if x==1:
    print("Enter array : ")
    A = [int(x) for x in input().split()]
else :
    A = [23 , 54 , 76 , 98 , 102 , 12 , 37]

n = len(A) 
quickSort(A,0,n-1) 
print ("Sorted array is : ") 
for i in range(n): 
	print ("%d" %A[i] ,end=" "), 

