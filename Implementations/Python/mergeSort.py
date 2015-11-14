

def merge(A,p,q,r):
	B = A[p:q+1] + ["zzzz"]
	C = A[q+1:r+1] + ["zzzz"]
 	i = 0 
	j = 0
	for k in range(p,r+1):
		if B[i] <= C[j]:
			A[k] = B[i]
			i = i + 1
		elif B[i] > C[j]:
			A[k] = C[j]
			j = j + 1


def mergeSort(A,p,r):
	if p>=r:
		return
	elif p<r:
		q = (p + r) / 2
		mergeSort(A,p,q)
		mergeSort(A,q+1,r)
		merge(A,p,q,r)


if __name__ == "__main__":
	N = int(raw_input("Enter the number of books: "))
	global A
	A = []
	print "Enter the author list: "
	for i in range(N):
		A.append(raw_input())
	mergeSort(A,0,N-1)		
	print "The sorted list is: "
	print A
