# CS50x – Introduction to Computer Science  

This repository contains my solutions and notes for **Harvard University's CS50x: Introduction to Computer Science** (offered through [edX](https://cs50.harvard.edu/x/)).  

The course introduces fundamental computer science concepts and programming skills through problem sets in C, Python, SQL, web development, algorithms, data structures, artificial intelligence, and a final project.  

---

## 📚 Course Overview  

- **Week 0:** Scratch  
- **Week 1:** C ✅  
- **Week 2:** Arrays ✅  
- **Week 3:** Algorithms ✅  
- **Week 4:** Memory ✅  
- **Week 5:** Data Structures ✅  
- **Week 6:** Python ✅  
- **Artificial Intelligence**  
- **Week 7:** SQL ✅  
- **Week 8:** HTML, CSS, JavaScript  
- **Week 9:** Flask ✅  
- **Week 10:** The End (Final Project & Wrap-up)  

---

## 🗂️ Repository Structure

```
cs50/
├── README.md
├── .github/
│   ├── instruction.md           # GitHub Copilot instructions
│   └── chatmodes/
│       └── documenter.chatmode.md
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
├── week2-arrays/
│   ├── readability/
│   │   └── readability.c        # Coleman-Liau readability index
│   ├── scrabble/
│   │   └── scrabble.c           # Scrabble word scoring
│   └── substitution/
│       └── substitution.c       # Substitution cipher
├── week3-algorithms/
│   ├── plurality/
│   │   └── plurality.c          # Simple plurality voting system
│   └── tideman/
│       └── tideman.c            # Tideman ranked-pairs voting
├── week4-memory/
│   ├── volume/
│   │   └── volume.c             # Audio file volume modifier
│   ├── filter-more/
│   │   └── filter-more.c        # Image filtering (blur, edges, reflect, grayscale)
│   └── recover/
│       └── recover.c            # JPEG file recovery from memory card
├── week5-data_structures/
│   ├── inheritance/             # DNA inheritance simulation
│   └── speller/                 # Spell checker with hash table
├── week6-python/
│   ├── hello/                   # Python basics
│   ├── mario/                   # Mario pyramid in Python
│   ├── credit/                  # Credit card validation in Python
│   ├── readability/             # Text readability analysis
│   └── dna/                     # DNA sequence matching
├── week7-sql/
│   └── songs/
│       └── fiftyville.sql       # SQL mystery: detective problem
└── week9-flask/
    ├── birthdays/               # Birthday tracker web app
    │   └── templates/
    │       └── index.html
    └── finances/                # Personal finance tracker
```

---

## 🚀 Getting Started

### Prerequisites
- GCC compiler (for C programs)
- Python 3.x
- CS50 library (for local development)
- Flask (for web applications)
- SQLite3 (for database work)

### Installation
```bash
# Install CS50 library (macOS)
curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
sudo apt-get install libcs50

# Or for macOS with Homebrew
brew install cs50/tap/libcs50

# Install Python dependencies
pip install flask
pip install cs50
```

### Compilation and Running

**C Programs:**
```bash
# Navigate to a project directory
cd plurality/

# Compile with CS50 library
gcc -o plurality plurality.c -lcs50

# Run the program
./plurality Alice Bob Charlie
```

**Python Programs:**
```bash
# Run Python scripts directly
python3 hello.py
python3 mario.py
```

**Flask Web Apps:**
```bash
# Navigate to Flask project
cd week9-flask/birthdays/

# Run the Flask development server
flask run
```

**SQL Queries:**
```bash
# Open SQLite database
sqlite3 database.db

# Run SQL file
sqlite3 database.db < queries.sql
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

### Week 3 - Algorithms
- [x] **Plurality** - Simple voting system implementation
- [x] **Tideman** - Tideman ranked-pairs voting system
- [x] **Sort** - Analyzing sorting algorithms

### Week 4 - Memory
- [x] **Volume** - Audio file volume modification using file I/O
- [x] **Filter (More)** - Advanced image filtering and manipulation
- [x] **Recover** - JPEG recovery from memory card using file signatures

### Week 5 - Data Structures
- [x] **Inheritance** - Simulating genetic inheritance of blood types
- [x] **Speller** - Spell checker implementation using hash tables

### Week 6 - Python
- [x] **Hello** - Python basics and syntax
- [x] **Mario** - Pyramid patterns with Python
- [x] **Credit** - Credit card validation (Python reimplementation)
- [x] **Readability** - Coleman-Liau index in Python
- [x] **DNA** - DNA sequence matching algorithm

### Week 7 - SQL
- [x] **Songs** - SQL queries for music database analysis
- [x] **Fiftyville** - SQL detective mystery solving problem

### Week 9 - Flask
- [x] **Birthdays** - Web application for tracking birthdays
- [x] **Finances** - Personal finance tracking web app

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

### Memory Management & File I/O
- Dynamic memory allocation with malloc/free
- File operations (fopen, fread, fwrite, fclose)
- Binary file manipulation and data parsing
- Buffer management and data types
- Audio/image file format understanding
- File signature detection and recovery algorithms
- Image processing and pixel manipulation

### Data Structures & Advanced C
- Linked lists and tree structures
- Hash tables and collision handling
- Tries for efficient string storage
- Dynamic memory management at scale
- Performance optimization techniques

### Python Programming
- Python syntax and data structures
- List comprehensions and dictionaries
- File I/O in Python
- Regular expressions
- Object-oriented programming basics
- Algorithm reimplementation in high-level language

### Database & SQL
- SQL queries (SELECT, JOIN, WHERE, GROUP BY)
- Database design and normalization
- Complex query construction
- Data analysis with SQL
- Subqueries and aggregation functions

### Web Development with Flask
- Flask framework fundamentals
- HTTP methods (GET, POST)
- Template rendering with Jinja2
- Form handling and validation
- Session management
- Database integration with web apps

---

## 📚 Resources

- [CS50x Course Website](https://cs50.harvard.edu/x/)
- [CS50 Manual](https://manual.cs50.io/)
- [CS50 AI Chat](https://cs50.ai/chat)
- [Scratch Programming](https://scratch.mit.edu/)
- [CS50 Style Guide](https://cs50.readthedocs.io/style/c/)

---

## 📊 Progress Tracking

**Overall Progress:** 7/10 weeks completed (70%)

**Current Focus:** Week 10 - Final Project

**Next Goals:**
- Complete Week 8 (HTML, CSS, JavaScript) if not yet done
- Develop comprehensive final project
- Apply all learned concepts in capstone work

---

## 🤝 Academic Integrity

This repository contains my personal solutions to CS50 problem sets. If you're currently taking CS50, please ensure you follow the course's academic honesty policy. Use these solutions only as reference after completing your own work.

---

*Last updated: November 2025*