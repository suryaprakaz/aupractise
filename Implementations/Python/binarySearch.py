#This implementation needs improvisation
def binarySearch(A,n,x):
	p = 0
	r = n-1 
	while p<=r:
		q = (p+r) / 2
		if A[q] == x:
			return q
		elif A[q]> x:
			r = q - 1
		elif A[q]< x:
			p = q + 1	
	return "NOT FOUND"

if __name__ == "__main__":
	n = int(raw_input("Enter number of books: "))
	x = raw_input("Enter author name: ")
	print "Enter the sorted author list: "
	A = []
	for i in range(n):
		A.append(raw_input())
	q = binarySearch(A,n,x)
	if type(q) == int:
		print "The book you are looking for is in slot number: ", q+1
	else:
		print q
