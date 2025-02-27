#jasper holt, Hot to get time of day
import time

#first inscance of time
first_time= time.gmtime()
#print(first_time)

#curent time in seconds
curent= time.time()
#print(curent)#seconds since jan 1 1970

#curen time and like we see it nomaly

now= time.ctime(curent)
#print(now)

#get just a part of the time
local_time=time.localtime(curent)
day= local_time.tm_wday
hour=local_time.tm_hour#military time (0-23)
if hour==12:
    print("good evening")