1. NETWORK 


		//Network access control is another critical component of network configuration. As penetration testers, we should be familiar with the importance of NAC for network security and the different NAC technologies available. These include:

		- Discretionary access control (DAC)
		- Mandatory access control (MAC)
		- Role-based access control (RBAC)









2. CONFIGURING NETWORK INTERFACES 



		//When working with Ubuntu, you can configure local network interfaces using the ifconfig or the ip command. 



		- 'ifconfig'									//to get network information 
		- 'ip addr'										//same result 











3. ACTIVATING NETWORK INTERFACES



		- 'sudo ifconfig eth0 up'								//Activating eth0 NIC
		- 'sudo ifconfig eth0 192.168.1.2'						//Assign IP Address to an Interface
		- 'sudo ifconfig eth0 netmask 255.255.255.0'			//Assign a Netmask to an Interface
		- 'sudo route add default gw 192.168.1.1 eth0'			//Assign the Route to an Interface











4. DNS 



		//Without proper DNS server configuration, devices may experience network connectivity issues and be unable to access certain online resources. This can be achieved by updating the /etc/resolv.conf file with the appropriate DNS server information. The /etc/resolv.conf file is a plain text file containing the system's DNS information




		- 'nano /etc/resolv.conf'									//to check DNS and modify DNS. After completing the necessary modifications to the network configuration, it is essential to ensure that these changes are 
																	//saved to persist across reboots. This can be achieved by editing the /etc/network/interfaces file, which defines network interfaces for Linux-based operating systems. 
		- 'nano /etc/network/interfaces'

																	auto eth0
																	iface eth0 inet static
																	  address 192.168.1.2
																	  netmask 255.255.255.0
																	  gateway 192.168.1.1
																	  dns-nameservers 8.8.8.8 8.8.4.4













5. TROUBLESHOOTING



		//some of the most commonly used tools include:

			- Ping						'ping <remote_host>'
			- Traceroute				'traceroute www.inlanefreight.com'
			- Netstat					'netstat -a'
			- Tcpdump
			- Wireshark
			- Nmap











6. HARDENING 


	//Several mechanisms are highly effective in securing Linux systems in keeping our and other companies data safe. Three such mechanisms are SELinux, AppArmor, and TCP wrappers. These tools are designed to safeguard Linux systems against various security threats, from unauthorized access to malicious attacks, especially while conducting a penetration test. 



		- SELinux //is a MAC system that is built into the Linux kernel. It is designed to provide fine-grained access control over system resources and applications. SELinux works by enforcing a policy that defines the 
		          //access controls for each process and file on the system. It provides a higher level of security by limiting the damage that a compromised process can do.

		- AppArmor //is also a MAC system that provides a similar level of control over system resources and applications, but it works slightly differently. AppArmor is implemented as a Linux Security Module (LSM) and uses 
				//application profiles to define the resources that an application can access. AppArmor is typically easier to use and configure than SELinux but may not provide the same level of fine-grained control.

		- TCP wrappers //are a host-based network access control mechanism that can be used to restrict access to network services based on the IP address of the client system. It works by intercepting incoming network 
					   //requests and comparing the IP address of the client system to the access control rules. These are useful for limiting access to network services from unauthorized systems.






















