deposit = float(input())
duration = int(input())
interest_rate = float(input())

total_sum = float(deposit + duration * ((deposit * (interest_rate/100)) / 12))

print(total_sum)

