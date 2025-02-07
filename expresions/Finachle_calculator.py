#Jasper holt, Finanachle acalcualtor

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
#calculate percent income of rent (rent/income*100) (variable)
perc_rent= rent/income*100
#calculate percent income of utlities (utilities/income*100) (variable)
perc_utilt= utilt/income*100
#calculate percent income of grocries (grocries/income*100) (variable)
perc_groce= groce/income*100
#calculate percent income of transportaition (transportaition/income*100) (variable)
perc_trans= trans/income*100
#calculate percent income of spending (spending/income*100) (variable)
perc_spend= spend/income*100
#your rent is $xx.xx which is xx5 of your income. (print)
print ("your rent is $",rent,"wich is",perc_rent,"percent of your income")
#your utilities is $xx.xx which is xx5 of your income. (print)
print ("your utilities are $",utilt, "wich is",perc_utilt,"percent ofyour income")
#your grocries is $xx.xx which is xx5 of your income. (print)
print ("your groceries are $",groce,"wich is",perc_groce,"percent of you income")
#your transportaition is $xx.xx which is xx5 of your income. (print)
print ()
#your saveins is $xx.xx which is xx5 of your income. (print)

#your spendings is $xx.xx which is xx5 of your income. (print)