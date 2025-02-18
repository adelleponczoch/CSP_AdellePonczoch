# Adelle Ponczoch, Function Notes in Python

#function is an action stored in a keyword

#def add():
   # numOne = int(input("Give me a number:\n"))
   # numTwo = int(input("Give me a number:\n"))
   # print(numOne + numTwo)

#add()
#add()

#def add(numOne, numTwo): #parameters go in the parenthesis separated by commas
    
  #  print(numOne+numTwo)

#add(12,20)#arguments are given when the function is called AND must match the number of parameters
#add(2,4)
#add(7,21)
#number = int(input("Can I get a number:\n"))
#def add(numOne, numTwo): #parameters go in the parenthesis separated by commas
    
   # print(numOne+numTwo)

#add(int(input("Tell me a number:\n")), number)#arguments are given when the function is called AND must match the number of parameters
#add(2,4)
#add(7,21)

def user(word):
    return input(f"Tell me a {word}:\n")

name = user("name")
verb = user("verb")
place = user("place")
print(f"{name} was {verb} and somehow got to {place}")