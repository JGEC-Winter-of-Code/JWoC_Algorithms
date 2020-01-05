# shell sort using python by ankit raj

def shell_sort(array):
    n = len(array)
    gap = n // 2
    
    while gap > 0:
        for i in range(gap, n):
            temp = array[i]
            j = i
            while j >= gap and array[j - gap] > temp:
                array[j] = array[j -gap]
                j -= gap
            array[j] = temp
        gap //= 2
        
n = int(input('enter size of an array'))
array = input('Ener the elements of array ').split()
array = [int(x) for x in array]
insertion_sort(array)
print('Sorted list: ', end = '')
print(array)
