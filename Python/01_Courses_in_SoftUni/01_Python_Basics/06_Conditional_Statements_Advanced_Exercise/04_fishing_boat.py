budget = int(input())
season = input()
fishermen = int(input())

price = 0

if season == "Spring":
    price = 3000
    if fishermen <= 6:
        price -= price * 0.1
    elif 7 <= fishermen <= 11:
        price -= price * 0.15
    elif fishermen > 12:
        price -= price * 0.25
elif season == "Autumn" or season == "Summer":
    price = 4200
    if fishermen <= 6:
        price -= price * 0.1
    elif 7 <= fishermen <= 11:
        price -= price * 0.15
    elif fishermen > 12:
        price -= price * 0.25
elif season == "Winter":
    price = 2600
    if fishermen <= 6:
        price -= price * 0.1
    elif 7 <= fishermen <= 11:
        price -= price * 0.15
    elif fishermen > 12:
        price -= price * 0.25

if fishermen % 2 == 0 and not season == "Autumn":
    price -= price * 0.05

if budget >= price:
    print(f"Yes! You have {(budget - price):.2f} leva left.")
else:
    print(f"Not enough money! You need {(price - budget):.2f} leva.")