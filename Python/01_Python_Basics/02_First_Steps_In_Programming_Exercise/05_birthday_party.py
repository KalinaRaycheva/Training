rent_price = int(input())

cake_price = 0.2 * rent_price
drinks_price = cake_price - 0.45 * cake_price # or 0.55 * cake_price
animator_price = 1/3 * rent_price
budget = rent_price + cake_price + drinks_price + animator_price

print(budget)
