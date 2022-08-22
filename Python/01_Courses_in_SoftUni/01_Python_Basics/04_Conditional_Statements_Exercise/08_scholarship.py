import math
income = float(input())
average_grade = float(input())
minimum_wage = float(input())

social_scholarship = 0
excellence_scholarship = 0

if income < minimum_wage and average_grade > 4.5:
    social_scholarship = math.floor(minimum_wage * 0.35)
    if average_grade >= 5.5:
        excellence_scholarship = math.floor(average_grade * 25)
        if social_scholarship == excellence_scholarship:
            print(f"You get a scholarship for excellent results {excellence_scholarship} BGN")
        else:
            if social_scholarship > excellence_scholarship:
                print(f"You get a Social scholarship {social_scholarship} BGN")
            else:
                print(f"You get a scholarship for excellent results {excellence_scholarship} BGN")
    else:
        print(f"You get a Social scholarship {social_scholarship} BGN")
elif average_grade >= 5.5:
    excellence_scholarship = math.floor(average_grade * 25)
    print(f"You get a scholarship for excellent results {excellence_scholarship} BGN")
else:
    print("You cannot get a scholarship!")
