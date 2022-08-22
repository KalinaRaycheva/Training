import math

world_record = float(input())
length_meters = float(input())
time_seconds_1m = float(input())

total_seconds = length_meters * time_seconds_1m
added_seconds = math.floor(length_meters / 15) * 12.5 # every 15m he slows down by 12.5sec
final_time = total_seconds + added_seconds

if final_time < world_record:
    print(f"Yes, he succeeded! The new world record is {final_time:.2f} seconds.")
else:
    print(f"No, he failed! He was {final_time - world_record:.2f} seconds slower.")
