# Adelle Ponczoch, Time of Day in Python

import time
current = time.time()
local_time = time.localtime(current)
hour = local_time.tm_hour

if hour >= 12 and hour < 19:
    print("Good afternoon!")
elif hour >=19:
    print("Good evening!")
else:
    print("Good morning!")