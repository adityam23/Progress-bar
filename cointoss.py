import random
num=input("Enter the number of times you want to run it:")
heads=0
tails=0
num=int(num)
for i in range(0,num):
	toss=random.randint(0,1)
	if toss == 0:
		print "It is a heads!"
		heads=heads+1
	else:
		print "It is a tails!"
		tails=tails+1
print "Number of heads:%d"% heads
print "Number of tails:%d"% tails
per=0.0
per=float(heads)/num*100
print "Percentage of heads:%.2f"% per
per=float(tails)/num*100
print "Percentage of tails:%.2f"% per
