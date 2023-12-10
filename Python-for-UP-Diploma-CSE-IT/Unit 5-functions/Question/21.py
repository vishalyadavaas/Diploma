def Odd_number(Given_list,odd):
    result = filter(odd,Given_list)
    return list(result)

Given_list = [1,2,3,4,5,6,7,8,9,10]
odd = lambda x : x % 2 != 0
answer = Odd_number(Given_list,odd)
print(answer)