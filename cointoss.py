import random
import sys
num=input("Enter the number of times you want to run it:")
heads=0
tails=0
prog=5.0
status=0.0
num=int(num)
for i in range(0,num):
	toss=random.randint(0,1)
	if toss == 0:
		
		heads=heads+1
	else:
		
		tails=tails+1
	if i==0:
		print ("[",end='',flush=True),
	if i == int(status):
		print ("=",end='',flush=True),
		status= prog/100.0 * num
		prog=prog +5
	if i==num-1:
		print ("]",flush=True)
print ("Number of heads:",heads)
print ("Number of tails:",tails)
per=0.0
per=float(heads)/num*100
print ("Percentage of heads:",round(per,2))
per=float(tails)/num*100
print ("Percentage of tails:",round(per,2))
