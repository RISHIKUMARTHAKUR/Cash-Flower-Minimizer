# 💸 Cash Flow Minimizer

A C++ program to **minimize the number of cash transactions** required to settle debts among a group of people.

> 🔍 Inspired by the real-world problem where multiple individuals owe money to each other, this tool finds the most optimized way to settle debts with **minimum transactions**, saving time and effort.

---

## 🚀 Features

* 🔄 **Minimizes the total number of transactions** required to settle all debts.
* 📊 Uses **graphs** to model people and their transactions.
* ⚙️ Employs **priority queues (heaps)** and **greedy strategies** to efficiently resolve complex payment networks.
* ⏱️ Efficient backtracking to find the optimal path for balancing amounts.

---

## 🛠️ Tech Stack

* **Programming Language:** C++
* **IDE:** Visual Studio Code
* **Concepts Used:** Graphs, Multisets, Heaps, Greedy Algorithm, Recursion
* **Version Control:** Git & GitHub

---

## 🧠 Problem Statement

Given a group of people with money owed between them, the goal is to determine the **minimum number of transactions** to settle all debts.
For example, if:

```
Person 0 owes Person 1: ₹1000  
Person 1 owes Person 2: ₹500  
Person 0 owes Person 2: ₹2000  
```

Instead of three separate transactions, the system may suggest optimized payments such as:

```
Person 0 pays Person 2: ₹2500  
Person 2 pays Person 1: ₹500  
```

Total transactions reduced from 3 → 2.

---

## 📦 How It Works

1. Input a **debt matrix** where `debt[i][j]` represents money `i` owes to `j`.
2. The algorithm:

   * Calculates net amount for each person.
   * Recursively finds the person with **max credit** and **max debit**.
   * Transfers the minimum of the two.
   * Repeats until all balances are settled.

---

## 📁 Repository Structure

```
├── src/
│   └── cash_flow_minimizer.cpp   # Main implementation
├── README.md                     # Project overview
└── LICENSE (optional)
```

---

## 🧪 Sample Output

```
Person 0 pays Person 2: ₹2500  
Person 2 pays Person 1: ₹500  
```

---

## 📚 Learnings

* Mastered advanced **graph modeling** and **greedy problem-solving**.
* Practiced working with **priority queues**, **multisets**, and recursive algorithms.
* Understood real-world applications of **minimizing cash flow** in group transactions.

---

## 📌 How to Run

```bash
g++ src/cash_flow_minimizer.cpp -o cashflow
./cashflow
```
