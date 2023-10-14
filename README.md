Algorithm: 

A) Class to calculate volume-

1. Start
2. Declare variables:
3. h for height
   l for length
   w for width
4. vol for volume
5. Display "Enter the value of height:"
6. Read h from the user.
7. Display "Enter the value of length:"
8. Read l from the user.
9. Display "Enter the value of width:"
10. Read w from the user.
11. Create a Cube object, cube1, using the constructor with h, l, and w as arguments.
    Call the calculateVolume method of cube1 to calculate the volume and store the result in vol.
12. Display "The volume of the cube is: " followed by the value of vol.
13. End

B) Constructor & Destructor-

Start
Include the necessary header files.
Define a class Cube.
a. Declare private member variables: height, length, and width.
b. Declare a public constructor to initialize the cube's dimensions.
i. Prompt the user to enter the height, width, and length.
c. Declare a destructor to display a message (optional).
d. Declare a public member function vol to calculate and return the volume of the cube.
i. Calculate the volume as height * width * length.
ii. Display the volume.
e. Declare a public member function setheight to update the height of the cube.
i. Prompt the user to enter the updated height.
In the main function:
a. Create an instance of the Cube class called cube1.
b. Call the constructor of cube1 to initialize its dimensions by taking user input.
c. Calculate and display the volume of cube1 using the vol method.
d. Print a newline for formatting.
e. Call the setheight method to update the height of cube1.
f. Calculate and display the updated volume of cube1 using the vol` method.
g. Print a newline for formatting.
End

C) Date Validation-

Start
Include the necessary header files.
Define a class validity.
a. Declare public member variables: dd (day), mm (month), yyyy (year).
b. Declare a public member function date to take input for the date in the format DD/MM/YYYY.
i. Prompt the user to enter the date.
c. Declare a public member function check to check the validity of the date.
i. Check if the month is within the range [1, 12].
ii. Check if the day is valid for the given month based on the number of days in that month.
iii. Consider leap years for February.
iv. Display "Date is valid" if all checks pass; otherwise, display "Date is invalid".
In the main function:
a. Create an instance of the validity class called verify.
b. Call the date method to input a date.
c. Call the check method to verify the validity of the entered date.
End

D) Leap Year-

Start
Include the necessary header files.
Define a class calendar.
a. Declare public member variables: dd (day), mm (month), yyyy (year), yy (unused variable).
b. Declare a public member function fun to take input for the date, month, and year.
i. Prompt the user to enter the day, month, and year.
c. Declare a public member function result to check if the entered year is a leap year.
i. Check if the year is divisible by 4 and not divisible by 100, or if it's divisible by 400.
ii. Display "It is a leap year" if it's a leap year, or "It is not a leap year" if it's not.
In the main function:
a. Create an instance of the calendar class called leap_year.
b. Call the fun method to input the date, month, and year.
c. Call the result method to determine if the entered year is a leap year.
End
