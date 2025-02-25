# Adelle Ponczoch, Conditional Notes Python

#print("Hello, welcome to my program that will sort you into a category.")

#name = input("What is your name: \n")

#if name == "Vienna":
    #print("Oh you're the teacher. . . never mind.")
#else:
    #print("You are a student. Welcome to class.")

#num = 2

# they will only take the first condition downward that is true. Start with if, end with else, anything in between is an elif. (There can be as many elifs as we want.) The top conditon should be the least likely.

#if num ==1:
    #print("You have asked for an item.")
#elif num <= 3:
    #print("You have asked for a couple of the item.")
#elif num <= 5:
    #print("You have asked for a few of the item. . . or you are in the south and have asked for a couple.")
#else:
    #print("You have asked for some of the item.")

#num = int(input("How many would you like: (give me a number above zero)\n"))

# they will only take the first condition downward that is true. Start with if, end with else, anything in between is an elif. (There can be as many elifs as we want.) The top conditon should be the least likely.

#if num ==1:
    #print("You have asked for an item.")
#elif num <= 3:
    #print("You have asked for a couple of the item.")
#elif num <= 5:
    #print("You have asked for a few of the item. . . or you are in the south and have asked for a couple.")
#else:
    #print("You have asked for some of the item.")

#name = "Katie"

#if "a" in name:
    #print("Your name has the letter A!")
#else:
    #print("your name doesn't have an A.")

#name = "Katie"

#if "a" in name or "e" in name or "i" in name or "o" in name or "u" in name:
    #print("Your name has a vowel.")
#else:
    #print("Your name doesn't have a vowel.")

#name = "Katie"

#if "a" not in name:
    #print("your name doesn't have an A.")
#else:
    #print("Your name has the letter A!")

num = 3

if num > 5 and num < 10:
    if num == 7:
        print(f"{num} is an unlucky number!")
    else:
        print(f"{num} is a large single digit number.")
else:
    if num == 4:
        print(f"{num} is the best number!")
    else:
        if num >= 10:
            print(f"{num} is not a single digit number.")
        else:
            print(f"{num} is a small number.")

