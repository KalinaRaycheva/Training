import json


def print_student_sentence(name, age, today):
    """
    :param name:
    :param age:
    :param today:
    :return: None
    """
    # Write code that prints out a sentence like
    # <name> is aged <age>. He is a passionate learner, and he started a JD program just <today>

    print(f"{name} is aged {age}. He is a passionate learner, and he started a JD program just{today}")
    return None


transactions_even = []
def store_transactions(transaction_id, transactions):
    """
    :param transaction_id:
    :param transactions:
    :return: transactions
    """
    # Write code that stores the transaction_id if it is an even number
    # The function should return the transactions

    if transaction_id % 2 == 0:
        transactions.append(transaction_id)

    return transactions


def pretty_print_dict(dictionary):
    """
    :param dictionary:
    :return: None

    If we have the following dictionary
    {
        level1: {
            attr1: value,
            attr2: value,
            level2: {
                attr1: value,
                attr2: value,
                level3: {
                    attr1: value,
                }
            }
        }
    }
    The desired output is the dictionary data printed in a pretty manner - tabulated (4 tabs) per
    level
    """
    pretty = json.dumps(dictionary, indent=4)
    print(pretty)
    return None


sums_array = []
def store_sum(number1, number2, sums):
    """
    :param number1:
    :param number2:
    :param sums:
    :return: sums
    """
    # Write a code that stores the sum of number1 and number2 within sums_array

    sums.append(number1 + number2)
    return sums


def get_chars_count(string):
    """
    :param string:
    :return: dict holding string chars count
    """
    
    all_freq = {}
    for i in string:
        if i in all_freq:
            all_freq[i] += 1
        else:
            all_freq[i] = 1

    return all_freq


def get_abbreviation(string):
    """
    :param string:
    :return: abbreviation from the string (first 3 symbols). If string is shorter than 5 chars,
    return None
    """

    if len(string) < 5:
        return string
    else:
        return string[:3]


def get_titled_string(sentence):
    """
    :param sentence:
    :return: Return a titled version of the sentence
    """

    titled_string = sentence.title()
    return titled_string


def get_number_sum(array, target_sum):
    """
    Example:
    array = [3, 5, -4, 8, 11, 1, -1, 6]
    target_sum = 10

    result = [-1, 11]

    :param array: Non-empty array of integers
    :param target_sum: integer
    :return: new array holding 2 numbers which sum = target_sum. If no such numbers, return []
    """

    result = []
    for num in range(len(array)):
        for checker in range(num + 1, len(array)):
            if array[num] + array[checker] == target_sum:
                result.append(array[num])
                result.append(array[checker])
                return result
    return result


def get_is_valid_subsequence(array, sequence):
    """
    Given two non-empty arrays of integers, finish the function by adding code that determines if
    the second array is a subsequence of the first one.

    Subsequence is not mandatory adjacent in the array, but following the same order.
    Example:
    array = [5, 1, 22, 25, 6, -1, 8, 10]
    sequence = [1, 6, -1, 10]
    result: True

    :param array:
    :param sequence:
    :return: bool
    """

    seq_list = []
    for x in array:
        if x in sequence:
            seq_list.append(x)

    if seq_list == sequence:
        return True
    return False


def get_is_palindrome(string):
    """
    Finish the function by adding code that returns a boolean with palindrome check.
    A string is palindrome if it is written the same forward and backward. Single char string is
    a palindrome string.

    Example:
    string = 'abcdcba'
    result: True

    :param string:
    :return: bool
    """
    return string == string[::-1]
