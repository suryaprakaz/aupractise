#Author: suryaprakaz
#Email: suryaprakaz@hotmail.com
#This program is an implementation of the sentinel search algorithm as presented in the book Algorithms Unlocked by Thomas Cormen
#This program takes a list of numbers as its input. It searches and returns if the element we are looking for is present in the list
#It differs from simple Linear search in that it eliminates the initial checking (i<=n) by replacing it with a simple element check and increment of the control variable
#This algorithm finds the first element that it comes across which matches the element we are looking for and returns it

def sentinelSearch(A,n,x):
	last_element = A[n-1]	#Put the last element of the array temporarily in a variable
	A[n-1] = x		#Put the value we are searching for in the last element in the array
	i = 0			#Initialise control variable
	while A[i] != x:	#Start the loop. Keep running the loop till the control statement is satisfied
		i = i + 1	#Increment the control variable to find where the item is located
	A[n-1] = last_element
	if i<n or (A[n-1] == x):
		return i 
	else:
		return "NOT FOUND"
	
if __name__ == "__main__":
	A = [int(i) for i in raw_input("A: ").split()]
	n = int(raw_input("n: "))
	x = int(raw_input("x: "))
	print sentinelSearch(A,n,x)
	
