
def insSort(A,n):
	print "The sorting is done as follows:"
	for i in range(1,n):
		j = i - 1
		key = A[i]
		while j>=0 and A[j]>key:
			A[j+1] = A[j]
			j = j - 1
		A[j+1] = key
	print A



if __name__ == "__main__":
	N = int(raw_input("\nEnter the number of books: "))
	A = []
	print "\nEnter author names \n"
	for i in range(N):
		A.append(raw_input())
	insSort(A,N)	
