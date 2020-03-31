from math import *
M=2000000
number = [0] * M
iter = 3
sum = 2
for i in range(0,M,2):
    number[i] = 1
number[1]=1
while iter <= floor(sqrt(M))+1:
    if number[iter] == 0:
        i = iter*3
        while i < M:
            number[i] = 1
            i += 2*iter
    iter += 2

for i in range(len(number)):
    if number[i] == 0:
        sum += i
print(sum)