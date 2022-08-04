change = float(input())

# 200, 100, 50, 20, 10, 5, 2, 1
change_coins = int(change * 100) # to convert into coins
coin_count = 0

while change_coins > 0:
    if change_coins >= 200:
        coin_count += 1
        change_coins -= 200
    elif change_coins >= 100:
        coin_count += 1
        change_coins -= 100
    elif change_coins >= 50:
        coin_count += 1
        change_coins -= 50
    elif change_coins >= 20:
        coin_count += 1
        change_coins -= 20
    elif change_coins >= 10:
        coin_count += 1
        change_coins -= 10
    elif change_coins >= 5:
        coin_count += 1
        change_coins -= 5
    elif change_coins >= 2:
        coin_count += 1
        change_coins -= 2
    elif change_coins >= 1:
        coin_count += 1
        change_coins -= 1

print(coin_count)
