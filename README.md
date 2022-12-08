# Laboboratory work nr.6: Arhitecture.
## Software Arhitecture MVC
In this laboratory work I decided to implement MVC pattern for it's development process 
and for separating the projects logic.

MVC stands for:

Model - contains all the data about the project.

View - displays the data in the Model component.

Controller - the mediator between Model and View.

## SOLID
- Single Responsability Principle.
- Open-Closed Principle.
- Liskov Substitution Principle.
- Interface Segregation Principle.
- Dependacy Inversion Principle.

I tried as much as possible to implement the solid principles 
into my simulation.I have already unconsciously used two principles
the open-closed and liskov substitution.I removed when
needed code that was not respecting the first rule thus 
I created two more classes Economy and Payment that are now
handling their own responsabilities.I did not use any interfaces
in my simulation so I did not need to worry about the 4th principle.

I have also removed redundant code and now my classes look more lightier
and I believe more clear.


