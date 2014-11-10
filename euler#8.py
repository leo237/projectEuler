t = input()

while(t):
	n = raw_input()
	# n,k = inp.split()
	n = int(n)
	# k = int(k)
	numb = raw_input()
	maxProd = 0
	
	for i in xrange((n-k)):
		checkProd = 1
		for j in xrange(i,(i+k)):
			checkProd *= int(numb[j])
		
		if checkProd > maxProd:
			maxProd = checkProd
			
	print maxProd
			
	t-=1