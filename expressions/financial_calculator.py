# Adelle Ponczoch, Financial Calculator Python

# Write a print statement telling the user what the program is (budget calculator)
print("Welcome to my program! This will be able to tell you your monthly spending amount on different expenses as well as their total percentage cost of your monthly income.")
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
# Calculate spending money income - ( rent+ utilities+ groceries+ transportation+ savings) (variable)
spending = income-(rent+ utilities+ groceries+ transportation+ savings)
# Calculate percent of rent (rent/ income) (variable)
percent_rent = rent/ income
# Calculate percent of utilities (utilities/ income) (variable)
percent_utilites = utilities/ income
# Calculate percent of groceries (groceries/ income) (variable)
percent_groceries = groceries/ income
# Calculate percent of transportation (transportation/ income) (variable)
percent_transportation = transportation/ income
# Calculate percent of spending (spending/income) (variable)
percent_spending = spending/income
# tell user category spending amount AND percent for rent("You spend $XX.XX on rent and that is XX% of your income.") (print)
print("Each month you spend rent on rent, which is percent_rent of your monthly income.")
# tell user category spending amount AND percent for utilities ("You spend $XX.XX on utilities and that is XX% of your income.") (print)
print("Each month you spend utilities on utilities, which is percent_utilities of your monthly income.")
# tell user category spending amount AND percent for groceries ("You spend $XX.XX on groceries and that is XX% of your income.") (print)
print("Each month you spend groceries on groceries, which is percent_groceries of your monthly income.")
# tell user category spending amount AND percent for transportation ("You spend $XX.XX on transportation and that is XX% of your income.") (print)
print("Each month you spend transportation on transportation, which is percent_transportation of your monthly income.")
# tell user category spending amount AND percent for spending ("You spend $XX.XX on spending and that is XX% of your income.") (print)
print("Each month you spend spending on spending, which is percent_spending of your monthly income.")
# tell user category spending amount AND percent for savings ("You spend $XX.XX on savings and that is 10% of your income.") (print)
print("Each month you spend savings on savings, which is percent_savings of your monthly income.")