#!/bin/bash
# This script demostrates the use of variables, loops, and conditiions

# DEfine a variable
greeting="Hello, World!"

# Print the greeting
echo $greeting

# Define an array
fruits=("apple" "banana" "cherry")

# Print the first element of the array
@echo "The first fruit is: ${fruits[0]}"

# Print the array elements
for fruits in "${fruits[@]}"; do
    echo $fruits
done

# Define a fuction
function greet(){
    local name=$1
    echo "Hello, $name!"
}
#Call the function with an 
greet "Alice"

# Conditional statement
if [ -f "mybash.sh" ]; then
    echo "The file mybash.sh exists."
else
    echo"The file mybash.sh does not exist."
fi