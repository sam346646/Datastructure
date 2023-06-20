from datetime import datetime
import os
import random
import numpy as np

#Single line comment
"""Multi
line 
comment  '''also works'''
"""
os.system('cls')      #Clearing the screen (import os)
help(round)





print("hello world")
print('Hello world')
num=10
num1=int(11.5)
print("Number is %d"%num)
print("Number is %5f"%num)
print("Number is",num1,"number")
print("Number is"+" even")
#without end it will be printed in next line
print("hello world",end=" ")
print("Hi how are you")
print("hi","how are you")

a=10
#n=input("Enter number ")
#n=input("Enter number {} is".format(a))
#n=raw_input("Enter number")-previous version




print("\n\t INTEGER")
print("----------------------------------------")
a=10
#Below one also works,both are same
a=int(10) 
b=int("2")       
print("\na:",a," b:",b)
print("Type:",type(a))
print("No. of digits in character ",len(str((a))))





print("\n\t FLOAT")
print("----------------------------------------")
a=10.56644
#Below one also works,both are same
a=float(10.56644)                    
print("\na:",a)
print("Type:   ",type(a))





print("\n\t Boolean")
print("-----------------------------------------")
print("1.Evaluation of condition true or false")
print(10>9)
print(10==9)
print("2.If condition")
a=10
b=15
if a>b:
    print("a>b")
elif a==b:
    print("a==b")
else:
    print("a<b")
print("3.bool()")
print(bool("hi"),bool(10),bool(["apple","banana"]))
print(bool(""),bool(0),bool([]),bool(()),bool(None),bool(False))





print("\n\t STRING")
print("-----------------------------------------")
a="sam"
#Below one also works,both are same
a=str("sam hi") #Also works for 'sam hi'
print("\na:",a)
print("Length: ",len(a)) #includes space for length=6
print("Type:   ",type(a))
b="""hi hello everyone  
     how are you
     i am fine."""   #multiline string 
print(b)

print("\n\nFunctions:")
print("1.Fetching character by its index:",a[0])
print("2.Fetch each character using for: ")
for x in a:
    print(x,end=" ")
for x in "banana":
    print(x,end=" ")

print("\n3.Check the substring present in a string",end="\n")
print("sam" in a)     #(not in) also works
if "sam" in a:        
    print("yes")

print("4.Slicing string ")    #starts from 0,end character not included
a="busymangalore"
print("1. [1:5]",a[1:5])
print("2. [:3]",a[:3])
print("3. [3:]",a[3:])
print("4. [-4:-2]",a[-4:-2]) #starts from last -4,till -2 not included

a="Busymangalore"
print("5.Convert to uppercase: ",a.upper())

a="Busymangalore"
print("6.Convert to lowercase: ",a.lower())

a="    Busymangalore    "
print("7.Remove whitespaces from begining or end: ",a.strip())

a="Busymangalore"
print("8.Replace a character in a string: ",a.replace("B","r"))   #Case sensitive if exists more than one replaces all

a="Busy,mangalore"
print("9.Split string to substring: ",a.split(","))  #stores substring as list b=a.split(",")
 
print("10.Concatination of string: ")
a="Busy"
b="mangalore"
c=a+b
print("c: ",c)
c=a+" "+b
print("c: ",c)

print("11.Format string") #c="sam"+22 doesn't work
age=22
txt="I am {}"
print(txt.format(age))

age=22
a=23
txt="I am {} but {}"
print(txt.format(age,a))

a=22
b=23
c=24
txt="I am {2} after {0},{1}"
print(txt.format(a,b,c))

price=49
txt="The price is {:.2f} dollars"  #49.00
print(txt.format(price))

myorder= "I have a {carname}, it is a {model}."
print(myorder.format(carname = "Ford", model = "Mustang")) 

quantity=3
itemno=567
price=49
myorder="I want {0} pieces of item number {1} for {2:.2f} dollars."
print(myorder.format(quantity, itemno, price))

age=36
name="John"
txt="His name is {1}. {1} is {0} years old."
print(txt.format(age, name))




print("12.Escape characters ")   # \',\",\n,\t,\b-delete previous character,\f,\\,\r-delete previous character berfore to it.
print("I am \"ironman\"")

a="busymangalore"
print("13.find()",a.find("s")," ",a.find("mangalore")) #find(value,start,end)-start default 0
print("14.index()",a.index("s")," ",a.index("mangalore")) #similiar to find() but find() return -1 if not found,index() returns exception. index(value,start,end)-start default 0
print("15.isalnum()",a.isalnum()) #return True if string is alphanumeric. isalpha(),isdigit(),islower()
print("16.startswith()",a.startswith("b"))  #return True if string startswith b. endswith()





print("1.List: Collection of items ordered,changeable,allows duplicate items")
print("2.Tuple: Collection of items ordered,unchangeable,allows duplicate items")
print("3.Set: Collection of items unordered,unchangeable-(but can add and remove),unindexed,doesn't allows duplicate items")
print("4.Dictionary: () Collection of items ordered**-previous unordered(defined order),changeable,doesn't allows duplicate items")





print("\n\t LIST")
print("------------------------------------------")
a=["apple","mango","carrot","greenapple"]
#Below one also works,both are same
a=list(("apple","mango","carrot","greenapple"))
print("\na:",a)
print("Length:",len(a))
print("Type:",type(a))
print("1.Unpack list items into variable:")
w,x,y,z=a     #w,x,y*=a last 2 are stored in y as list
print(w)
print(x)
print(y)
print(z)
print("2.Access list items ",a[1]) #a[-1]-last item,a[-2],a[2:5]-from 2 to 4,a[4:],a[-4:-1] 
print("3.check item in the list ","apple" in a)
print("4.Add items to the list ")
a[2]="orange"
print("a[2]=\"orange\":",a)
a[1:3]=["grapes","musambi"]
print("a[1:3]=[\"grapes\",\"musambi\"]:",a)
a[1:3]=["orange","carrot","banana"]   #If we give extra i.e,instead 2 we gave 3 extra will be added by shifting next item
print("a[1:3]=[\"orange\",\"carrot\",\"banana\"]:",a)
a[1:3]=["grapes"]
print("a[1:3]=[\"grapes\"]:",a) #if we give less item remaining will be deleted i.e,2nd item
print("5.Insert at specified index using insert()")
a.insert(2,"guava")
print(a)
print("5.Insert at end using append()")
a.append("strawberry")
print(a)
print("5.Add items of one list to another using extend()") #we can do from one tuple to another list
b=["chikku"]
a.extend(b)
print(a)
print("6.Remove specified item using remove()")
a.remove("strawberry")
print(a)
print("6.Remove item from specified index using pop()")
a.pop(4)
print(a)
#del a[0],clear()-content are deleted,list will be there
a.reverse()
print("7.Sort in reverse order:",a)
a.sort()
print("8.Sort in ascending order:",a)
a.sort(reverse=True)
print("9.Sort in descending order:",a)
a.sort(key=str.lower)
print("10.Sort in ascending order with ignoring case:",a)
print("11.Copy list to empty list:")
b=a.copy()   #b=list(a) also works
print(b)
print("12.Copy list to another list")
c=["kiwi","badam"]
for i in c:
    a.append(i)
print(a)
    




print("\n\t TUPLE")
print("------------------------------------------")
a=("apple","mango","banana")
#Below one also works,both are same
a=tuple(("apple","mango","banana"))
print("\na:",a)
print("Length:",len(a))
print("Type:",type(a))
#same fuctions as list i.e, 1,2,3
# To add,delete,modify the tuple:1.convert to list, 2.perform modification, 3.convert to tuple
b=list(a)
b[0]="Apple"
a=tuple(b)

print("1.Joing tuples")
b=("tiger","lion")
c=a+b
print(c)

d=b*2
print(d)

print("2.Find index of item using index()",b.index("lion"))





print("\n\t SET")
print("------------------------------------------")
a={"apple","mango","banana"}
#Below one also works,both are same
a=set(("apple","mango","banana"))
print("\na:",a)
print("Length:",len(a))
print("Type:",type(a))
#same fuctions as list i.e, 1,2,3
print("1.Add item to the set")
a.add("guava")
for i in a:
    print(i,end=" ")

print("2.Add to another set ")
b={"cherry","greenapple"}
a.update(b)
print(a)
print("3.Add list or tuple to the set")
b=["grapes","chikku"]
a.update(b)

print("4.Union,Intersction,Symmetric_difference")
c=a.union(b)  #all duplicate not allowed
print(c)
a.update(b)
print(a)

c=a.intersection(b)  #common in both sets
print(c)
a.intersection_update(b)
print(a)

c=a.symmetric_difference(b) #other than common items in both sets
print(c)
a.symmetric_difference_update(b)
print(a)

c=a.difference(b)  #(a-b)items in a other than common item in both
print(c)

print("4.Delete the item in the set")
a={"mango","banana","apple"}
a.remove("mango")  #delets specified item,return error if doesn't exist
a.discard("banana") #delets specified item,doesn't return error if doesn't exist
a.pop() #delets last item and return it as string
a.clear() #Empties set 
del a #Also works,removes set completely



print("\n\t DICTIONARY")
print("------------------------------------------")
a={"name":"apple","color":"red","shape":"round"}
#Below one also works,both are same
a=dict(name="apple",color="red",shape="round")
print("\na:",a)
print("Length:",len(a))
print("Type:",type(a))

print("Neseted dictionary")
c={
    "p1":{
            "name":"sam",
            "age":22
         },
    "p2":{
            "name":"rakesh",
            "age":23
         }
  }
print(c)

print("1.Accessing dict items")
print(a["name"])
print(a.get("name"))
print(a.keys())  #key
print(a.items())  #key,value pair
print(a.values()) #value
for i in a:
    print(i,end=" ")   #only key
for i in a:
    print(a[i],end=" ")   #only values

print("2.Add key-value")
a["height"]=3
print(a)
a.update({"taste":"sweet"})

print(3 in a) #false
print("height" in a) #true

print("3.Change items")
a["height"]=4
a.update({"shape":"oval"})
print(a)

print("4.Copy dict")
b=a.copy()
b=dict(a)
print(b)

print("5.Delete item")
a.pop("taste") #removes specified key pair
a.popitem() #removes last inserted key-value pair
del a["shape"] #removes specified key pair
a.clear() #empties dict
del a #empties dict completely



print("\n\t RANGE")
print("------------------------------------------")
a=range(6)
print("\na:",a)
print("\nLength:",len(a))
print("Type:",type(a))

print("Fuctions :")
print("1.range(6):",end="")
for i in range(6):
    print(i,end=" ")

print("\n2.range(2,5):",end="")
for i in range(2,5):
    print(i,end=" ")

print("\n3.range(0,6,2):",end="")
for i in range(0,6,2):
    print(i,end=" ")

print("\n4.range(6):",end="")
for i in range(6):
    print(i,end=" ")

print("\n5.range(6):",end="")
for i in range(6):
    print(i,end=" ")





print("\n\n\t Operator")
print("------------------------------------------")
x=2
y=5
print(10+5)
print("x+y=",x+y)
print("x**y=",x**y) #x to the power y
print("x//y=",x//y) #integer division

x+=5
print("x+=5",x) #-=,*=,**=

print("x==y",x==y)  #!=,<,>,<=,>=

a="samhi"
print("sam in a","sam" in a) #not in

x=["sam","man"]
y=["sam","man"]
z=x
print("x is y",x is y) #return false because dif. object although content are same.  is not
print("x==y",x==y) #i.e, the dif. btw. == and is,not applicable for string
print("x is z",x is z) #returns true since same object.

x=10
print("x<3 and x>10",x<3 and x>10) #or,not-not(x<3 and x>10)





print("\n\t IF")
print("------------------------------------------")
a=30
b=20
c=10
if a>b:
    print("a>b")
elif a<b:
    print("a<b")
else:
    print("a==b")

print("Shorthand if")
if a>b: print("a>b") 

print("a>b") if a>b else print("a<b")

if a>b and a>c:                 #or
    print("a is greater")





print("\n\n\t While")
print("------------------------------------------")
i=0
while i < 10:
    i+=1
    if i == 1:
        continue
    print(i,end=" ")
    if i == 7:
        break
      #i++ doesn't work

print()
while i>0 :
    print(i,end=" ")
    i-=1
else:
    print("\ni is lesser than 0")  
  





print("\n\t FOR")
print("------------------------------------------")

a=["apple","guava","grapes"]

for i in a:                #string,list
    print(i,end=" ")

for i in range(len(a)):    #string,list
    print(a[i],end=" ")

print()                #string,list
[print(i) for i in a]

print() 
for i in range(len(a)):    #string,list 
    print(i,end=" ")

print() 
for i in "banana":
    print(i,end=" ")

print() 
b=[i for i in a if "g" in i]
print(b)

print() 
for i in "banana":
    if i=="b":
        continue
    if i=="n":
        break
    print(i,end=" ")

print("FOR using range()") 
for i in range(6):
    print(i,end=" ")

print() 
a="banana is good"
for i in range(len(a)):
    print(a[i],end="")

print()
for i in range(0,len(a)-2):
    print(a[i],end="")

print()
a=[0,1,2]
b=[4,5,6]
for x in a:
    for y in b:
        print(x," ",y)

for x in a:       #for without statement provides error to avoide use "pass"
    pass






print("\n\nGlobal:")
print("------------------------------------------")
def myfunc():
    global x    #can be accessed anywhere, we cant intialize like global x="hello"
    x="hello"
    print(x)
myfunc()
print(x,"world")





print("\n\nFetching Random number:")
print("------------------------------------------")
print(random.randrange(10))  #To fetch we have to import "import random" module 
print(random.randrange(10,15)) #giving range i.e, between 10 to 15.Above starts from 0





print("\n\nFUNCTION")
print("------------------------------------------")

#1.if we pass less or more than one argument gives error
def my_function(name):   #parameter,formal parmeter
    print("My name is",name)
my_function("sam")   #argument,actual parameter
my_function("steephan")

#2.
def my_function(name="sam"):
    print("My name is",name)
my_function()
my_function("steephan")
n="rakesh"
my_function(n)

#3.
def sum(a,b,c):
    s1=a+b+c
    return s1
s=sum(10,20,30)
print("sum=",s)
print("sum=",sum(20,40,60),end="\n")

#4.
print("Passing and Returning multiple argument")
def sum(a,b,c):
    s1=a+b
    s2=b+c
    s3=a+c
    return s1,s2,s3
s1,s2,s3=sum(10,20,30)
print("  sum1=",s1,"sum2=",s2,"sum3",s3,end="\n")

#5.
print("Assigning default value to argument")
def sum(a=50,b=10,c=20):
    s1=a+b
    s2=b+c
    s3=a+c
    return s1,s2,s3
s1,s2,s3=sum()
print("  sum1=",s1,"sum2=",s2,"sum3",s3,end="\n")
s1,s2,s3=sum(10,20,30)
print("  sum1=",s1,"sum2=",s2,"sum3",s3,end="\n")
s1,s2,s3=sum(b=10,a=20,c=30)
print("  sum1=",s1,"sum2=",s2,"sum3",s3,end="\n")

#6.
print("Returning built-in function")
def round_two(a):
    return round(a,2)
print("  ",round_two(3.14142),end="\n")

#7.
print("Returning Boolean value")
def is_even(n):
    return (n % 2) == 0
print("  Is 100 even?", is_even(100))
print("  Is -1 even?", is_even(-1))

#8.
print("Arbitary arguments,*args- if the passing argument are unknown ")
def my_function(*name):
    print(name[2])
my_function("sam","steephan","rakesh")

def my_function1(*name):
    for i in range(len(name)):
        print(name[i])
my_function1("sam","steephan","rakesh")

#9.
print("arbitary keyword arguments **args- if the no. of passing keyword argument are unknown")
def my_function3(**name):
    print(name["lname"])  #must reside inside " "
my_function3(fname="sam",lname="manasseh")

#10.
def my_function4():
    pass #without statement we have to mention pass

#11.
print("Lambda function") #small ananymous function takes one or more argument but has only one expression
x=lambda a,b:a*b

print(x(1,2))

def lambda_ilu(n):
    return lambda a:a*n

s=lambda_ilu(10)
print(s(5))







print("\n\nMath functions")
print("------------------------------------------")
a=float(10.56644)  
print("Fuctions :")
print("1.round():",round(a,2))
print(" 1.1-round(10321,-1):",round(10321,-1))
print(" 1.1-round(10321,-2):",round(10321,-2))
print(" 1.1-round(10321,-3):",round(10321,-3))
print("2.int():",int(a))
print("3.Combining two functions:",min(abs(10),abs(-11)))
#import math   
#math.max()
#max(1,3)=3, min(1,3)=1, abs(-1.72)=1.72, pow(2,3)=8, sqrt(4)=2, ceil(1.43)=2, floor(1.43)=1
#math.pi=3.1415...,  





print("\n\nClasses and Object")
print("------------------------------------------")
#1.Class definition
class myclass:
    x=5

#2.Creating object for a class
c1=myclass()

#3.accesing class membersthrough object
print(c1.x)

#4.__init__()
class person:
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname

p1=person("sam","manasseh")
print(p1.fname)

#5.Member function
class employee:
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname
    
    def putdata(self):
        print("Employee name is",self.fname,self.lname)

e1=employee("sam","manasseh")
e1.putdata()

#5.
e1.lname="man" #modify object properties
e1.putdata()

del e1.lname #delete object properties

del e1 #delete object

class myperson:
    pass    #class can't be empty gives error,sp place pass
        

#inheritance
class employee:           #parent class
    def __init__(self,fname,lname):
        self.fname=fname
        self.lname=lname
    
    def putdata(self):
        print("Employee name is",self.fname,self.lname)

class worker(employee):   #child class
    pass

w1=worker("kiran","sharma")
w1.putdata()






print("\n\nDate and time")
print("------------------------------------------")
x=datetime.now()
print(x,y)






#For filehandling refer w3schools
#f=open("1python_im.py","r")-r,w,x,a







#NUMPY-list are slow so we have to use array which is faster which is included in numpy
arr=np.array([1,2,3,4,5])
print(arr)
n=list(map(int,input("Enter elemnts ").strip().split()))
print(n);
