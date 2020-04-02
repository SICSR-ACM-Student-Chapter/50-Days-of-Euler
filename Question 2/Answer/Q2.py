# Name: Kumar Ashwin
# Email: krashwin00@gmail.com
# Date: 31st March, 2020
# Version: v1
# Problem Statement: Find the thirteen adjacent digits in the 1000-digit number (File Included) that have the greatest product. What is the value of this product?

CONSEC_DIG = 13

file=open("Q2_help_file.txt","r")

data=file.read()
data=data.replace(" ","")
data=data.replace("\n","")
data=list(data)

def product(i):
    pro=1
    for i in range(i,i+CONSEC_DIG):
        pro=pro*int(data[i])
    return pro

# List Comprehension and find the max value in the list
products=[product(i) for i in range(1000-CONSEC_DIG)]
print("Required Result: ",max(products))

file.close()