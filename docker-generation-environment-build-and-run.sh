# Author: Christoph Pilz

docker build -t vehicle_captain/vcits_generation_docker:0.1 -f Dockerfiles/Dockerfile.environment .
docker run -t -d --name vcits vehicle_captain/vcits_generation_docker:0.1
