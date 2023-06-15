#!/usr/bin/python3

prod = []
pal = []
for a in range(100, 1000):
    for b in range(100, 1000):
        prod += [a * b]

for n in prod:
    temp=n
    rev=0
    while(n>0):
        dig=n%10
        rev=rev*10+dig
        n=n//10
    if(temp==rev):
        pal += [temp]

print(max(pal))
