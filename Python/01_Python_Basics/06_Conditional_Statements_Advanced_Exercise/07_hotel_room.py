month = input()
nights = int(input())

apartment_cost = 0
studio_cost = 0

if month == "May" or month == "October":
    studio_cost = 50 * nights
    apartment_cost = 65 * nights
    if 7 < nights <= 14:
        studio_cost = studio_cost - (studio_cost * 0.05)
    elif nights > 14:
        studio_cost = studio_cost - (studio_cost * 0.3)
        apartment_cost = apartment_cost - (apartment_cost * 0.1)
elif month == "June" or month == "September":
    studio_cost = 75.20 * nights
    apartment_cost = 68.70 * nights
    if nights > 14:
        studio_cost = studio_cost - (studio_cost * 0.2)
        apartment_cost = apartment_cost - (apartment_cost * 0.1)
elif month == "July" or month == "August":
    studio_cost = 76 * nights
    apartment_cost = 77 * nights
    if nights > 14:
        apartment_cost = apartment_cost - (apartment_cost * 0.1)

print(f"Apartment: {apartment_cost:.2f} lv.")
print(f"Studio: {studio_cost:.2f} lv.")
