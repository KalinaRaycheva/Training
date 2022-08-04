hours = int(input())
minutes = int(input())
minutes += 15

if minutes > 59:
    hours = hours + 1
    minutes = minutes - 60
    if 0 <= minutes < 10:
        minutes = "0" + str(minutes)
    if hours > 23:
        hours = hours - 24
    print(str(hours) + ":" + str(minutes))
else:
    print(str(hours) + ":" + str(minutes))