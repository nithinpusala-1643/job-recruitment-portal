📄 Job Recruitment Portal (C Program)
📌 Overview

This project is a menu-driven Job Recruitment Portal developed in C language. It allows users to manage applicant details such as adding, viewing, searching, updating, and deleting records. The program also uses file handling to store data permanently.

🎯 Objectives
To implement a menu-driven program using C
To use structures for storing data
To perform CRUD operations (Create, Read, Update, Delete)
To apply file handling for permanent storage
⚙️ Features
➕ Add Applicant
📋 Display All Applicants
🔍 Search Applicant by ID
✏️ Update Applicant Details
❌ Delete Applicant
💾 Save and Load Data from File
🧱 Data Structure Used
struct Applicant {
    int id;
    char name[50];
    char qualification[50];
};
💻 How It Works
The program displays a menu with options.
User selects an operation (Add, Display, Search, etc.).
Based on input, the program performs the action.
Data is stored in an array during runtime.
Data is saved into a file (applicants.txt) for future use.
📂 File Handling
Data is stored in: applicants.txt
Functions used:
fopen() → Open file
fprintf() → Write data
fscanf() → Read data
fclose() → Close file
▶️ How to Run
Step 1: Compile
gcc program.c -o portal
Step 2: Run
./portal
📌 Sample Menu
--- Job Recruitment Portal ---
1. Add Applicant
2. Display Applicants
3. Search Applicant
4. Update Applicant
5. Delete Applicant
6. Exit
🧪 Example Use Case
Add a new applicant
View all applicants
Search using applicant ID
Update applicant details
Delete a record
🚧 Limitations
Maximum 100 applicants (fixed array size)
No login/authentication system
Basic text-based interface
🚀 Future Enhancements
Add login system (Admin/User)
Job posting and application system
Use dynamic memory instead of fixed array
GUI-based interface
👨‍💻 Conclusion

This project demonstrates basic concepts of C programming, including structures, file handling, and menu-driven design. It is suitable for beginners learning data management systems.
