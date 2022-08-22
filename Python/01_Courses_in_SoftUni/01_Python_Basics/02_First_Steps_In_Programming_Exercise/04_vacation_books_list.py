pages_number = int(input())
per_hour_pages = int(input())
amount_days = int(input())

hours_per_day = (pages_number / per_hour_pages) / amount_days
print(hours_per_day)
