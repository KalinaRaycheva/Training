points = int(input())
bonus_points = 0

if points <= 100:
    if points % 2 == 0:
        bonus_points = 5 + 1
        print(bonus_points)
        print(points + bonus_points)
    elif points % 10 == 5:
        bonus_points = 5 + 2
        print(bonus_points)
        print(points + bonus_points)
    else:
        bonus_points = 5
        print(bonus_points)
        print(points + bonus_points)
        
elif 100 < points <= 1000:
    if points % 2 == 0:
        bonus_points = (0.2 * points) + 1
        print(bonus_points)
        print(points + bonus_points)
    elif points % 10 == 5:
        bonus_points = (0.2 * points) + 2
        print(bonus_points)
        print(points + bonus_points)
    else:
        bonus_points = 0.2 * points
        print(bonus_points)
        print(points + bonus_points)
        
elif points > 1000:
    if points % 2 == 0:
        bonus_points = (0.1 * points) + 1
        print(bonus_points)
        print(points + bonus_points)
    elif points % 10 == 5:
        bonus_points = (0.1 * points) + 2
        print(bonus_points)
        print(points + bonus_points)
    else:
        bonus_points = 0.1 * points
        print(bonus_points)
        print(points + bonus_points)
