#!/bin/bash
if [ -d "eigen3" ]; then
	echo Eigen3 exists in the directory, skipping clone. Remove directory to clone again.
else
	git clone https://github.com/eigenteam/eigen-git-mirror.git eigen3
fi
source ~/.bashrc
if [ -v IR_LIBRARY_PATH ] 
then
	echo "IR_LIBRARY_PATH already set to '$IR_LIBRARY_PATH'"
else 
	echo export IR_LIBRARY_PATH=`pwd` >> ~/.bashrc
fi
