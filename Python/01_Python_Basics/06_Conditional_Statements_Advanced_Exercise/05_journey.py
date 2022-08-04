budget = float(input())
season = str(input())

destination = ""
holiday_type = ""
expenses = 0

if budget <= 100:
    destination = 'Bulgaria'
    if season == 'summer':
        holiday_type = "Camp"
        expenses = 0.3 * budget
    else: # season == 'winter'
        holiday_type = "Hotel"
        expenses = 0.7 * budget
elif budget <= 1000:
    destination = 'Balkans'
    if season == 'summer':
        holiday_type = "Camp"
        expenses = 0.4 * budget
    else:
        holiday_type = "Hotel"
        expenses = 0.8 * budget
else: # more than 1000lv
    destination = 'Europe'
    holiday_type = "Hotel"
    expenses = 0.9 * budget

print(f"Somewhere in {destination}")
print(f"{holiday_type} - {expenses:.2f}")