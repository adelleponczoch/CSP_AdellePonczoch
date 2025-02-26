# Adelle Ponczoch, Old Enough Python

print("Welcome to my program. This will tell you if you are old enough to vote, drive, get a learner's permit and go to school.")
age = input("Please tell me your age: \n")

if age >= 15:
    if age == 15:
        print(f"Congratulations! As a {age} year old you can get your learners permit and be in school, but you cannot get your driver's liscense or vote.")
    elif age >= 16:
        print(f"Congratulations! As a {age} year old you can get your driver's liscense, or learners permit if you haven't gotten that yet. You can attend school, but cannot vote.")
    elif age >= 18:
        print(f"Congratulations! As a {age} year old you can vote, get your learner's permit or driver's liscense if you haven't attained them, and attend school.")
    else:
        print(f"Wow! You are {age} and can attend school, even if it's just preschool or kindergarten. However, you cannot vote, get your learner's permit or drive.")
else:
    print("You are not born yet.")
