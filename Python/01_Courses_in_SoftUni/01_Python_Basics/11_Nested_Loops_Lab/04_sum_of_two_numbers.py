start_num = int(input())
end_num = int(input())
magic_num = int(input())
combination_count = 0
is_found = False

for i in range(start_num, end_num + 1):
    for j in range(start_num, end_num + 1):
        combination_count += 1
        if i + j == magic_num:
            print(f"Combination N:{combination_count} ({i} + {j} = {magic_num})")
            is_found = True
            break

    if is_found:
        break

if not is_found:
    print(f"{combination_count} combinations - neither equals {magic_num}")