try:
    file = open("io.txt","r")
    content = file.read()
    print(content)

except IOError as err:
    print(err)

finally:
    file.close()