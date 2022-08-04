money_needed = float(input())
current_money = float(input())
days = 0
spending_count = 0

while True:
    action = input() # 'spend' or 'save'
    saved_spent_sum = float(input())
    days += 1

    if action == "spend":
        if saved_spent_sum >= current_money:
            current_money = 0
        else:
            current_money -= saved_spent_sum
        spending_count += 1

    elif action == "save":
        current_money += saved_spent_sum
        spending_count = 0

    if spending_count >= 5:
        print("You can't save the money.")
        print(f"{days}")
        break

    if current_money >= money_needed:
        print(f"You saved the money for {days} days.")
        break
