SBX_NAME	= sandbox
SBX_IMG		= $(SBX_NAME)
SBX_PATH	= src
SBX_VOL		= 

# PORT_SBX= -p 443:443

SBX_BUILD_FLAG= -t $(SBX_NAME) $(SBX_PATH)

# SBX_RUN_FLAG= -d --rm --name $(SBX_NAME) $(PORT_SBX) $(SBX_PATH)
SBX_RUN_FLAG= -d --name $(SBX_NAME) $(SBX_IMG)

all:
	@echo "docker:"
	@echo "\tbuild run rm shut re"
	@echo "status:"
	@echo "\tls"
	@echo "reset:"
	@echo "\treset"

ls:
	@echo "\033[1;32m"
	@docker ps -a
	@echo "\033[1;33m"
	@docker image ls
	@echo "\033[1;34m"
	@docker volume ls
	@echo "\033[1;35m"
	@docker network ls
	@echo "\033[1;36m"
	-docker logs $(SBX_NAME)
	@echo "\033[0m"

build:
	docker build $(SBX_BUILD_FLAG)
run:
	docker run $(SBX_RUN_FLAG)
stop:
	-docker stop $(SBX_NAME)
rm: stop
	-docker rm $(SBX_NAME)

reset: rm
	-docker image rm -f $(SBX_IMG)
# 	-docker network prune -f
# vreset: reset
# 	-docker volume rm $(SBX_VOL)

# 	-docker volume prune -a -f
# 	-docker system prune -a -f

re: rm build run