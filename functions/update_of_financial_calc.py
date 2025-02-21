# Adelle Ponczoch, Update of Financial Calculator Python

print("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.\n")

def info(income, amount, type):
    percent_type = (amount/ income) *100
    print(f"Each month you spend ${amount:.2f} on {type}, which is {percent_type:.2f}% of your monthly income.")

def user(type):
    return float (input (f"What is your monthly cost of {type}?\n"))

income = user("income")
rent = user("rent")
utilities = user("utilities")
groceries = user("groceries")
transportation = user("transportation")
savings = income* 0.1

info(income, rent, "rent")
info(income, utilities, "utilities")
info(income, groceries, "groceries")
info(income, transportation, "transportation")
