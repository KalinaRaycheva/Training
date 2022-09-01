import string
import random
from datetime import date


#Use if elif else construction to print the verbose version of weekday.
def print_day_of_week():
    today = date.today()
    weekday = today.weekday()
    
    if weekday == 0:
        print('Monday')
    elif weekday == 1:
        print('Tuesday')
    elif weekday == 2:
        print('Wednesday')
    elif weekday == 3:
        print('Thursday')
    elif weekday == 4:
        print('Friday')
    elif weekday == 5:
        print('Saturday')
    elif weekday == 6:
        print('Sunday')
  
        
# Should fill and return the products list 
# Add (number ** 2 - 1) to products if number > 5 and is odd
def get_products():
    products = []
    
    for number in range(1, random.randint(100, 1000)):
        if number > 5 and number % 2:
            products.append(number ** 2 - 1)
    return products


# Using while loop, fill the string_els with 100 random
# selected letters from the english alphabet
# Return the string_els as string.
def get_random_string_old():
    string_els = []
    
    for i in range(100):
        string_els.append(random.choice(string.ascii_letters))
    return ', '.join(string_els)


#better way
def get_random_string():
    return ', '.join(random.choices(string.ascii_letters, k = 100))


# Use a for loop to iterate over the range_obj
# Use if statement to print out only even members
# Stop printing out if you have printed 50 members
def print_even_members():
    range_from = random.randint(1, random.choice([100, 200, 300, 400]))
    range_to = range_from + 100
    range_obj = range(range_from, range_to)
    counter = 0

    for num in range_obj:
        if counter > 50:
            break
        elif num % 2 == 0:
            print(num)
            counter += 1
