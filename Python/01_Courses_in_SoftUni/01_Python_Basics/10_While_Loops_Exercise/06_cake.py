cake_width = int(input())
cake_length = int(input())

total_pieces = 0
cake_size = cake_width * cake_length

line = input()
while line != "Stop":
    pieces = int(line)
    total_pieces += pieces
    if cake_size <= total_pieces:
        break

    line = input()

if line == "Stop" and cake_size > total_pieces:
    print(f"{cake_size - total_pieces} pieces are left.")
if line == "Stop" and total_pieces >= cake_size:
    print(f"No more cake left! You need {total_pieces - cake_size} pieces more.")
if total_pieces >= cake_size:
    print(f"No more cake left! You need {total_pieces - cake_size} pieces more.")
