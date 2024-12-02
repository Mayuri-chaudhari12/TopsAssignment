//Objective:Highlight the difference between POP and OOP approaches.
/*
1. Real-World Modeling

- POP:proceduaral programing
  - There is no direct analogy with real-world entities. Data is just a set of variables, 
  and procedures manipulate them without necessarily aligning with real-world objects.

- OOP: object oriented programing language
  - Real-world modeling is at the core of OOP. Classes represent real-world concepts,
   and objects are instances of those classes. For example, a class `Car` might have attributes like `color`, `
   model`, and `engine`, and methods like `start()` or `stop()`.


 2. Data Security

- POP:
  - Data is often global and can be accessed or modified by any function. This can lead to accidental
   modification or errors if not carefully managed.
  
- OOP:
  - OOP emphasizes data protection through access modifiers, which control how data is accessed. 
  For example, a class can use **private** attributes that can only be accessed through methods
   (getters and setters).


 3. Maintenance and Scalability

- POP:
  - As the codebase grows, it can become more difficult to maintain because the code is 
  function-centric, and data is not well-organized.
  
- OOP:
  - OOP tends to scale better for large applications because classes and objects provide 
  a clear structure, making the code more maintainable, extendable, and easier to modify.



 Summary Table

| Feature                        | POP (Procedural-Oriented)                     | OOP (Object-Oriented)                         |
|--------------------------------|-----------------------------------------------|-----------------------------------------------|
| Focus                          | Functions and procedures                      | Objects and classes                          |
| Data and Functions             | Data and functions are separate               | Data and functions are encapsulated in objects|
| Code Reusability               | Through functions                             | Through inheritance and polymorphism          |
| Encapsulation                  | No encapsulation                              | Data is encapsulated and accessed via methods |
| Modularity                     | Function-based                                | Object-based, with classes as building blocks |
| Real-World Modeling            | Not explicitly modeled                        | Models real-world entities using objects     |
| Maintenance                    | Can become difficult with complex programs    | Easier due to modular and structured design   |
| Data Access Control            | No access control                             | Access control using access modifiers        |

*/