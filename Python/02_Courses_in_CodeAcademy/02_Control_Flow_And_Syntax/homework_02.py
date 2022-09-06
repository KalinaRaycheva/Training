import math
import re
from sys import flags
from turtle import pd
from settings.testing import INPUT_DIR


# Finish the function by adding code that would extract the students data from the file.
# We only need valid students_data, i.e. from filled rows.
def get_students_data():
    with open('students_data.csv', 'r') as file:
        reader = pd.read_csv(file)
        print(reader)


# This function is not working, can you fix it?
def get_sqrt(number):
    return math.sqrt(number)


# 1. Read the students_data.csv
# 2. Collect the students data
# 3. Return the top 3 students, ranked by current result.
def get_top_three_students():
    pass


# Ask for user's data: First name, age and VIP status.
# If user's age is under 18, do not allow user to proceed
# If user's age is between 18 - 25, allow them to stay up to 11pm
# If group 18_25 has more than 10 users, do not allow user to enter.
# If user is aged over 25, welcome them without any additional conditions.
# As an output print out the users count from each group, and also print the VIPs
# Example input: (Georgi 28, VIP) OR (Alex 25)
def set_entry_checker():
    pass


# Finish the function by adding code that would print out only the even numbers.
# another way - return list(filter(lambda x: (x % 2 == 0), array))
def get_even_numbers(array):
    return ', '.join(str(num) for num in array if num % 2 == 0)


# Ask for user's password.
# Check user's password against the following conditions:
# At least 6 symbols, and maximum of 32 symbols.
# At least 1 upper case letter.
# At least 1 symbol.
# hint: use the re library.
def get_is_password_valid():
    password = input("Enter your password: ")
    if not re.findall(r'^[a-zA-Z0-9~!@#$%^&*()_+=`/-]{6,32}$', password):
        get_is_password_valid()
    else:
        print("Accept!")
        return password
