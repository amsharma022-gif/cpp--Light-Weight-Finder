# Light Weight Finder

## Project Description
Light Weight Finder is a robust C++ application designed to efficiently locate files and manage data within a user's directory structure. It harnesses advanced search algorithms to optimize file retrieval processes, making it an essential tool for developers and data analysts alike.

## Features
- Quick file searching based on name, type, or content
- Supports multiple search algorithms for enhanced efficiency
- User-friendly command-line interface
- Detailed output with location and size of found files
- Configurable search parameters

## Algorithm Explanation
The application implements a combination of linear search and binary search algorithms to provide users with an efficient means of locating files. The chosen algorithm adapts based on the size of the search space to optimize performance, ensuring quick responses and reduced processing time.

## Build Instructions
To compile the application, follow these steps:
1. Make sure you have `g++` installed on your machine.
2. Clone the repository:
   ```bash
   git clone https://github.com/amsharma022-gif/cpp--Light-Weight-Finder.git
   ```
3. Navigate to the project directory:
   ```bash
   cd cpp--Light-Weight-Finder
   ```
4. Compile the code:
   ```bash
   g++ -o LightWeightFinder main.cpp
   
5. Run the application:
   ```bash
   ./LightWeightFinder
   

## Complexity Analysis
The complexity of the search operations varies with the algorithm used:
- **Linear Search:** O(n)
- **Binary Search:** O(log n) (requires sorted data)

This variance allows users to choose the most efficient algorithm based on their specific needs.

## Learning Outcomes
- Understanding of advanced file search algorithms.
- Practical experience in C++ application development.
- Insight into optimization techniques for data retrieval.

## Author Information
- **Name:** Amrit Sharma
- **GitHub:** [amsharma022-gif](https://github.com/amsharma022-gif)
- **Email:** amsharma022@gmail.com
