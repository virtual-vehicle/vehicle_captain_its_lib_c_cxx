# Author: Christoph Pilz

docker build -t vehicle_captain/vcits_generation_demo_docker:0.1 -f Dockerfiles/Dockerfile.demo .
docker run -t -d --name vcits_demo vehicle_captain/vcits_generation_demo_docker:0.1