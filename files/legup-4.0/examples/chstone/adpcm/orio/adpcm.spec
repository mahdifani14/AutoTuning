spec unroll_vectorize {
 def build {
   arg build_command = 'gcc -O0';
   arg libs = '-lrt';
 }
 def performance_counter {
   arg method = 'bgp counter';
   arg repetitions = 35;
 }
 def performance_params {
   param UF[] = range(1,11);
   param VEC[] = [False,True];
   param CFLAGS[] = ['-O0', '-O1','-O2','-O3'];
   #constraint divisible_by_two = (UF % 2 == 0);
 }
 def input_params {
   param SIZE[] = [100];
   param IN_END[] = [100];
 }
 def input_vars {
   decl dynamic double compressed[SIZE] = random;
 }
 def search {
  arg algorithm = 'Randomsearch';
  arg total_runs = 50;
 }
}
