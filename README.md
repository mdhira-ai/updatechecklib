# Update Check Library

This project is a simple C++ application that checks for updates by comparing the current version of the software with the version available on a remote server. It uses the [cpr](https://github.com/libcpr/cpr) library for HTTP requests and [nlohmann/json](https://github.com/nlohmann/json) for JSON parsing.

## Features

- Fetches version information from a remote server.
- Compares the current version with the remote version.
- Displays whether the software is up-to-date or if a new update is available.

## File Structure

- `main.cpp`: Contains the main logic for update checking.
- `README.md`: Documentation for the project.

## Prerequisites

- C++ compiler (e.g., GCC)
- [CMake](https://cmake.org/) (minimum version 3.10.0)
- [cpr](https://github.com/libcpr/cpr) library
- [nlohmann/json](https://github.com/nlohmann/json) library
- [vcpkg](https://github.com/microsoft/vcpkg) for dependency management (optional)

## Build Instructions

1. Clone the repository:
   ```bash
   git clone <repository-url>
   cd updatechecklib
   ```

2. Compile the code:
    ```bash
    g++ main.cpp -o updatecheck
    ```

3. Run the program:
    ```bash
    ./updatecheck
    ```

## Dependencies

- Standard C++ libraries (e.g., `<iostream>`, `<fstream>`, etc.).
- Ensure you have a C++ compiler installed (e.g., GCC).

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Author

Developed by MD Habibor Rahman Hira.