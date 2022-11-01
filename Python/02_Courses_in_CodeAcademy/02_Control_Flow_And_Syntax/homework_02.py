import csv
import math
import os.path
import re
from sys import flags


def get_students_data():
    with open(os.path.join(INPUT_DIR, 'students_data.csv'), 'r') as source:
        reader = csv.reader(source)


# This function is not working, can you fix it?
def get_sqrt(number):
    return math.sqrt(number)

 # read data from csv file and return dictionary 
 def read_file(file_name): 
     with open(file_name) as file: 
         next(file) 
         reader = csv.reader(file) 
         data_base = {} 
         for item in reader: 
             student, exam, points = item 
             if student in data_base: 
                 data_base[student][int(exam)] = int(points) 
             else: 
                 data_base[student] = {int(exam): int(points)} 
         file.close() 
         return data_base 
 
 
 # retake a single exam max up to three times 
 def retake_exam(expected_result, max_points, allowed_times_to_be_retaken=3): 
     grade = 0 
     counter = 0 
     for i in range(0, allowed_times_to_be_retaken): 
         grade = random.choice(range(1, max_points+1)) 
         counter += 1 
         if grade >= expected_result: 
             return grade, counter 
     return grade, counter 
 
 
 def check_if_passed(student_grades, number_of_exams, expected_result): 
     if sum(student_grades) / number_of_exams >= expected_result: 
         return True 
     else: 
         return False 
 
 
 def print_passed_students(students: dict, number_of_exams=10, expected_result=80): 
     print('Passed students are:') 
     for student in students: 
         if students[student]['final points'] / number_of_exams >= expected_result: 
             print(f'{student} Points {students[student]["final points"]}') 
 
 
 def print_failed_students(students: dict, number_of_exams=10, expected_result=80): 
     print('Failed students are:') 
     for student in students: 
         if not students[student]['final points'] / number_of_exams >= expected_result: 
             print(f'{student} Points {students[student]["final points"]}') 
 
 
 def sort_students_by_points_descending(students: dict): 
     sorted_students = sorted(students.items(), key=lambda x: x[1]['final points'], reverse=True) 
     return dict(sorted_students) 
 
 
 # retake all failed exams 
 def make_exams(exams: dict, student, expected_result, max_points): 
     for exam in exams: 
         if exams[exam] >= expected_result: 
             continue 
         else: 
             exams[exam], counter = retake_exam(expected_result, max_points) 
             print(f'{student} retake exam {exam} {counter} times') 
             if check_if_passed(exams.values(), len(exams), expected_result): 
                 break 
 
 
 # starts session, returns students in descending order 
 def session(students: dict, number_of_exams=10, expected_result=80, max_points=100): 
     for student in students: 
         if check_if_passed(students[student].values(), number_of_exams, expected_result): 
             students[student].update({"final points": sum(students[student].values())}) 
             continue 
         else: 
             make_exams(students[student], student, expected_result, max_points) 
             students[student].update({"final points": sum(students[student].values())}) 
     return sort_students_by_points_descending(data_base) 


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
    if 6 < password or password > 32:
        get_is_password_valid()
    elif not re.search(r'[A-Z]', password):
        get_is_password_valid()
    elif not re.search(r'[~!@#$%^&\*()_+=-`]'):
        get_is_password_valid()
    else:
        return password
