vacation_price = float(input())
puzzles_number = int(input())
dolls_number = int(input())
bears_number = int(input())
minions_number = int(input())
trucks_number = int(input())

toys = puzzles_number + dolls_number + bears_number + minions_number + trucks_number
total_profit = puzzles_number * 2.6 + dolls_number * 3 + bears_number * 4.1 + minions_number * 8.2 + trucks_number * 2

if toys >= 50:
    total_profit -= total_profit * 0.25
    total_profit = total_profit - total_profit * 0.1
    if total_profit >= vacation_price:
        print("Yes! " + str(total_profit - vacation_price) + " lv left.")
    else:
        print("Not enough money! " + str(round(vacation_price - total_profit, 2)) + " lv needed")
else:
    total_profit = total_profit - total_profit * 0.1
    if total_profit > vacation_price:
        print("Yes! " + str(total_profit - vacation_price) + " lv left.")
    else:
        print("Not enough money! " + str(round(vacation_price - total_profit, 2)) + " lv needed")
