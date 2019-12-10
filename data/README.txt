README

#sample data
Three oriented shapes are provided: a cube, a fandisk and the brassempouy statue:

brassempouyr.xyz
cuber.xyz
fandiskr.xyz

noisy versions of these shapes are also provided:

brassempouy_noisy.xyz
cube_noisy.xyz
fandisk_noisy.xyz

#command line parameters for the sample noisy datasets

bilateralfilter brassempouy_noisy.xyz brassempouy_bilat.xyz -r 0.5 -n 0.5 -p -N 1 -R

bilateralfilter cube_noisy.xyz cube_bilat.xyz -r 0.03 -n 0.05 -p -R -N 2

bilateralfilter fandisk_noisy.xyz fandisk_bilat.xyz -r 0.1 -n 0.05 -p -R -N 1
