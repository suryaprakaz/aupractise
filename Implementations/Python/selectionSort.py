#This is an implementation of the selection sort algorithm. Time complexity: O(n^2). Poor execution time. Better if more array swapping is required
def sSort(A,n):
    for i in range(0,n-1):
        smallest = i
        for j in range(i+1,n):
            if A[j]<A[smallest]:
                smallest = j
        A[i],A[smallest]=A[smallest],A[i]
    print "The sorted list is",A
if __name__ == "__main__":
    n = int(raw_input("No of elements: "))
    A = []
    for i in range(n):
        A.append(raw_input("Author-->"))
    sSort(A,n)
