# Employee-Manager

## What is this?

This is a small program called Employee Manager, which showcases a data structure I created. While the program that tests it is very simple and doesn’t use all the functions, the data structure itself is much more in depth. It mimics a data structure that might be used by a company that wants to monitor employee and customer data, and most of the classes are related to others with inheritance. Here is a small diagram I made showing the different relationships: (with child classes higher than parent classes)


```
           Customer       Employee      (Employee class has Project
              |              |           and Location class data, which
       --------------|--------------     is all Customer class has)
       |         |        |        |
   Project   Location   Resume   Schedule
                          |
                    -------------
                    |           |
                 Education    Skills
```


(Due to time constraints, I wasn’t able to make a graphic which would better explain this relationship)

## How could it be improved?

This project suffered greatly from time constraints, and a lot of the code is lacking because of it. The data structure seemed simple on paper, but once I had actually started coding, it became immediately clear how big the scale of the project actually was, and at that point it was too late to stop. The data structure, while mostly very complete, could have many more constructors to include the parent classes, and the testing program is also very limited in its capabilities and is quite frankly not very good since it was very rushed. Some of these issues include not using all of the data structure functions, not being able to modify multiple aspects of the data structure at once, not being able to display all of the data, not being able to read or write the data to a file, and more. These issues are all very simple however, and would be easily fixed with more development time, which I am not able to give at the moment.
