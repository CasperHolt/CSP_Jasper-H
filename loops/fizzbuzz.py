#jasper holt, fizzbuzz python
x=1
while x < 51:
    if x%3==0 and x%5==0:
        print("fizzBuzz")
    elif x%3==0:
        print("fizz")
    elif x%5==0:
        print("Buzz")
    else:
        print(x)
    x+=1 