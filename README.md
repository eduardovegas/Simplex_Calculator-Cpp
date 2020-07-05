# Simplex Calculator in C++
This project implements the Simplex Algorithm for solving Linear Programming problems.

Compiling
==========
A serial executable is obtained by using your favourite C++ compiler to compile and link the downloaded files. For example, using g++:

## g++ main.cpp -o main.exe

After done compiling, execute the 'main' program passing the PL problem data file as an argument, like this:

## ./main.exe entrada/DadosXX.esd

If no argument is passed, the program will read the PL problem from the user itself.

Creating the Data
==================
To pass the problem as an argument to the calculator, it needs to be in the specific format below, so that the Data class can read the file correctly.

**NAME:** name of your file or problem.

**p_t:** especifies the problem type -> (0) for Maximization, or (1) for Minimization.
**n_v:** number of variables in the Objective Function (OF).
**n_c:** number of constraints.

**Z = XX XX XX..**    (OF)
**XX XX XX.. < RHS**  (Constraint 1)
**XX XX XX.. = RHS**  (Constraint 2)
**XX XX XX.. > RHS**  (Constraint 3)

'<' is read as '<='.
'>' is read as '>='.
RHS holds the value of the Right-Hand Side of that constraint.
Each XX specifies the coefficients of the variables from the OF.

Customizations
===============
To not show the Tableau of each iteration on the Simplex calculator, use '//' to comment all print line and '**printarTabela()**' at '**Simplex::calcularSimplex()**'.

To not go through the Right-Hand Side analysis, use '//' to comment '**rhsAnalysis()**' at '**Simplex::printarResultado()**'.
