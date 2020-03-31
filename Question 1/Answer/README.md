**Question 1 :**
**The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.**
**Find the sum of all the primes below two million.**

*Solution*
Execution:
Execute on Python 3.7
Can be executed using any IDE for Python. PyCharm, Jupyter, Spyder etc.

Inputs:
No external file for input is required.

Method:
1. Initialize Maximum number limit for total prime numbers.
2. Initialize a list from 0 to 2 Million.
3. Initialize it as all False(i.e. 0).
4. Initialize sum to 2.
6. Remove possible multiple of 2 and assigning to 1.
7. Remove 1 from primes list by assigning to 1.
8. Now iterate a while loop till sqrt(2 million) as all non-primes above it have already been crossed out by lower primes.
      8.1 if iterator is assigned to 0 in the list: number. It's prime.
      8.2 Initialize i to iterator * 3 (Because Min. Case: 3*3 )
      8.3 Remove all multiples of iterator by assigning to 1 and in iterative steps of 2*iterator. Because even multiples have already been removed.

9. Sum all primes. That is number list assigned to 0.
10. Print Sum.

Output:
It is generated automatically on Run Dialog within the IDE (i.e. Print statement is used).
No external file for output is required.
