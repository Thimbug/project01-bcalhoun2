# CS 124 Section A, Project 1

NOTE: This specification and rubric are for CS 124 Section A only (Cafiero). 
If you are in a different section, you're reading the wrong file.

Choose a data set, read the information into a C++ program, and perform a calculation on the data

For this project, you will:

* choose a data set,
* write a C++ class to store its information,
* read the data from a file into a vector of objects,
* perform a calculation on the data in your vector, and
* write a brief report.

## Requirements

### Repository

* See the README in the `GitHub-with-CLion` repository for directions on how to set up and use your GitHub repository.
* Use the code in this repository to create a _new repository_ in the course's GitHub organization. 
It must be a **private** repository with the naming convention `project_01-netid` where `netid` is your UVM NetID.
* Clone your new repository into CLion. 
* Frequently update the remote through `git commit` and `git push` commands.

### Data Set

* Your data set must contain at least 1000 entries (rows). 
* Each entry must have at least five attributes (columns).
* At least one attribute must be unique for each entry in the data set (_i.e._, no duplicates).
You may add an attribute (_e.g._, record number) to serve as a unique ID if your data would not otherwise have a unique ID.
* Keep in mind, you will be using this data set for the rest of the projects this semester.
  Choose wisely.

Some examples of data sets:

* All the courses offered at UVM this semester
* The top 1000 songs of your favorite genre or decade
* The 1000 top-rated movies from your favorite movie rating source
* Data about your favorite sports team
* Climate data, health data, stock data---almost anything that interests you

### Class

* Your class must have at least five fields.
* Your class must have at least one numerical type field (_e.g._, int or double)
* Your class must have at least one string type field.
* Your class should have constructors, getters, setters, and other methods as appropriate.
* Your class should overload the `<<` operator, so you can pretty-print your objects.

### Global Functions

* You must create a function that opens your data file and reads the data into a vector of objects of your class.
* You must create a function that will loop through your vector of objects and perform some kind of meaningful calculation on it.

### Model

An example program has been provided for you in a folder called `model`. 
It contains data about exoplanets, and you will not be able to use the same data set for your project. 
Use it as an example of content, code style, and functionality that you can use as a model for your project.
Note that this example project is from a previous semester, when reports were required to be in PDF format instead of in a README.md file, and it does not include CMakeLists.txt.

### Design

Consider the following questions:

* What data do you want to use? 
* Where will you get your data?
* How are your data stored? Are your data in a CSV file? CSV format is recommended.
* How will you read it in using C++? 
* How will you know that you have read your data correctly?
* What should you name the class?
* What fields do you need? What are their types? What names make sense?
* Which fields and methods need comments to clarify their meaning?
* What calculation makes the most sense on your data?

Example functions include:
* The sum, average, minimum, or maximum of a column.
* The shortest or longest word in a column.
* The number of times a specific value appears in a column.

### Test
* How can you demonstrate that all your class methods function correctly?
* How can you demonstrate that your program successfully reads and stores at least 1000 objects from your data file?
* How can you demonstrate that your calculation function works correctly?
* How can you demonstrate that overriding the `<<` operator works as it should?
* Print stuff out! Write tests! Make assertions!

### Report 
You must write a report about your project. Answer the following questions directly in _this section_ of the README file:
* what each of the attributes of your data set represent,
* where you got your data,
* why you chose that data set,
* how the entries are ordered by default,
* how you know your functions and calculations work correctly, and
* why you chose the calculation you did for your data set.

## What to submit

You must include your source files, your data file(s), CMakeLists.txt, and your updated README.md file that contains your report to your repository.

## What not to submit

* Do not submit anything not specifically requested.
* Do not submit reports in DOCX or other word-processing format.
* Do not submit auxiliary files created by your IDE.
* Do not submit build artifacts, intermediates, or executables.

## Where to submit

Submit to Gradescope via link on Brightspace. Use the GitHub repository link, and please double-check to ensure correct files are submitted.

## Code 
* Please follow the style guide for this course.
* Use C++ 17 Standard.
* We will compile using CLion, or if that fails we may try compiling from the command line.
However, it is in your best interest to _stick to the basics and make sure your code complies and runs without any fuss_.

**Note: Any code that was not authored by you or the instructor must be cited in your report. This includes the use of concepts not covered at this point in this course.**

## Grading

| Points |   | Item                                                                                                                                                                                                                                                                                               |
|-------:|---|:---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
|      5 |   | You submitted all files in the correct formats. You did not submit any files that were not requested.                                                                                                                                                                                              |
|     15 |   | Your data set satisfies all requirements (at least 1000 items, at least five attributes, at least one unique attribute, at least one numeric attribute, at least one text attribute).                                                                                                              |
|     10 |   | Your program compiles, runs, and exits without error.                                                                                                                                                                                                                                              |
|     10 |   | Your code is readable, follows good code style and standards\\ for this class, uses consistent naming, and has comments where appropriate. Your name must appear in a comment or doc block atop each source code file.                                                                             |
|     15 | | Your class satisfies the requirements (at least five fields, at least one numeric field, at least one string field). Your class should include necessary constructor(s) and appropriate accessors (setters and getters). Your class should overload the `<<` operator for pretty-printing objects. |
|     15 | | You have one global function to read your data into a vector. This function reads your data correctly into a vector of 1000 or more objects.                                                                                                                                                       | 
|     10 | | You have one global function to perform some meaningful calculation on the objects stored in the vector and display the result.                                                                                                                                                                    |
|     10 | | You test / exercise your code to demonstrate that everything works correctly.                                                                                                                                                                                                                      |
|     10 | | Your report satisfies all requirements, answers all questions clearly, and is well-written.                                                                                                                                                                                                        |
|    100 | | TOTAL                                                                                                                                                                                                                                                                                              |



