def join_with_separator(seprator,*strings):
    return seprator.join(strings)

result = join_with_separator("-",'apple','banana','mango')
print(result)