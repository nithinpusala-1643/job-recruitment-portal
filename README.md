# 💼 Job Recruitment Portal (C Program)

## 📌 Overview

This project is a menu-driven **Job Recruitment Portal** developed in **C language**. It allows users to manage applicant details such as adding, viewing, searching, updating, and deleting records. The program also uses **file handling** to store data permanently.

---

## 🎯 Objectives

✔️ Implement a menu-driven program using C
✔️ Use structures to store data
✔️ Perform CRUD operations (Create, Read, Update, Delete)
✔️ Apply file handling for permanent storage

---

## ⚙️ Features

➕ Add Applicant
📋 Display All Applicants
🔍 Search Applicant by ID
✏️ Update Applicant Details
❌ Delete Applicant
💾 Save and Load Data from File

---

## 🧱 Data Structure Used

struct Applicant {
int id;
char name[50];
char qualification[50];
};

---

## ⚡ How It Works

1️⃣ The program displays a menu with options
2️⃣ The user selects an operation (Add, Display, Search, etc.)
3️⃣ Based on input, the program performs the action
4️⃣ Data is stored in an array during runtime
5️⃣ Data is saved into a file (**applicants.txt**) for future use

---

## 📂 File Handling

📁 File used: applicants.txt

🔧 Functions used:

* fopen() → Open file
* fprintf() → Write data
* fscanf() → Read data
* fclose() → Close file

---

## ▶️ How to Run

🔹 Step 1: Compile
gcc program.c -o portal

🔹 Step 2: Run
./portal

---

## 🖥️ Sample Menu

--- Job Recruitment Portal ---
1️⃣ Add Applicant
2️⃣ Display Applicants
3️⃣ Search Applicant
4️⃣ Update Applicant
5️⃣ Delete Applicant
6️⃣ Exit

---

## 🧪 Example Use Case

✨ Add a new applicant
✨ View all applicants
✨ Search using applicant ID
✨ Update applicant details
✨ Delete a record

---

## ⚠️ Limitations

❗ Maximum 100 applicants (fixed array size)
❗ No login/authentication system
❗ Basic text-based interface

---

## 🚀 Future Enhancements

🔐 Add login system (Admin/User)
📢 Job posting and application system
📊 Use dynamic memory instead of fixed array
🖼️ GUI-based interface

---

## 👨‍💻 Conclusion

This project demonstrates basic concepts of **C programming**, including structures, file handling, and menu-driven design. It is ideal for beginners learning simple data management systems.

✨ Thank You ✨
