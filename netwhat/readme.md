1. What is an IP address

 An Internet Protocol address is a number assgined to distinguish computers in the network which uses the Internet Protocol for communication. There are two versions of IP, IPv4 and IPv6.

2. What is a Netmask

 Netmask is a number which substitute network address of the IP to one and others to zero.

3. What is the subnet of an IP with Netmask

 Subnet divides the network logically for efficient address allocations, security and routing efficiency. Subnet mask often uses CIDR notation to use subnetmask to find it's network address. 


4. What is the broadcast address of a subnet

 When subnetting a network not all the subnet addresses are used. The first address is used as network address, and the last is used as broadcast address. Broadcast address is used to send message to all the host in the network. 
 
5. What are the different ways to represent an ip address with the Netmask

 Class and CIDR. Network was devided by first 8 bits by class in early netwrork, naming classes as A, B, --- , E by leading bits 0, 10, ---, 1111. The problem of this notation was IP address exhaustion. Class C used 24 bit field as network address, and 8 bits for host address. So only 256 address were supplied by network. Class B used 16 bits as network address with each network of 2^16 hosts. This made class C is too small, and B too Big for use.
 CIDR, Classless Inter-Domain Routing is flexible way of subnetting network. The number after '/' character shows how many bits are used as subnet address.

6. What are the differences between public and private IPs

 The needs of private IPs are due to IP address extension. Public IP is given by ISP, and unique all over the world. Private IP is virtual IP allocated to a computer in local network by router. The range of private IPs are below. 
    Class A : 10.0.0.0 ~ 10.255.255.255
    Class B : 172.16.0.0 ~ 172.31.255.255
    Class C : 192.168.0.0 ~ 192.168.255.255
Network Address Translation is used to convert private IP to public IP in external communication.

7. What is a class of IP addresses

 Mentioned above.

8. What is TCP

 Transmission Control Protocol is connected-oriented protocol in transport layer. It uses byte stream on connection and supply flow control and congestion control. TCP is reliable transmission when ACK is not sent back retransmission is done. And it is full-duplex, point to point transmission.

9. What is UDP

 User Datagram Protocol is connetion-less protocol in transport layer. It is simple and fast but not reliable. UDP is connected by message stream and does not supply flow/congestion control. Compared to TCP is unicast communication, UDP supports unicast, multicast, broadcast.

10. What are the network layers

 Read question 11

11. What is the OSI model

 Open Systems Interconnection model is a conceptual model that characterises and standardises the communication functions of a computing system without regard to its underlying internal structure and technology. Its goal is the interoperability of diverse communication system with standard communication protocol. Process data unit (PDU) of each layer is important. OSI model has 7 layers. 
 
 Physical layer is where datagram is converted to actual electric signal and sent. PDU is bit, protocols are modem, cable, fiber and devices are hub and repeater.
 Data link layer is responsible for sending data between network devices. It supports flow and error control. A datagram from network layer is encapsulated here called framing. PDU : frame, Protocol : Ethernet, MAC, LAN, Wifi, Device: bridge, switch
 Network layer is responsible for communication between hosts routing data based on logical address. This layer is needed because direct communication between different protocol is impossible. PDU : packet, Protocol : IP, Device : router, L3 switch
 Tranport layer is responsible for communication between processes and flow/error control. PDU: segment, Protocol : TCP, UDP, ARP, RTP, Device : gateway, L4 switch
 Session layer is responsible for connection between application. Protocol : NetBIOS, SSH, TLS
 Presentation layer is responsible for determine data type of users. It converts data to appropriate format. Protocol : JPG, MPEG, SMB, AFP
 Application layer is where directly connected to user. This layer is responsible for sending data to lower layers. Protocol : HTTP, FTP, DNS, DHCP
 
12. What is a DHCP server and the DHCP protocol

 

13. What is a DNS server and the DNS protocol



14. What are the rules to make 2 devices communicate using IP addresses



15. How does routing work with IP



16. What is a default gateway for routing



17. What is a port from an IP point of view and what is it used for when connecting to another device



