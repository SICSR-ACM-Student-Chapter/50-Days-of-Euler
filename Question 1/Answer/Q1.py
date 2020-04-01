def is_Prime(n):
    if n < 2:
        print("Not a prime number")
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

sumofprimes = 0
for i in range(2,2000000):
    if is_Prime(i):
        #print(i)
        sumofprimes += i

print('Sum of primes below 2 million is ', sumofprimes)
