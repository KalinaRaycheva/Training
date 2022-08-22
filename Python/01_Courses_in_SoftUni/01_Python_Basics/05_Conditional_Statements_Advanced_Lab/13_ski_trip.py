days = int(input())
room_type = input()
feedback = input()

nights = days - 1
price = 0

if room_type == "room for one person":
    price = 18 * nights
elif room_type == "apartment":
    price = 25 * nights
    if days < 10:
        price = price - (price * 0.3) # price -= price * 0.3
    elif 10 <= days <= 15:
        price -= price * 0.35
    elif days > 15:
        price -= price * 0.5
elif room_type == "president apartment":
    price = 35 * nights
    if days < 10:
        price -= price * 0.1
    elif 10 <= days <= 15:
        price -= price * 0.15
    elif days > 15:
        price -= price * 0.2


if feedback == 'positive':
    price += price * 0.25
elif feedback == 'negative':
    price -= price * 0.1

print(f"{price:.2f}")