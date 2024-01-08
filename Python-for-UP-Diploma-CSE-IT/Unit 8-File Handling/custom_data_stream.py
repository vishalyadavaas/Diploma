def custom_data_stream():
    data = [1, 2, 3, 4, 5]  # Your data source, this could be dynamic or from a file, database, etc.
    for item in data:
        yield item

# Using the custom data stream
my_stream = custom_data_stream()

# Reading data from the stream
for value in my_stream:
    print(value)
