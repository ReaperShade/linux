1. CONTAINERIZATION 


		//Containerization is a process of packaging and running applications in isolated environments, such as a container, virtual machine, or serverless environment. Technologies like Docker, Docker Compose, and Linux Containers make this process possible in Linux systems.







2. DOCKER 


		//Docker is an open-source platform for automating the deployment of applications as self-contained units called containers. It uses a layered filesystem and resource isolation features to provide flexibility and portability. 



		INSTALLING DOCKER

		
		
		#!/bin/bash

		# Preparation
		sudo apt update -y
		sudo apt install ca-certificates curl gnupg lsb-release -y
		sudo mkdir -m 0755 -p /etc/apt/keyrings
		curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
		echo "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null

		# Install Docker Engine
		sudo apt update -y
		sudo apt install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin -y

		# Add user htb-student to the Docker group
		sudo usermod -aG docker htb-student
		echo '[!] You need to log out and log back in for the group changes to take effect.'

		# Test Docker installation
		docker run hello-world