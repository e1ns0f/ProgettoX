mkdir exe
mkdir input
mkdir exe/inputGenerator
rm -f exe/inputGenerator/inputGenerator.sh

g++ src/inputGenerator.C -o exe/inputGenerator/inputGenerator.sh

