film_budget = float(input())
stats_number = int(input())
equipment_price = float(input())

decor = film_budget * 0.1
total_equipment_cost = equipment_price * stats_number

if stats_number > 150:
    total_equipment_cost = total_equipment_cost - total_equipment_cost * 0.1

if decor + total_equipment_cost > film_budget:
    print("Not enough money!")
    print(f"Wingard needs {(decor + total_equipment_cost) - film_budget:.2f} leva more.")
elif decor + total_equipment_cost <= film_budget:
    print("Action!")
    print(f"Wingard starts filming with {film_budget - (decor + total_equipment_cost):.2f} leva left.")