exam_start_hours = int(input())
exam_start_minutes = int(input())
arrival_time_hours = int(input())
arrival_time_minutes = int(input())

exam_time = exam_start_hours * 60 + exam_start_minutes
arrival_time = arrival_time_hours * 60 + arrival_time_minutes
total_minutes_difference = arrival_time - exam_time

if total_minutes_difference < -30:
    print("Early")
elif total_minutes_difference <= 0:
    print("On time")
else:
    print("Late")

result = ""

if total_minutes_difference != 0:
    hours_difference = abs(total_minutes_difference) // 60
    minutes_difference = abs(total_minutes_difference) % 60
    if hours_difference > 0:
        result = f"{hours_difference}:{minutes_difference:02} hours"
    else:
        result = f"{minutes_difference} minutes"
    if total_minutes_difference < 0:
        result = result + " before the start"
        print(result)
    else:
        result = result + " after the start"
        print(result)
