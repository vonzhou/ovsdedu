# ignore other protocol flows

#arp
sudo ovs-ofctl add-flow br0 "table=0,dl_type=0x0806,actions=drop"

#DHCP
sudo ovs-ofctl add-flow br0 "table=0,nw_proto=17,tp_dst=67,actions=drop"

# TODO SSH


