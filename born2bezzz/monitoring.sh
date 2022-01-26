#!/bin/bash
arch=$(uname -a)
pcpu=$(lscpu|grep '^Core(s) per socket'|awk '{print ($4)}')
vcpu=$(lscpu|grep '^CPU(s)'|awk '{print ($2)}')
umem=$(free -m|grep "Mem:"|awk '{print ($3 "/" $2)}')
pmem=$(free|grep "Mem:"|awk ' {printf("%.2f"), $3/$2*100}')
udisk=$(df -Bm|grep '/dev'|grep '/boot'|awk '{aux += $3} END {print aux}')
fdisk=$(df -Bg|grep '/dev'|grep '/boot'|awk '{print $2}')
pdisk=$(df -Bm|grep '/dev'|grep '/boot'|awk '{aux1 += $3} {aux2 += $2} END {printf("%d"), aux1/aux2*100}')
cpu=$(top -bn1|grep "%Cpu"|cut -c 9-|xargs|awk '{printf("%.1f"), $1 + $3}')
lstbt=$(who -b|awk '{print $3 " " $4}')
nlvm=$(grep "LVMGroup" /etc/fstab|wc -l)
lvm=$(if [ $nlvm -gt 0 ]; then echo "yes"; else echo "no"; fi )
tcp=$(cat /proc/net/sockstat|awk '$1 == "TCP:" {print $3}')
user=$(users|wc -w)
netip=$(hostname -I)
netmac=$(ip link show|grep "link/ether"|awk '{print $2}')
sud=$(grep -a "COMMAND" /var/log/auth.log|wc -l)

wall :"	#Architecture: $arch
	#CPU physical : $pcpu
	#vCPU : $vcpu
	#Memory Usage: ${umem}MB ($pmem%)
	#Disk Usage: $udisk/$fdisk ($pdisk%)
	#CPU load: $cpu%
	#Last boot: $lstbt
	#LVM use: $lvm
	#Connexions TCP : $tcp ESTABLISHED
	#Userlog: $user
	#Network: IP $netip ($netmac)
	#Sudo : $sud cmd"