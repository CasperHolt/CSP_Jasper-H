#jasper holt, finachle calc update .py

def info(cost, income, type):
    percent= cost/income*100
    print(f"you spend ${cost:.2f} on {type} wich is {percent}% of your income\n")

def ask(change):
     return float(input(f"how much do you spend on {change} each month  \n"))

#make a print statment that welcomes and tell the user what this program does
print ("Hello there this is yuor financial calculator, pleas fill out the folowing inforaition and we will help you as best we can\n")
#ask what income is (varible that should be an input)
income = float(input("What is your income: \n"))

rent=ask("rent")
utilt=ask("utilities")
groce=ask("groceries")
trans=ask("transportaitioin")

#calculate savings as 10% of income ( income *.1) (variable)
save = income *.1
#calculate spending as income -savings-rent-utilites-grosreies-transport(varible)
spend= income - save - rent - utilt - groce- trans


info(rent, income, "rent")
info(utilt, income, "utilities")
info(groce, income, "grocries")
info(trans, income, "transportaition")
info(save, income, "savings")
info(spend, income, "spending")
