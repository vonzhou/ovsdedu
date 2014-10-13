#!/bin/sh
#./configure --with-linux=/lib/modules/`uname -r`/build
sudo make && make install
sudo insmod datapath/linux/openvswitch.ko
sudo mkdir -p /usr/local/etc/openvswitch
sudo ovsdb-tool create /usr/local/etc/openvswitch/conf.db /usr/local/share/openvswitch/vswitch.ovsschema
sudo ovsdb-server --remote=punix:/usr/local/var/run/openvswitch/db.sock --remote=db:Open_vSwitch,manager_options --private-key=db:SSL,private_key --certificate=db:SSL,certificate --bootstrap-ca-cert=db:SSL,ca_cert --pidfile --detach
sudo ovs-vsctl --no-wait init
sudo ovs-vswitchd --pidfile --detach --no-chdir
sudo ovs-vsctl add-br br0
sudo ovs-vsctl add-port br0 eth0
sudo ovs-vsctl add-port br0 eth1


sudo ifconfig br0 192.168.4.211 netmask 255.255.255.0
sudo ovs-vsctl set-controller br0 tcp:127.0.0.1:6633
