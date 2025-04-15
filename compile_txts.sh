#!/bin/bash

# Output file name
OUTPUT_FILE="combined_cpp_files.txt"

# Clear the output file if it exists
> "$OUTPUT_FILE"

# Find all .cpp and .hpp files, sorted alphabetically
find . -type f \( -name "*.cpp" -o -name "*.hpp" \) | sort | while read -r file; do
    echo "--- $file ---" >> "$OUTPUT_FILE"
    echo "--- file contents ---" >> "$OUTPUT_FILE"
    cat "$file" >> "$OUTPUT_FILE"
    echo -e "\n--- spacer ---\n" >> "$OUTPUT_FILE"
done

echo "Files combined into $OUTPUT_FILE"
