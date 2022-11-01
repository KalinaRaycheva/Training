import os
from random import randint
from settings.testing import BASE_DIR

INPUT_DIR = os.path.join(BASE_DIR, "test_files", "input")


def get_file_info(beginning_of_student_year):
    with open(os.path.join(INPUT_DIR, "students_exams.csv"), "r") as data_file:
        data_file.__next__()

        for row in data_file:
            row = row.strip().split(",")
            beginning_of_student_year.setdefault(row[0], {})[row[1]] = int(row[2])


def fill_students_info(beginning_of_student_year, end_of_student_year):
    for learner in beginning_of_student_year.keys():
        end_of_student_year[learner] = {
            "passed exams": {},
            "failed exams": {},
            "average score": "",
        }


def retake_exam():
    needed_points = 80
    exam_tries = 3
    exam_score = 0
    min_points = 40
    max_points = 80

    for _ in range(exam_tries):
        exam_score = randint(min_points, max_points)
        if exam_score >= needed_points:
            return exam_score
    return exam_score


def make_exams(beginning_of_student_year):
    needed_points = 80
    for student, exams in beginning_of_student_year.items():
        for curr_exam, curr_score in exams.items():
            average_score = sum(exams.values()) / len(exams)

            if average_score < needed_points and curr_score < needed_points:
                score = retake_exam()
                beginning_of_student_year[student][curr_exam] = score

            if average_score >= needed_points:
                break


def fill_data_after_exams(beginning_of_student_year, end_of_student_year):
    needed_points = 80
    for current_student, final_exam in beginning_of_student_year.items():
        for curr_exam, curr_score in final_exam.items():
            if curr_score >= needed_points:
                end_of_student_year[current_student]["passed exams"] |= {
                    curr_exam: curr_score
                }
            else:
                end_of_student_year[current_student]["failed exams"] |= {
                    curr_exam: curr_score
                }

        average_score = sum(final_exam.values()) / len(final_exam)
        end_of_student_year[current_student]["average score"] = average_score


def display_passed_students(end_of_student_year):
    print("------------ Students who PASSED their exams ------------\n ")
    needed_points = 80
    for key, value in end_of_student_year.items():
        if value['average score'] >= needed_points:
            print(f"{key} - average score {value['average score']}")


def display_not_passed_students(end_of_student_year):
    print("\n------- Students who have NOT PASSED their exams -------\n")
    needed_points = 80
    for key, value in end_of_student_year.items():
        if value['average score'] < needed_points:
            print(f"{key} - average score {value['average score']}")


students = {}
end_students = {}
get_file_info(students)
fill_students_info(students, end_students)
make_exams(students)
fill_data_after_exams(students, end_students)
display_passed_students(end_students)
display_not_passed_students(end_students)