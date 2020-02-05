import os

a=os.popen('netstat -a').read()
#popen() creates a pipe b/w calling program and executed program 
#It passes the command to host env. so that a coomand processor can exe. it.
#read file form address where it was made

print(a)
