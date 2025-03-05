#jasper holt, loops note

#What is a loop? 
# a section of code tjhta repeats multipile times
#What are the two types of loops?
#for loop
nums=[12,3,66,7,3,3,2]
for num in nums:
    print(num)

#while loop
x=0
while x < 10:
    print(x)
    x+=1
#What is iteration
#one specific instace of the loop
#itteraition is the amout of times thta you are looping through
#What are lists? 
#a group of many things that are relayted/ a varible that stores multil values
nums=[1,2,3,4,5,6,7,6]
names=["Joe","Jim","Vincent"]
print(nums)#prints all the list
print(names[0])
names[0]="Josiphine"
names.pop(1)
names.insert(1,"Jasper")
names.insert(2,{"joe","jamison","jack"})
print(names)#prints all the list

#How do you make lists in python? 
#step one brackets ste[p two correct data types finaly cama betewn wach item
#How do you make for loops in python? 
for name in names:
    print(name)

for x in range(1,6, 2):
    print (x)
#How do you make while loops in python?
import random
x= 1 #varivble to keep count ogf iteraition
goose= random.randint(1,20)
while x<= 20:
    if x== goose:
        print ("goose")
        break
else:
    print ("duck")
    print("duck")
    x+=1

