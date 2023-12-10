"""
This function called calculate_discount that calculates the 
discounted price based on the original price and discount percentage provided as inputs.
"""
def calculate_discount(original_price,discount_percentage):
    discount_price = original_price * discount_percentage / 100
    price = original_price - discount_price
    print(f"After discount, price is : {price}")

original_price = float(input("Enter the Original_price : "))
discount_percentage = float(input("Enter Discount in % : "))
calculate_discount(original_price,discount_percentage)