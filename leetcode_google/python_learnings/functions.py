#immuatble variables - numbers, string - in the function scope (only inside the function , not outside)
from operator import mul
from re import M, sub


num =20 #local variable cannot be operated inside as the function variable, modified but not accessible out side the function
def multiply(n):
    n *= 20
    num = n
    print(num)

multiply(100)
print("after function execution and outside it ", num) # gives 20 as not affected outside the method scope

#mutable varuavles - list (gets updated value outside the method scope too)
my_list = [10,20,30,40]
def multiply(list1):
    list1[0] *= 10
    list1[1] *=20
    list1[2] *=30
    list1[3] *=40
    return list1

print(multiply(my_list))
print("after the method execution, outside the method scope " ,my_list)

#IN-BUILT functions 

#string functions - substring find(), replace(str, str1), join(list), upper(), lower(), format(str)
str1 = "Life is beautiful. Thankyou Bappa !"
print(str1.find("beautiful"), str1.find("s", 0, 10))
print(str1.replace("!", "Grateful"), "hello world".replace("hello","Welcome"))
name = "Srushti"
list1 = ['a','b','c']
print(">>".join(list1)) #join each element of list with >>
print(name.upper(), name.lower())
print("Welcome {} to {}!".format(name, "Universe"))
print(str1.strip().split(" ")) #retruns a list with splited values of the string

#type conversions
num = 123
name , name2= "Srushti Hembade", "12345"
flag = True
flt_val = 123.56

print(int(flag),int(flt_val), int(name2)) #not for string with letters
print(float(num),float(flag), float(name2))
print(str(num) + "yu", str(flag), str(flt_val), str(name))
print(ord('a'), ord('2')) #unicode of any char only (number or letter)
print(bool(num),bool(0),bool(""), bool(name), bool(name2), bool(flt_val),bool(flag))
#false for empty string and num as 0 (int and float)

#in-built arithematic functions - sum(), mul(), min(), max()
print(sum(my_list), mul(my_list, 10)) #mul is to duplicate the values in the list for 10 times
print(max(my_list), min(my_list))

#lamba functions
