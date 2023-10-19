
def markRow(matrix, n, m, i):
    # set all non-zero elements as -1 in the row i:
    for j in range(m):
        if matrix[i][j] != 0:
            matrix[i][j] = -1

def markCol(matrix, n, m, j):
    # set all non-zero elements as -1 in the col j:
    for i in range(n):
        if matrix[i][j] != 0:
            matrix[i][j] = -1

def zeroMatrix(matrix, n, m):
    # Set -1 for rows and cols
    # that contains 0. Don't mark any 0 as -1:
    for i in range(n):
        for j in range(m):#
            if matrix[i][j] == 0:
                markRow(matrix, n, m, i)
                markCol(matrix, n, m, j)
    
    # Finally, mark all -1 as 0:
    for i in range(n):
        for j in range(m):
            if matrix[i][j] == -1:
                matrix[i][j] = 0
    
    return matrix


if __name__ == "__main__":
	matrix = [[1, 1, 1], [1, 0, 1], [1, 1, 1]]
	n = len(matrix)
	m = len(matrix[0])
	ans = zeroMatrix(matrix, n, m)

	print("The Final matrix is:")
	for row in ans:
	    for ele in row:
	        print(ele, end=" ")
	    #print()


"""
 Draw the flowchart for the following and code the subsequent problems
    sum of two ints
    a>b? : eligible to vote
    avg of three nums
    odd or even?
    check if a no. is -ve +ve or 0
    valid triangle or not: sum two sides is greater than others

Loops ka bhi flowchart, coz why not?!
    print 1 to n
    print even/odd numbers in a range(start from 2 and go on printing the subsequent 2 numbers, but can we use '%' )
    sum nunms in a range
    prime or not?


 CRACKING THE CODING INTERVIEW
"""
