#An implementation of Linear Search algorithm as described in Algorithms Unlocked
#Author: Surya Prakash

def lSearch(A,n,x):
	answer = "NOT FOUND"
	for i in range(n):
		if A[i] == x:
			answer = i
			return "x found at index "+str(answer)
	return answer

if __name__ == "__main__":
	#Get the inputs: Array(A), Element to find (x), number of elements (n)
	A = [int(i) for i in raw_input("A: ").split()]
	n = int(raw_input("n: "))
	x = int(raw_input("x: "))
	#Call the search function and print the return value
	print 	lSearch(A,n,x)

