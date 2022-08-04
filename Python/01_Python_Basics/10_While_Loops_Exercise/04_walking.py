total_steps = 0
steps_home = 0

while total_steps < 10000:
    line = input()
    if line == "Going home":
        steps_home = int(input())
        total_steps += steps_home
        break
    else:
        total_steps += int(line)


if total_steps >= 10000:
    print()
else:
    print()
