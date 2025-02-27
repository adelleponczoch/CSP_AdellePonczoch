# Adelle Ponczoch, How to get the time of day

import time

#print(time.gmtime(0)) #first instance of time in programming
#print(time.time()) #current time in seconds since gmtime
current = time.time()

now = time.ctime(current)#current time as we are used to seeing it
print(now)

local_time = time.localtime(current)
#minutes = local_time.tm_min
#print(minutes)
hour = local_time.tm_hour #get just the hour
print(hour)