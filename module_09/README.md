**Bitcoin Exchange Exercise (ex00)**

This document explains the Bitcoin Exchange exercise and how to test your implementation.

**Exercise Overview:**

You will create a C++ program named `btc` that calculates the value of Bitcoin on specific dates based on a provided database file and user input.

**Requirements:**

* **Program Name:** `btc`
* **Input:**
    * A command-line argument specifying a file path.
    * The file should contain lines in the format: `date | value`.
        * `date`: Valid format: `YYYY-MM-DD`.
        * `value`: Positive float or integer between 0 and 1000.
* **Output:**
    * The program should display the value multiplied by the corresponding Bitcoin exchange rate from the database file for each line in the input file.
    * If the date is not present in the database, use the closest **preceding** date with a valid rate.
* **Database:**
    * A CSV file provided with the exercise containing historical Bitcoin exchange rates.
    * Your program should parse this file and store the data in a suitable container.
* **Error Handling:**
    * Display appropriate error messages for invalid input formats, file access issues, or invalid values.
* **Container Usage:**
    * Use at least one C++ Standard Template Library (STL) container for data storage and validation.
    * **Warning:** The container(s) used in this exercise might not be suitable for subsequent exercises in this module.

**Testing Instructions:**

1. **Compile your program:** Use a C++ compiler like `g++` to compile your code along with the necessary header files (e.g., `-I<path/to/database/header>` if applicable).
2. **Create Sample Input Files:**
    * Create text files named `input.txt` and `invalid_input.txt` with the following examples:

    **input.txt:**

    ```
    2011-01-03 | 3
    2011-01-03 | 2
    2011-01-09 | 1
    2012-01-11 | 1
    ```

    **invalid_input.txt:**

    ```
    2001-42-42 | 10  # Invalid date format
    2012-01-11 | -5   # Negative value
    2025-12-31 | 10000  # Future date (not supported)
    ```

3. **Run with Valid Input:**

    ```bash
    ./btc input.txt
    ```

    This should display results for each valid line in `input.txt`, potentially including error messages for dates not found in the database (using the closest preceding date).

4. **Run with Invalid Input:**

    ```bash
    ./btc invalid_input.txt
    ```

    This should display appropriate error messages for invalid date formats, negative values, or values exceeding the specified range (0-1000).

**Tips:**

* Use string manipulation functions like `std::stringstream` to parse input data into date and value components.
* Consider using a `std::map` or `std::unordered_map` to efficiently store and retrieve Bitcoin exchange rates based on dates.
* Implement error handling using techniques like `std::ifstream::is_open()` and exceptions.

By following these instructions and addressing the container usage warning, you can effectively test your Bitcoin Exchange program.
