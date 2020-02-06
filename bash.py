import os

a=os.popen('ps -a | grep -e bash').read()

no=a.count('bash')

if no==0:
	print "You are in Parent Bash"
else:
	print "You are in child bash and current Child bash is -> \n",no
