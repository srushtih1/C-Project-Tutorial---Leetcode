#basics of python
print(10, 20.5, "Hello world")
print("Hello" , end=" ") 
print("world")

#data types and variables
var1 = 10
var2=10.3 
var3="Hello Srushti!"
flag = True
complex_num = complex(10,20)
print(var1,var2,var3,flag,complex_num)

#strings functions and access (cannot mutate the string char)
str = "words and letters"
print("Length of the string - ", len(str))
print("access - ", str[0], str[-1], str[-7], str[len(str)-1])
print("id of the str variable before change of value - " ,id(str))
str="words only"
print("id of the str variable after change of value - " ,id(str))
str2 = None #no value, no empty, no 0 , no false
print(str2, type(str2))

#string clicing, substrings, reverse string
str3 = "words and sentences"
print(str3[2:8]) #nornal with start and end index
print(str3[0:6:2]) #with step to skip char, by default step is 1
print(str3[:4]) # by default from start
print(str3[3:]) #by default till end
print(str3[7:1:-1]) #reverse traverse
print(str3[::-1]) #reverse whole string
print(str3[-3:-8:-1]) #using reverse index
print(str3[-4:1:-1]) #gives empty string if add [4:-2:-1]
print(str3[4:-2:2])

#string formating , string in string, int in string , float in string
str_s = "Hello %s in the class!" % "Srushti"
str_i = "Got got %i in math class!" % 50
str_f = "Attendance in class is %.2f" % (98.50689) #.2f for 2 decimal points only
print(str_s, str_i, str_f)
str_sum = "%i + %i" % (10,20)
print(str_sum)
var10=20.45
print("helloz frnds - %f " % var10)

#string operations
print("haha" * 3)
print("python" + "easy")
sentence = "all are variables"
print("all" in sentence)
print('a' < 'b') #char has unicode so compare the values
print("hello" >= 'zebra') 

#different operators- arithematic, comparison, assignment, logical,bitwise, 
# +,-,*,/,%,//(modulus)- gives int value of float divide quotient
a,b = 100 ,-50
print(a+b, a-b, a*b, a/b, a%b, a//b)

# <,>, ==, <=,>=, !=, is, is not --> output is always bool (==, != is for value check) (is and is not is for exact object check)
num2 , num3 = 10, 20
print(num2 is num3)
print(num2 is not num3)
print(num2==num3, num2!=num3, num2>num3, a<=b, a>=b, a>b)

# = , +=, -=, *=, /=, //=, %=, <<=,>>=, ^=, &=, |=
num2^=num3
print(num2)
num2|=num3
print(num2)
num2&=num3
print(num2)
num2<<=num3
print(num2)
num2>>=num3
print(num2)
num2+=num3
print(num2)
num2-=num3
print(num2)
num2*=num3
print(num2)
num2/=num3
print(num2)
num2%=num3
print(num2)
num2//=num3
print(num2)

# or, and , not - used with bool (True and false have bit values 1 and 0)
mybol = True or False
print(mybol)
mybol = True and False
print(mybol)
mybol = not False
print(mybol)
print("int with bool value - " ,mybol * 10)

# | (add the bit values), & (multiple bit values), ^ (add the bit values), << (add 0 to rigth), >> (add 0 to left), ~ (negate)
a,b = 10, 30
print(bin(a), bin(b))
print(bin(a|b), bin(a&b), bin(a^b), bin(a<<b), bin(a>>b), bin(~a))

# group all variables in one - collection --> List (use len(), slicing and access same as string)
list_all = [10,40.6,True,"hello"]
print(list_all, list_all[1], len(list_all), type(list_all))
print(list_all[-1], list_all[0:2], list_all[0::2],list_all[::-1], list_all[:1:-1])
list1, list2=[10,20], [10,20]
print(list1 is list2, list1 is not list2)