def modify_list(my_list):
    my_list.append('modified')
    print("Inside function - ",my_list)


my_list = ['Vishal','Akhilesh','Yogesh']
modify_list(my_list)
print("Outside function - ",my_list)