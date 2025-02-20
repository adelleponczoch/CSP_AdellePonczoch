# Adelle Ponczoch, Update of Financial Calculator Python

def info(income, amount, type):
    percent_type = (amount/ income) *100
    print(f"Each month you spend ${amount:.2f} on {type}, which is {percent_type:.2f}% of your monthly income.")

def user(income, amount, type):
    income = float (input ("What is your monthly {amount}?\n"))

# Write a print statement telling the user what the program is (budget calculator)
print("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n")
# Ask for monthly income (user input)
income = float (input("What is your monthly income?\n"))
# Ask for rent amount (user input)
rent = float (input("What is your monthly rent?\n"))
# Ask for utilities expenses (user input)
utilities = float (input("What is your monthly utilities cost?\n"))
# Ask for groceries expenses (user input)
groceries = float (input("What is your monthly grocery cost?\n"))
# Ask for transportation expenses (user input)
transportation = float (input("What is your monthly transportation cost?\n"))
# Calculate savings as 10% of income (variable)
savings = income* 0.1

info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")