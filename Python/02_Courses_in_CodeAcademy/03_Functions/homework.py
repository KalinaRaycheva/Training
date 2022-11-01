from datetime import date


# 1. Write a function that would return if given int is within a certain range
def is_number_in_range(x, start, end):
    return x in range(start, end + 1)


print(is_number_in_range(21, 1, 10))
print()


# 2. Write a Python function to create and print a list where the values are square of numbers
# between 1 and 30 (both included)
def squares_between_1_and_30():
    squares = [x**2 for x in range(1, 31)]
    print(*squares)


squares_between_1_and_30()
print()


# Decorators
# 3. Write a decorator that would be used on a function that return a number. If today is wednesday,
# friday, or sunday, the function should return the number decreased byt 1.5.
def decrement_base_on_day(func):
    def wrapped_func(*args):
        func_result = func(*args)
        today = date.today()
        if today.isoweekday() in [3, 5, 7]:
            return func_result - 1.5
        return func_result
    return wrapped_func


@decrement_base_on_day
def get_number(n):
    return n


print(get_number(10))
print()


# 4. Write decorator login_required that would be used to check if a user is logged, and if not,
# it should print out "Login required", and if user is logged, the decorated function should print
# "Welcome"
# For user you can use {'name': 'User name', 'logged': True / False}
def login_required(func):
    def wrapped_func(user):
        if user["logged"]:
            print(f"Welcome {user['name']}")
            return func(user)
        else:
            print("Login required")
            return func(user)
    return wrapped_func


@login_required
def check_emails(user):
    print(f"Checking of user {user['name']} finish.")


check_emails({"name": "Kalina Raicheva", "logged": True})
print()


# 5. Write a decorator that prints out "Mary Spring" whenever the decorated function is called.
def marry_spring(func):
    def wrapper_func():
        print("Marry Spring")
        return func()

    return wrapper_func


@marry_spring
def some_function():
    print("After Marry Spring")


some_function()
print()

# 6. def print_matrix(matrix, indent=0):
    for el in matrix:
        if isinstance(el, list):
            print()
            print_matrix(el, indent + 4)
        else:
            print(" " * indent, el, end="")
            indent = max(indent - 4, 4)
    print()


print_matrix([
    [1, 2, [3, 4, [6]]],
    [[], [], [3, 4, 5]],
])


# 7. def get_min_of_three_members(x, y, z):
    def _min_of_two_numbers(a, b):
        return a if a < b else b

    return _min_of_two_numbers(x, _min_of_two_numbers(y, z))


print(get_min_of_three_members(5, 89, 2))


# 8. def reverse_string(string):
    return "".join([string[i] for i in range(len(string) - 1, -1, -1)])


print(reverse_string("CodeAcademy helps motivated men to become techs."))
