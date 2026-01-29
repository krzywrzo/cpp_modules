#!/bin/bash

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Name of your executable
PROG=./ex04

# Function to run a test case
run_test() {
    TEST_NAME=$1
    CONTENT=$2
    S1=$3
    S2=$4
    EXPECTED=$5
    
    echo "------------------------------------------------"
    echo "Running Test: $TEST_NAME"
    
    # 1. Create input file
    echo -n "$CONTENT" > input.txt
    
    # 2. Run the program
    $PROG input.txt "$S1" "$S2"
    
    # 3. Check if output file exists
    if [ ! -f input.txt.replace ]; then
        echo -e "${RED}[FAIL] Output file not created!${NC}"
        return
    fi
    
    # 4. Compare output with expected result
    OUTPUT=$(cat input.txt.replace)
    
    if [ "$OUTPUT" == "$EXPECTED" ]; then
        echo -e "${GREEN}[OK]${NC}"
    else
        echo -e "${RED}[FAIL]${NC}"
        echo "   Input:    '$CONTENT'"
        echo "   Replace:  '$S1' -> '$S2'"
        echo "   Expected: '$EXPECTED'"
        echo "   Got:      '$OUTPUT'"
    fi
    
    # Cleanup
    rm -f input.txt input.txt.replace
}

# Compile first
make re > /dev/null

# --- TEST CASES ---

# 1. Basic Replacement
run_test "Basic Word" "Hello World" "World" "42" "Hello 42"

# 2. Multiple Occurrences
run_test "Multiple Occurrences" "One One One" "One" "Two" "Two Two Two"

# 3. Replacement is Empty (Deletion)
run_test "Delete Word" "I hate C++" "hate " "" "I C++"

# 4. Search String Not Found
run_test "Not Found" "Hello World" "Moon" "Sun" "Hello World"

# 5. Recursive Trap (a -> aa)
# If this hangs, your loop is broken.
run_test "Recursive Trap" "a" "a" "aa" "aa"

# 6. Partial Match
run_test "Partial Match" "Hello World" "Worl" "X" "Hello Xd"

# 7. Special Characters
run_test "Special Chars" "Hello\nWorld" "\n" " " "Hello World"

# 8. Arguments Check (Should print error, not crash)
echo "------------------------------------------------"
echo "Testing Error Handling (Check manually)"
$PROG
$PROG input.txt
$PROG input.txt "hello"

echo "------------------------------------------------"
echo "Cleaning up..."
make fclean > /dev/null
echo "Done."