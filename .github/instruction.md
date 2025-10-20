# GitHub Copilot Instructions for CS50 Project

## Project Overview
This is a CS50 (Harvard's Introduction to Computer Science) coursework repository containing problem sets and solutions primarily written in C, with future work in Python, SQL, and web technologies.

## Repository Structure
```
cs50/
├── README.md                    # Main project documentation
├── instruction.md              # This file - Copilot instructions
├── plurality/                  # Voting algorithm implementations
├── week1-c/                    # Week 1 C programming exercises
├── week2-arrays/               # Week 2 array manipulation problems
└── [future weeks]              # Additional weeks as coursework progresses
```

## Code Style Guidelines

### C Programming Standards
- Follow CS50 style guide conventions
- Use descriptive variable names (e.g., `voter_count`, `candidate_name`)
- Include proper header comments for functions
- Use consistent indentation (4 spaces)
- Add comments for complex logic
- Validate all user input
- Handle edge cases gracefully

### Function Naming Conventions
- Use lowercase with underscores: `print_winner()`, `get_votes()`
- Boolean functions should be descriptive: `is_valid_vote()`, `has_winner()`
- Helper functions should be clearly named: `find_candidate()`, `count_votes()`

### CS50-Specific Requirements
- Always include `#include <cs50.h>` for CS50 library functions
- Use CS50 data types: `string`, `bool`
- Use CS50 input functions: `get_string()`, `get_int()`, `get_float()`
- Follow problem set specifications exactly
- Implement only the required functions (don't add extras unless specified)

## Academic Integrity Guidelines
- **IMPORTANT**: This is coursework - ensure all suggestions maintain academic honesty
- Help with debugging and optimization, but don't provide complete solutions
- Focus on explaining concepts rather than giving direct answers
- Encourage understanding of underlying algorithms and data structures

## Common Patterns in CS50 Problems

### Input Validation
```c
// Always validate user input
int count = get_int("Number of candidates: ");
if (count < 1 || count > MAX_CANDIDATES)
{
    printf("Invalid number of candidates.\n");
    return 1;
}
```

### String Comparison
```c
// Use strcmp for string comparison
if (strcmp(candidate_name, vote) == 0)
{
    // Match found
}
```

### Array Iteration
```c
// Common pattern for processing arrays
for (int i = 0; i < array_length; i++)
{
    // Process array[i]
}
```

## Testing Approach
- Suggest edge cases to test (empty input, boundary values, invalid data)
- Recommend testing with various input sizes
- Consider both valid and invalid inputs
- Test corner cases specific to each algorithm

## Problem-Solving Methodology
1. **Understand the problem** - Read specifications carefully
2. **Plan the algorithm** - Pseudocode before coding
3. **Implement incrementally** - Build and test small pieces
4. **Debug systematically** - Use printf statements and logical reasoning
5. **Optimize when necessary** - Focus on correctness first, efficiency second

## Compilation and Execution Context
- Programs are compiled with: `gcc -o program program.c -lcs50`
- CS50 library provides helper functions and data types
- Programs should handle command-line arguments appropriately
- Always check return values and exit codes

## Week-Specific Contexts

### Week 1 (C Basics)
- Focus on basic syntax, loops, conditionals
- Command-line arguments handling
- Basic input/output operations

### Week 2 (Arrays)
- String manipulation and character arrays
- ASCII values and character operations
- Array traversal and processing
- Cipher implementations

### Week 3 (Algorithms)
- Sorting and searching algorithms
- Time complexity considerations
- Recursive thinking

### Future Weeks
- Memory management (Week 4)
- Data structures (Week 5)
- Python transition (Week 6)
- Web development (Weeks 8-9)

## Debugging Assistance Guidelines
- Help identify logical errors in algorithms
- Suggest printf debugging statements
- Explain memory-related issues when they arise
- Guide through step-by-step problem decomposition

## Code Review Focus Areas
- Algorithm correctness
- Edge case handling
- Code readability and organization
- Adherence to CS50 style guide
- Proper error handling
- Memory safety (when applicable)

## Helpful Reminders
- Always consider the "more comfortable" version of problems for additional challenge
- Think about efficiency, but prioritize correctness
- Use descriptive variable names that match problem domain
- Comment complex algorithms for clarity
- Test thoroughly with provided test cases and additional edge cases

## Don't Suggest
- Complete solutions to homework problems
- Shortcuts that bypass learning objectives
- Non-CS50 library functions unless specifically needed
- Overly complex solutions for beginner-level problems
- Code that violates academic integrity policies

## Encourage
- Understanding of underlying concepts
- Step-by-step problem solving
- Testing and debugging skills
- Clean, readable code
- Proper documentation and comments
- Algorithmic thinking development

---

*This instruction file helps GitHub Copilot provide better, more contextually appropriate assistance for CS50 coursework while maintaining academic integrity.*