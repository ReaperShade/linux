1. TCP WRAPPERS 


		//TCP wrapper is a security mechanism used in Linux systems that allows the system administrator to control which services are allowed access to the system. It works by restricting access to certain services based on the hostname or IP address of the user requesting access.




		- '/etc/hosts.allow'						//file specifies which services and hosts are allowed access to the system


			# Allow access to SSH from the local network
			sshd : 10.129.14.0/24

			# Allow access to FTP from a specific host
			ftpd : 10.129.14.10

			# Allow access to Telnet from any host in the inlanefreight.local domain
			telnetd : .inlanefreight.local



		- '/etc/hosts.deny'							//specifies which services and hosts are not allowed access


			
		# Deny access to all services from any host in the inlanefreight.com domain
		ALL : .inlanefreight.com

		# Deny access to SSH from a specific host
		sshd : 10.129.22.22

		# Deny access to FTP from hosts with IP addresses in the range of 10.129.22.0 to 10.129.22.255
		ftpd : 10.129.22.0/24











2. FIREWALL (IPTABLES)



		//The iptables utility provides a flexible set of rules for filtering network traffic based on various criteria such as source and destination IP addresses, port numbers, protocols, and more. There also exist other solutions like nftables, ufw, and firewalld. Nftables provides a more modern syntax and improved performance over iptables. 



		- 'sudo iptables -A INPUT -p tcp --dport 22 -j ACCEPT'
		- 'sudo iptables -A INPUT -p tcp -m tcp --dport 80 -j ACCEPT'




		Component	Description
		Tables		//Tables are used to organize and categorize firewall rules.
		Chains	    //Chains are used to group a set of firewall rules applied to a specific type of network traffic.
		Rules		//Rules define the criteria for filtering network traffic and the actions to take for packets that match the criteria.
		Matches	Matches are used to match specific criteria for filtering network traffic, such as source or destination IP addresses, ports, protocols, and more.
		Targets	Targets specify the action for packets that match a specific rule. For example, targets can be used to accept, drop, or reject packets or modify the packets in another way.