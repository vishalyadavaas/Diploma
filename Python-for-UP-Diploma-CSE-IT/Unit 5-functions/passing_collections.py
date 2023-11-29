# passing list to a function
def fun_list(my_list):
    for i in my_list:
        print(i)

my_list = ["A", "B", "C", "D", "E"]
print("List")
fun_list(my_list)

# passing tuple to a function


def fun_tuple(my_tuple):
    for i in my_tuple:
        print(i)


my_tuple = (1, 2, 3, 4, 5)
print("Tuple")
fun_tuple(my_tuple)

# passing set to a function


def fun_set(my_set):
    for i in my_set:
        print(i)


my_set = {"a", "b", "c", "d", "e"}
print("Set")
fun_set(my_set)

# passing dictionary to a function


def fun_dist(my_dist):
    for key, value in my_dist.items():
        print(key, ":", value)


my_dist = {
    "name": "Vishal",
    "age": 17,
    "subject": "Python"
}
print("Dictionary")
fun_dist(my_dist)
