1. APT

 
             //advanced packing tools, apt almacena sus repositorios oficiales en etc/apt/sources.list
             //apt-get almacena sus repositorios no oficiales en /etc/apt/sources.list.d
 
 
             - apt
             - apt update                                    //update the respositories
             - apt upgrade                                   //update the packages
             - apt dist-upgrade                              //update the packages including the system package
             - apt full-upgrade -y                           //full update
             - apt install                                   //install the package
             - apt remove
             - apt purge                                     //remove and purge the packages
             - apt autoremove                                //Delete the dependencies
             - apt searchpackage                             //search a package
             - apt show package                              //show a package
             - ap autoremove                                 //to remove the unneeded packages, after you perform the upgrade.
             - apt list --installed                          //review all packages installed
             - apt list                                      //to review all packages.







2. DPKG

 
            //Utilidad para instalar y mantener paquetes en sistemas con .deb
 
 
             - dpkg -i                    //Install package .deb
             - dpkg -l                    //list the package information
             - dpkg -r                    //delete the configuration of a specific package
             - dpkg -P                    //purge the package
             - dpkg -x                    //descompress the package
             - dpkg-reconfigure           //reconfigure the package, useful to new installations
             - dpkg-econfigure debconf    //set an interfaz to reconfigure the package
 
             - 'wget http://archive.ubuntu.com/ubuntu/pool/main/s/strace/strace_4.21-1ubuntu1_amd64.deb'    //install the package from a source
 









3. YUM

 
             //ara repositorios .rpm
 
 
             BASIC COMMANDS
 
             - /etc yum.conf                    //establece el log
             - /etc/yum.repository.d/           //establece los repository
             - yum install                      //install the package
             - yum search paquetes              //search a package
             - yum info package                 //show information about package
             - yum remove paquete               //remueve un paquete
             - yum clean all                    //limpia los paquete
             - yum update                       //update the repository
 
 









4. RMP

 
             - rpm -i                    //instala el paquete
             - rpm -u                    //list the paquete
             - rpm -F                    //actualiza los paquete
             - rpm -e                    //elimina el paquete
             - rpm -q                    //informacion sobre el paquete
 
 
 









5. APTITUDE


            //Interfaz para manejar los paquetes
 
             - u                                   //actualiza los paquetes desde la interfaz
             - U                                   //actualiza los paquetes
             - /                                   //busca un paquete
             - g
 






 
 
 



6. PIP


 
             - //Pip is a Python package installer recommended for installing Python packages that are not available in the Debian archive. It can work with version control
             - //repositories (currently only Git, Mercurial, and Bazaar repositories), logs output extensively, and prevents partial installs by downloading all 
             - //requirements before starting installation.
 







