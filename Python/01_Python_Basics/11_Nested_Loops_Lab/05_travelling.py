total_saved_sum = 0

while True:
    destination = input()
    if destination == "End":
        break
    min_budget = int(input())

    while total_saved_sum < min_budget:
        saved_sum = int(input())
        total_saved_sum += saved_sum

    print(f"Going to {destination}!")
    total_saved_sum = 0
