days = int(input())
bakers = int(input())
cakes = int(input())
waffles = int(input())
pancakes = int(input())

cake_price = 45
waffle_price = 5.8
pancake_price = 3.2

profit = (cakes * cake_price + waffles * waffle_price + pancakes * pancake_price) * bakers * days
expenses = 1/8 * profit

print(profit - expenses)