tabs_count = int(input())
salary = int(input())
fines = 0

for i in range(tabs_count):
    website = input()
    if website == "Facebook":
        fines += 150
        if salary - fines <= 0:
            print("You have lost your salary.")
            break
    elif website == "Instagram":
        fines += 100
        if salary - fines <= 0:
            print("You have lost your salary.")
            break
    elif website == "Reddit":
        fines += 50
        if salary - fines <= 0:
            print("You have lost your salary.")
            break

if salary - fines > 0:
    print(f"{salary - fines}")