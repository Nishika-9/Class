Algorithm: 

A) Class to calculate volume

Start
Declare variables:
h for height
l for length
w for width
vol for volume
Display "Enter the value of height:"
Read h from the user.
Display "Enter the value of length:"
Read l from the user.
Display "Enter the value of width:"
Read w from the user.
Create a Cube object, cube1, using the constructor with h, l, and w as arguments.
Call the calculateVolume method of cube1 to calculate the volume and store the result in vol.
Display "The volume of the cube is: " followed by the value of vol.
End

B) Constructor & Destructor

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

C) Date Validation




