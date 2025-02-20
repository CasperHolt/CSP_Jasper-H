#jasper holt, finachle calc update .py

def info(cost, income, type):
    percent= cost/income*100
    print(f"your {type} is ${cost:.2f} wich is {percent}% of your income\n")

#make a print statment that welcomes and tell the user what this program does
print ("Hello there this is yuor financial calculator, pleas fill out the folowing inforaition and we will help you as best we can\n")
#ask what income is (varible that should be an input)
income = float(input("What is your income: \n"))

#ask what their rent is (varible that should be an input)
rent = float(input("how much rent do you pay each month: \n"))
#ask what their utilities is (varible that should be an input)
utilt= float(input("how much do you spend on utilities each month:\n"))
#ask what their grosries is (varible that should be an input)
groce=float(input("how much do you spend on groceries each month:\n"))
#ask what their transportaition is (varible that should be an input)
trans=float(input("how much do you spend on transportation;\n"))
#calculate savings as 10% of income ( income *.1) (variable)
save = income *.1
#calculate spending as income -savings-rent-utilites-grosreies-transport(varible)
spend= income - save - rent - utilt - groce- trans


info(rent, income, "rent")
info(utilt, income, "utilities")
info(groce, income, "grocries")
info(trans, income, "trans")
info(save, income, "savings")
info(spend, income, "spending")
