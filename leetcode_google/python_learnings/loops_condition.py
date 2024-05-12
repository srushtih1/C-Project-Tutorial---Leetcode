#if , if-else, if-elif-else
num = 30
if num>10:
    print("Greater than 10")
else:
    print("Less than 10")

price = 100
if(price>=300):
    price *= 1 - 0.3
    print(price)
elif(price>=200):
    price *= 1 - 0.2
    print(price)
elif(price>=100):
    price*= 1-0.1
    print(price)
else:
    print("No discount")
    print(price)

output = "Greater" if price>100 else "Less" #can add \ to continue ont he next line
print(output)

#loops - for and while - traverse over lists, tuples and set
list_num = [12,59,89,45]
for i in list_num:
    print(i, end=" ")

for i in range(0,len(list_num)):
    print(list_num[i], end=" ")

for i in range(0,len(list_num),2):
    print(list_num[i],end=" ")

#reverse traverse
for i in range(len(list_num)-1,0,-1):
    print(list_num[i],end=" ")

for idx,num in enumerate(list_num):
    print(idx, " " , num)

#tell odd or even number for a range of numbers
for i in range(0,20):
    if i%2==0: print(i,"even") 
    else: print(i, "odd")

#while loop - when no fixed loop range, runs while condition is true
#getting the power of num until its value is 1000
num, power = 2, 1
val = num
while val<=1000:
    power+=1
    val*= num
print("Power= " ,power)

#sum of first and last digit of a number
sum_dig = 2673748
first = sum_dig
last = sum_dig%10
print(last)
while first >=10:
    first //= 10
    print(first)
print("Sum = " ,first+last)

#fibonnaci series- using user input
def fibo():
    a,b =0,1
    count=2
    num = int(input("Give the number for fibonacci series- "))
    if(num<1): return -1
    elif(num==1): return a
    elif(num==2): return b
    else:
        while count<num:
            fibo_n = a+b
            a=b
            b=fibo_n
            count+=1
        return fibo_n

fibo_output = fibo()
print(fibo_output)       

#can use recursion - calling the same function inside it
def fibo_recur(series):
    if series < 1: return -1
    elif series == 1: return 0
    elif series ==2: return 1
    else: 
        output = fibo_recur(series-1) + fibo_recur(series-2)
        return output 

num = int(input("Fibo num for recursive call - "))
fibo_recur_op = fibo_recur(num)
print("Recursive fib output - " , fibo_recur_op)

#nested loops
#get the list items whose sum is 50 with its consecutive number only
list_add = [25,25,40,10,20,12,100]
new_list = []
total = 50
for idx,num in enumerate(list_add):
    if total - num <0 : continue
    if(list_add[idx] + list_add[idx+1] == total):
        new_list.append(num)
    else:
        print("Not total")
print(new_list)

# with each other number in the list - sum is equal to total
for num in list_add:
    for num2 in list_add:
        if(num+num2 == total):
            print("pair found - " ,num, num2)

#break (stop a loop if output is found) , continue (skip some steps in loop) and pass (just to execute for ahead code to run) keywords
for num in list_add:
    for num2 in list_add:
        if(num+num2 == total):
            print("pair found - " ,num, num2)
            break
        else: continue
    pass
