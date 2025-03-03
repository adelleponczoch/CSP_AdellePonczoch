# Adelle Ponczoch, Loop Notes in Python

# Adelle Ponzoch, Loops Notes in Python

# What is a loop? 
    # a section of code that is going to repeat
# What are the two types of loops?
    #while loop
x = 0
while x < 10:
    print("Hello", x)
    x +=1

    #for loop
nums = [3,5,7,2,8]
for num in nums:
    print(num)
# What is iteration
    #when you do something multiple times, the act of repeating (version)

# What are lists? 
    #a bunch of values in the same variable
siblings = ["Alex", "Katie", "Andrew", "Vienna", "Tori", "Treyson", "Jeff", "Hailey"]
#print one item from the list
print(siblings[3])
#change an item in a list
siblings[7] = "Jake"

#remove item in list
siblings.pop(5)
print(siblings)
#proper list printing with a for loop
num = 1
for sibling in siblings:
    print(f"{num}. {sibling} LaRose")
    num +=1

# How do you make lists in python? 
    #you make a variable, do brackets and put commas in between list items

# How do you make for loops in python? 
for num in range(1,11, 2):
    print(num)
# How do you make while loops in python?
num = 1

while num <21:
    print(num)
    num += 1

import random

num = 1
rand = random.randint(1,20)
while num < 21:
    if num == rand:
        print(f"Goose!")
        break # Tells the loop to end once the conditon is met
    else:
        print("Duck")
    num += 1

# Continue tells the loop to stop that particular round of the loop