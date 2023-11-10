import copy
mylist = [[10,30],[40,60]]
# deep Copy
deep_copy = copy.deepcopy(mylist)
print("Deep-Before changes")
print("original : ",mylist)
print("Copy : ",deep_copy)
print("Deep-After changes")
deep_copy[0][0] = 15
print("original : ",mylist)
print("Copy : ",deep_copy)

# Shallow Copy
sh_copy = copy.copy(mylist)
print("sh-Before changes")
print("original : ",mylist)
print("copy : ",sh_copy)
print("sh-After changes")
sh_copy[0][0] = 45
print("original : ",mylist)
print("copy : ",sh_copy)