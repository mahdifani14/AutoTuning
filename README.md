# AutoTuning
We are going to create an Auto-Tuning chain to optimize software execution and compilation time upon heterogeneous systems.
## Guidline
####Run Orio Tool
gcc -o app app.c
<br>orcc -v app.c
####Orio Perf-Param
<a href="https://github.com/brnorris03/Orio/blob/master/orio/module/pluto/pluto.py">The module link</a>
####To Evaluate the Speed-Up
perf stat -o profile.txt -r 3 -e task-clock -x : ./a.out
####For Ploting the Result
By using gnuplot:<br>
<a href="https://www.cs.hmc.edu/~vrable/gnuplot/using-gnuplot.html">Click here to visit the Website</a>
