# Positive Integer Mean Calculator

This project implements a statistical algorithm in C designed to process a stream of integers. It acts as a **Selective Filter** that ignores non-positive values and computes the arithmetic mean of the valid dataset upon termination.

## 📊 Algorithm Logic

The program processes input $x$ sequentially and maintains a dataset $S$ where $S = \{x \mid x > 0\}$.

Upon receiving the **Sentinel Value** ($-1$), it executes the mean calculation:

$$\mu = \frac{1}{n} \sum_{i=1}^{n} S_i$$

Where:
* $S$: The filtered array of positive integers.
* $n$: The total count of valid positive entries (`index`).
* $\mu$: The calculated arithmetic mean.

## ⚙️ Key Features

1.  **Stream Processing:** Uses an infinite loop structure to accept dynamic input length.
2.  **Sentinel Termination:** Stops execution gracefully when `-1` is detected.
3.  **Data Filtering:** Automatically discards negative numbers and zero from the calculation set.
4.  **Error Handling:** Includes a check to prevent **Division by Zero** errors if no valid numbers are entered.

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o mean_calc
    ```
2.  Run the executable:
    ```bash
    ./mean_calc
    ```
3.  Enter integers (e.g., `10`, `-5`, `20`, `0`, `30`).
4.  Enter `-1` to finish and view the average of positive inputs (`10, 20, 30` -> Average: `20.00`).

---
*This repository demonstrates array buffering and sentinel-controlled loops in C.*
