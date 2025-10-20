# CS50x – Introduction to Computer Science  

This repository contains my solutions and notes for **Harvard University's CS50x: Introduction to Computer Science** (offered through [edX](https://cs50.harvard.edu/x/)).  

The course introduces fundamental computer science concepts and programming skills through problem sets in C, Python, SQL, web development, algorithms, data structures, artificial intelligence, and a final project.  

---

## 📚 Course Overview  

- **Week 0:** Scratch  
- **Week 1:** C ✅  
- **Week 2:** Arrays ✅  
- **Week 3:** Algorithms  
- **Week 4:** Memory  
- **Week 5:** Data Structures  
- **Week 6:** Python  
- **Artificial Intelligence**  
- **Week 7:** SQL  
- **Week 8:** HTML, CSS, JavaScript  
- **Week 9:** Flask  
- **Week 10:** The End (Final Project & Wrap-up)  

---

## 🗂️ Repository Structure

```
cs50/
├── README.md
├── plurality/
│   └── plurality.c              # Plurality voting algorithm
├── week1-c/
│   ├── agree.c                  # Basic conditionals
│   ├── cat.c                    # Command-line arguments
│   ├── compare.c                # String comparison
│   ├── hello.c                  # Hello world program
│   ├── mario.c                  # Mario pyramid (less comfortable)
│   ├── credit/
│   │   └── credit.c             # Credit card validation
│   └── mario-more/
│       └── mario.c              # Mario pyramid (more comfortable)
└── week2-arrays/
    ├── readability/
    │   └── readability.c        # Coleman-Liau readability index
    ├── scrabble/
    │   └── scrabble.c           # Scrabble word scoring
    └── substitution/
        └── substitution.c       # Substitution cipher
```

---

## 🚀 Getting Started

### Prerequisites
- GCC compiler
- CS50 library (for local development)

### Installation
```bash
# Install CS50 library (macOS)
curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
sudo apt-get install libcs50

# Or for macOS with Homebrew
brew install cs50/tap/libcs50
```

### Compilation and Running
```bash
# Navigate to a project directory
cd plurality/

# Compile with CS50 library
gcc -o plurality plurality.c -lcs50

# Run the program
./plurality Alice Bob Charlie
```

---

## 📝 Problem Sets Completed

### Week 1 - C
- [x] **Hello** - Basic C program structure
- [x] **Mario (Less)** - Pyramid printing with loops
- [x] **Mario (More)** - Double pyramid printing
- [x] **Credit** - Credit card number validation using Luhn's algorithm
- [x] **Agree** - Conditional statements practice
- [x] **Compare** - String comparison functions
- [x] **Cat** - Command-line arguments handling

### Week 2 - Arrays
- [x] **Readability** - Coleman-Liau readability index calculation
- [x] **Scrabble** - Word scoring based on letter values
- [x] **Substitution** - Cipher encryption/decryption
- [x] **Plurality** - Simple voting system implementation

### Week 3 - Algorithms
- [ ] **Sort** - Analyzing sorting algorithms
- [ ] **Plurality** - Voting system (if not completed in Week 2)
- [ ] **Runoff** - Ranked-choice voting system
- [ ] **Tideman** - Tideman voting system

---

## 🛠️ Key Concepts Learned

### C Programming Fundamentals
- Data types, variables, and constants
- Control structures (if/else, loops)
- Functions and scope
- Arrays and strings
- Command-line arguments
- Memory management basics

### Algorithms & Problem Solving
- Algorithm design and analysis
- Search algorithms (linear, binary)
- Sorting algorithms (bubble, selection, merge)
- Time and space complexity (Big O notation)
- Debugging techniques

### Data Validation & Processing
- Input validation and error handling
- String manipulation and parsing
- Mathematical computations
- Pattern matching and cipher implementation

---

## 📚 Resources

- [CS50x Course Website](https://cs50.harvard.edu/x/)
- [CS50 Manual](https://manual.cs50.io/)
- [CS50 AI Chat](https://cs50.ai/chat)
- [Scratch Programming](https://scratch.mit.edu/)
- [CS50 Style Guide](https://cs50.readthedocs.io/style/c/)

---

## 📊 Progress Tracking

**Overall Progress:** 2/10 weeks completed (20%)

**Current Focus:** Week 3 - Algorithms

**Next Goals:**
- Complete sorting algorithm analysis
- Implement runoff voting system
- Master algorithmic thinking patterns

---

## 🤝 Academic Integrity

This repository contains my personal solutions to CS50 problem sets. If you're currently taking CS50, please ensure you follow the course's academic honesty policy. Use these solutions only as reference after completing your own work.

---

*Last updated: October 2025*