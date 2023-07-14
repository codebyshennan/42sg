#!/bin/bash

# Create a text file to store the consolidated output
output_file="consolidated_output.txt"
touch "$output_file"

# Find all .c files in subdirectories and iterate over them
find . -type f -name "*.c" -print0 | while IFS= read -r -d '' file; do
    # Run norminette CLI on each .c file and append the output to the output file
    echo "Running norminette on $file"
    norminette "$file" -R CheckForbiddenSourceHeader >> "$output_file"
done

echo "Consolidated output saved to $output_file"

