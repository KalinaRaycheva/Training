n = int(input()) # jury number of people
all_grades = 0
presentation_count = 0

presentation_name = input()
while presentation_name != "Finish":
    average_grade = 0
    presentation_count += 1

    for i in range(n):
        grade = float(input())
        average_grade += grade
        all_grades += grade

    print(f"{presentation_name} - {average_grade / n:. 2f}.")

    presentation_name = input()

print(f"Student's final assessment is {all_grades / (n * presentation_count):.2f}.")