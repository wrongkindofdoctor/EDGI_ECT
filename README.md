# EDGI_ECT
EOF/DFT General Interface Ensemble Consistency Test tools for testing Earth system model ( ESM ) answer reproducibility 
## DESCRIPTION
EDGI_ECT is an extension for the EDGI API that is derived from the NCAR python CESM Ensemble Consistency Test (pyCECT) framework used to compare statistics from ESM output variables against ensemble statistics computed from simulations run on a trusted machine with a specific compiler configuration. The pyCECT source code is available at https://github.com/NCAR/PyCECT.
The poster [here](https://github.com/wrongkindofdoctor/EDGI_ECT/blob/master/docs/AGUposter_final.pdf) describes the EDGI API.
## Prerequisites
netcdf-c 4.0 or later
gcc 4.5 or later
## Quickstart
Clone the repository
```
$ cd ${INSTALLDIR}
$ git clone 
```
Run the configure script  
```
$ ./configure --[option 1] --[option 2] ...
```
Run make  
```
$ make check
$ make install
```

