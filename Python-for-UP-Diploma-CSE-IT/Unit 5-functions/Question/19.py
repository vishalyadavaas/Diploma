def filter_numbers(number_list,even):
    result = filter(even,number_list)
    return list(result)

number_list = [1,2,3,4,5,6,7,8,9,10]
even = lambda x : x % 2 == 0
answer = filter_numbers(number_list,even)
print(answer)