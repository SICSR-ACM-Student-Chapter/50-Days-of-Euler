from math import *
# Initialize Maximum number limit for total prime numbers.
M = 2000001

# Initialize a list from 0 to 2 Million.
# Initialize it as all False(i.e. 0).
number = [0] * M

# Initialize iterator to 3.
iter = 3

# Initialize sum to 2.
sum = 2

# Remove possible multiple of 2 and assigning to 1.
for i in range(0,M,2):
    number[i] = 1

# Remove 1 from primes list by assigning to 1.
number[1]=1

#Now iterate a while loop till sqrt(2 million) as
# all non-primes above it have already been crossed
# out by lower primes.

while iter <= floor(sqrt(M))+1:
    if number[iter] == 0:    #It's prime.
        # Initialize i to iterator*3
        # (Because Min. Case: 3*3 )
        i = iter*3

        while i < M:
            number[i] = 1
            i += 2*iter
    iter += 2
    #Remove all multiples of iterator by assigning
    #to 1 and in iterative steps of 2*iterator.
    #Because even multiples have already been removed.

#Sum all primes. That is number list assigned to 0.
for i in range(len(number)):
    if number[i] == 0:
        sum += i
print(sum)