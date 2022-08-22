# 1 meter (m) = 1000 mm
# 1 m = 100 cm

number = float(input())
entry_metric = input()
end_metric = input()

if entry_metric == 'm':
    if end_metric == 'mm':
        print(f'{number * 1000:.3f}')
    elif end_metric == 'cm':
        print(f'{number * 100:.3f}')
elif entry_metric == 'mm':
    if end_metric == 'm':
        result = number / 1000
        print(f'{result:.3f}')
    elif end_metric == 'cm':
        result = (number / 1000) * 100
        print(f'{result:.3f}')
elif entry_metric == 'cm':
    if end_metric == 'm':
        result = number / 100
        print(f'{result:.3f}')
    elif end_metric == 'mm':
        result = (number / 100) * 1000
        print(f'{result:.3f}')