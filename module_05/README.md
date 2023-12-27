## Exceptions

 <img src="https://nexwebsites.com/images/blog/cpp_exceptions.png" > 

 
### 1. try-catch Block

    try {
        // Code that might throw an exception
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }

### 2. throw Statement

    if (error_condition) {
    throw MyException("An error occurred");
    }

### 3. Custom Exception Classes

    class MyException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "My custom exception";
        }
    };

### 4. Handling Multiple Exceptions

    try {
        // Code that might throw an exception
    } catch (Type1Exception e) {
        // Handle Type1Exception
    } catch (Type2Exception e) {
        // Handle Type2Exception
    } catch (...) {
        // Handle any other exception
    }











