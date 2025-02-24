#jasper holt, conditinals notes .py
name=input("what is your name")
#What puts something inside of the “if” statement?
if name=="jasper":
    print("hi jasper")
else:#<-- this happens if condition is false
    print(f"lello{name}")
#(  )white space/ the TAB

#What do if statements do?
#check a condition and if it is true it will do a thing
if name=="jasper": #<---- this is the condition
    print("hi jasper")#<-- whaat it does if true

#What are boolean statements? 
# the part of your conditinal that is eather true or false
if name=="jasper":#<--- this is a boolean statment
    print("hi jasper")
else:#<-- this happens if condition is false
    print(f"lello{name}")

#What do else statements do?

if name=="jasper":#<--- this is a boolean statment
    print("hi jasper")
else:# if the boolean is false the else stament happens
    print(f"lello{name}")

#5.What kind of statement do you use if you have more than 2 needed outcomes?
# computers read things from top to bottom, check the least liky things first
num=int(input("how many cookies are there"))
if num==0:#<-- if always satarts the conditional
    print("there are none.")
elif num==1:
    print("there is one")
elif num<4:#<-- anyhting inbetween id elif
    print("there is a couple")
else :#<-- els always ends the conditinal
    print("there are many")

#6.What do each of the different symbols mean in conditionals?

#< less than
#> greater than
#<= less than or eqal to
#>= greateerthan or equal to
#== equal to
#===*doesent exist in python
#! not
#7.What are the 3 logical operators?
if num<10 and num >5:#ND BOTH BOOLEANS MUST BE TRUE
    print('this is a big single diget number')
elif num<10 or num >5:# or means one must be true
    print('this is a big single diget number')
elif not num<10:#checking to se if statment is false
    print('this is not a big single diget number')
#8.What are logical operators for?
#making our statments more complex

#What does a nested conditional statement do?
if num<10:
    if num==8:
        print("this prints at lest 8")
    else:
    print("the numberis less than 8")
#How do you write an if statement in C?

#How do you write else statements in C?

#How do you write elif/ else if statements in C?

#How do you write the 3 logical operators in C?\
