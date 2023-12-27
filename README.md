# Linux Kernel Module Example
## How to build
```
make KERNELVER=$(uname -m)
```
### Using dkms
```
dkms install $PWD
```
## Loading / Unloading
```
insmod test # load
rmmod test # unload
```
