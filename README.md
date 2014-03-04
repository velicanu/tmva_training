tmva_training
=============

to compile:
```
g++ run_TMVA_training.C $(root-config --cflags --libs) -lTMVA -Werror -Wall -O2 -o "run_TMVA_training.exe"
```

then run via:

```
./run_TMVA_training.exe <ieta> <ipt> <ialgo>
```
