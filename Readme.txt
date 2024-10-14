C compiler implementation

- Jeffrey Daniel Leiva Cascante
- Lucas Alexander Oviedo Castro

This project builds on previous ones, this one adds the semantic analysis functionality.

The project includes features like preprocessing, in which "include" and "define" directives are pre-processed before entering the lexical analysis phase.
The lexical analysis phase is performed using a scanner built with the Flex (Fast lexical analyser generator) tool.
The syntactic analysis phase is performed using a parser built with the Bison tool.
Other techniques are applied to make the semantic analysis, through the use of data structures like Hash Tables and Stacks. 
The project also includes error reporting for all the phases. 
