#Insertion sort in decreasing order

def insertionSort(a):
    for i in range(1,len(a)):
        key = a[i]
        j = i-1
        while(j>=0 and a[j] < key):
            a[j+1] = a[j]
            j=j-1
        a[j+1] = key

arr = [5,2,4,6,1,3]
insertionSort(arr)
print "Sorted array is : "

for i in range(len(arr)):
    print "%d" %arr[i]