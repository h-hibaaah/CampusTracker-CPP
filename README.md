<div align="center">

# Academix

### Modern Campus Management System

*A modular, file-based Campus Management System built with modern C++.*

<p>
<img src="https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white">
<img src="https://img.shields.io/badge/Version-4.0-orange?style=for-the-badge">
<img src="https://img.shields.io/badge/Status-Complete-success?style=for-the-badge">
<img src="https://img.shields.io/badge/License-MIT-blue?style=for-the-badge">
</p>

*A lightweight console application demonstrating Object-Oriented Programming, modular architecture, and persistent file handling.*

---

### Core Modules

Student Management • Teacher Management • Course Management • Attendance • Grades

</div>

---

# Overview

**Academix** is a console-based Campus Management System developed entirely in **C++**.

The project demonstrates how real-world management software can be built using core programming concepts without relying on external databases or third-party libraries.

Instead of using SQL, Academix stores information through persistent text files using the C++ Standard Library (`fstream`), making the project lightweight, portable, and easy to understand.

The goal is to practice software engineering fundamentals while creating a scalable academic management system.

---

# Features

## Student Management

* Add students
* Display students
* Remove students
* Persistent record storage

## Teacher Management

* Add teachers
* Update teacher records
* Remove teachers
* Display teacher information

## Course Management

* Create courses
* Assign courses
* View course details

## Attendance System

* Record attendance
* Update attendance
* View attendance history

## Grading System

* Add marks
* Update marks
* Calculate averages
* Generate grades
* Identify top-performing students

---

# Technology Stack

| Category             | Technology                  |
| -------------------- | --------------------------- |
| Language             | C++17                       |
| Programming Paradigm | Object-Oriented Programming |
| Storage              | Text Files (`fstream`)      |
| Architecture         | Multi-file Modular Design   |
| Compiler             | GCC / Clang / MSVC          |

---

# Project Structure

```text
Academix/
│
├── src/
│   ├── main.cpp
│   ├── student.cpp
│   ├── teacher.cpp
│   ├── course.cpp
│   ├── attendance.cpp
│   └── grades.cpp
│
├── include/
│   ├── student.h
│   ├── teacher.h
│   ├── course.h
│   ├── attendance.h
│   └── grades.h
│
├── data/
│   ├── students.txt
│   ├── teachers.txt
│   ├── attendance.txt
│   ├── grades.txt
│   └── courses.txt
│
└── README.md
```

---

# Application Flow

```text
                +------------------+
                |   Start Program  |
                +--------+---------+
                         |
                         v
                +------------------+
                |   Main Menu      |
                +--------+---------+
                         |
        +----------------+----------------+
        |                |                |
        v                v                v
   Students        Teachers         Courses
        |                |                |
        +----------------+----------------+
                         |
                         v
                  Attendance
                         |
                         v
                     Grading
                         |
                         v
                 Save to Text Files
                         |
                         v
                     Exit Program
```

---

# Getting Started

## Clone the Repository

```bash
git clone https://github.com/your-username/academix.git
cd academix
```

## Compile

```bash
g++ *.cpp -o academix
```

## Run

```bash
./academix
```

---

# Development Roadmap

| Version | Description                | Status   |
| ------- | -------------------------- | -------- |
| 1.0     | Student Management         | Complete |
| 2.0     | Teacher & Course Modules   | Complete |
| 3.0     | Attendance & Grading       | Complete |
| 4.0     | Fully Integrated System    | Complete |
| 5.0     | Authentication & Analytics | Planned  |

---

# Future Improvements

* Authentication System
* Role-Based Access
* GPA Calculator
* CSV Export
* Report Generation
* Search & Filters
* Terminal UI Improvements
* File Encryption
* Backup & Restore
* Statistics Dashboard

---

# Learning Outcomes

This project demonstrates practical understanding of:

* Object-Oriented Programming
* File Handling
* Classes and Objects
* Encapsulation
* Modular Programming
* Multi-file Projects
* Software Design Principles
* Menu-Driven Applications
* Data Persistence

---

# Contributing

Contributions, suggestions, and improvements are welcome.

1. Fork the repository
2. Create a new feature branch
3. Commit your changes
4. Push the branch
5. Open a Pull Request

---

# License

Distributed under the **MIT License**.

---

<div align="center">

### Academix

*A modern C++ campus management system built for learning, scalability, and clean software architecture.*

⭐ If you found this repository helpful, consider starring it.

</div>
