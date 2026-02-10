# Project 16 – Queue Class (C++ | Templates | OOP)

A custom implementation of a **Queue data structure** in C++, built without using the STL, focusing on **understanding logic, object-oriented design, reusability, and clean architecture** rather than relying on ready-made libraries.

---

## 📌 Project Idea

In previous courses, queues were implemented using the C++ STL.  
In this project, the goal is **not** to reinvent the wheel, but to deeply understand **how data structures work internally** and how to design reusable, maintainable code.

Instead of building the queue from scratch again, this project leverages a previously implemented **Doubly Linked List** using the **Composition** principle in OOP.

---

## 🧠 Key Concepts Covered

- Object-Oriented Programming (OOP)
- Templates in C++
- Composition vs Inheritance
- Reusability and clean design
- Data structure abstraction
- Time complexity awareness (O(1) operations)
- Writing less code by building on existing components

---

## 🧱 Design Approach

- The queue **does not inherit** from the doubly linked list.
- Instead, it **contains** a doubly linked list object internally (Composition).
- Internal list methods are hidden from the outside user.
- Queue operations are simple wrappers around list operations:
  - `Push` → Insert at end
  - `Pop` → Delete first node
- The internal implementation (array or linked list) is completely hidden from the user.

This makes the queue flexible, reusable, and easy to modify in one place.

---

## ⚙️ Supported Operations

- `Push(T item)`
- `Pop()`
- `Front()`
- `Back()`
- `Print()`
- `Size()`
- `IsEmpty()`

The class is fully **template-based**, making it usable with any data type.

---

## 🚀 Why This Project Matters

- We could use `std::queue` instantly — but then we wouldn’t learn anything.
- Small projects like this build **strong thinking skills**.
- Understanding reusability and abstraction early saves **years of struggle later**.
- Clean architecture allows changes in one place to propagate everywhere.
- This mindset separates average programmers from strong engineers.

> We don’t learn technologies to memorize them — we learn how to build and think.

---

## 🧩 Reusability in Action

The queue was built in minutes because:
- The doubly linked list was already well-designed.
- No code duplication.
- Like LEGO blocks — build once, reuse everywhere.

Future enhancements can be added easily without breaking existing code.

---

## 🛠️ Future Improvements

- Additional queue utilities
- Enhanced safety checks
- Performance optimizations
- Extended real-world use cases

---

## 📎 Technologies Used

- C++
- Templates
- Object-Oriented Programming
- Custom Doubly Linked List

---

✨ Clean code, clear ideas, and strong foundations.
