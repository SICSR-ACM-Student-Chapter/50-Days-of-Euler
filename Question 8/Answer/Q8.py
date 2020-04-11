# Himani Dalal

def sum_of_digits(num):
	sum = 0
	while(num > 0):
  	    rem = num % 10
        sum += rem
        num //= 10
    return sum

number = 2 ** 1000  # 2 power 1000
result = sum_of_digits(number)
#print(num)
print("Sum of the digits of 2**1000 is ",result)
