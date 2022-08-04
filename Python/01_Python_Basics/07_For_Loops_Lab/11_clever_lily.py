age = int(input())
washing_machine_price = float(input())
toy_price = int(input())

birthday_money = 0
saved_money = 0
toys_count = 0


for i in range(1, age + 1):
    if i % 2 == 0 or i == 2:
        birthday_money += 10
        saved_money += birthday_money - 1
    else:
        toys_count += 1

toys_money = toy_price * toys_count
saved_money += toys_money

if saved_money >= washing_machine_price:
    print(f"Yes! {(saved_money - washing_machine_price):.2f}")
else:
    print(f"No! {(washing_machine_price - saved_money):.2f}")
