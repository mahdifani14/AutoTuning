# AutoTuning
We are going to create an Auto-Tuning chain to optimize software execution and compilation time upon heterogeneous systems.
## Guidline
####Run Orio Tool
gcc -o app app.c
<br>orcc -v app.c
####To Evaluate the Speed-Up
<br>perf stat -o profile.txt -r 3 -e task-clock -x : ./a.out
