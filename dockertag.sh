#!/bin/bash

#print REPOSITORY:TAG
#docker images | awk '{print $1":"$2}' | grep -v REPOSITORY

#1st parameter is the location
tars=`cd $1 | ls | grep tar`

echo $tars

#2nd parameter is the version tag
version_tag=$2

origin_array=()
new_array=()

#load images and record origin tag
for var in ${tars}
do
  origin_tag=$(docker load -i ${var}| grep Loaded | awk '{print $3}')
  origin_array[${#origin_array[*]}]=${origin_tag}
done

echo ${tars}
echo ${origin_array}

#tag images
for var in ${origin_array}
do
  image_name=$(echo $var | awk -F ':' '{print $1}')
  new_tag=$(awk '{print ${image_name}":"${version_tag}}')
  echo $new_tag
  docker tag ${var} ${new_tag}
  new_array[${#new_array[*]}]=${new_tag}
done

#delete origin images
for var in ${origin_array}
do
  docker rmi ${var}
done

docker images
