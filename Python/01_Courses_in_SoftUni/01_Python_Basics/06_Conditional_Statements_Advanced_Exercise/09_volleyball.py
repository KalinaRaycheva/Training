import math
leap_or_normal = str(input()).lower()
holidays = int(input())
weekends_home = int(input())

sofia_weekends = (48 - weekends_home) * 3/4
play_sofia = sofia_weekends + 2/3 * holidays
play_total = play_sofia + weekends_home

if leap_or_normal == 'leap':
    print(math.floor(play_total * 1.15))
else:
    print(math.floor(play_total))