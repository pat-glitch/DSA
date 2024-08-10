import ctypes

# Define the array
array = [10, 20, 30, 40, 50]

# Display the array element with addresses
print("Element\tAddress")
for element in array:
    address=ctypes.addressof(ctypes.c_int(element))
    print(f"{element}\t{hex(address)}")