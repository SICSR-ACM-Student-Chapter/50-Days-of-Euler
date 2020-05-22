## Question 2
The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
**Find the thirteen adjacent digits in the 1000-digit number that have the greatest product.**
**What is the value of this product?**

*Solution*
Execution:
Execute on Python 3.7
Can be executed using any IDE for Python. PyCharm, Jupyter, Spyder etc.

Inputs:
No external file for input is required.

Method:
1. Convert 1000 digit number to integer list p[].
2. Find all indexes containing zero in list z[].
3. Make an list of all indexes that shouldn't be used in product r[].
4. Removing duplicates if any in list r[].
5. Iterate till 1000-13.
   5.1 If in array r[] don't count product.
   5.2 Else find product by multiplying next 12 arrays.
6. Sort product list and print highest product.

Output:
It is generated automatically on Run Dialog within the IDE (i.e. Print statement is used).
No external file for output is required.
