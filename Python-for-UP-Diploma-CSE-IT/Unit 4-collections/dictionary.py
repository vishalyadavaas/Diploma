person_info = {
    "Name": "Vishal",
    "Age": 17,
    "College": "CSJM",
    "Brunch": "IT"
}

# adding new key-value pair
person_info["Enroll"] = "E03"
# removing key-value pair
person_info.pop("Age")
# sorting key
sorted_key = dict(sorted(person_info.items()))
# sorting value
sorted_value = dict(sorted(person_info.items(), key=lambda item: item[1]))

print(person_info)
print(sorted_key)
print(sorted_value)


# loop
# for i in person_info:
#     print(i,":",person_info[i])
