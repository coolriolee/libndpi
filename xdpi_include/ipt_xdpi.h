#ifndef __IPT_XDPI_H
#define __IPT_XDPI_H

#include "ndpi_main.h"

#define XDPI_VERSION    1.0

#define NDPI_PROTOCOL_LONG_STRING "UNKNOWN","FTP_CONTROL","MAIL_POP","MAIL_SMTP","MAIL_IMAP","DNS","IPP","HTTP","MDNS","NTP",\
    "NETBIOS","NFS","SSDP","BGP","SNMP","XDMCP","SMBV1","SYSLOG","DHCP","POSTGRES",\
    "MYSQL","HOTMAIL","DIRECT_DOWNLOAD_LINK","MAIL_POPS","APPLEJUICE","DIRECTCONNECT","NTOP","COAP","VMWARE","MAIL_SMTPS",\
    "FBZERO","UBNTAC2","KONTIKI","OPENFT","FASTTRACK","GNUTELLA","EDONKEY","BITTORRENT","SKYPE_CALL","SIGNAL",\
    "MEMCACHED","SMBV23","MINING","NEST_LOG_SINK","MODBUS","WHATSAPP_CALL","DATASAVER","XBOX","QQ","TIKTOK",\
    "RTSP","MAIL_IMAPS","ICECAST","PPLIVE","PPSTREAM","ZATTOO","SHOUTCAST","SOPCAST","TVANTS","TVUPLAYER",\
    "HTTP_DOWNLOAD","QQLIVE","THUNDER","SOULSEEK","PS_VUE","IRC","AYIYA","UNENCRYPTED_JABBER","MSN","OSCAR",\
    "YAHOO","BATTLEFIELD","GOOGLE_PLUS","IP_VRRP","STEAM","HALFLIFE2","WORLDOFWARCRAFT","TELNET","STUN","IP_IPSEC",\
    "IP_GRE","IP_ICMP","IP_IGMP","IP_EGP","IP_SCTP","IP_OSPF","IP_IP_IN_IP","RTP","RDP","VNC",\
    "PCANYWHERE","TLS","SSH","USENET","MGCP","IAX","TFTP","AFP","STEALTHNET","AIMINI",\
    "SIP","TRUPHONE","IP_ICMPV6","DHCPV6","ARMAGETRON","CROSSFIRE","DOFUS","FIESTA","FLORENSIA","GUILDWARS",\
    "HTTP_ACTIVESYNC","KERBEROS","LDAP","MAPLESTORY","MSSQL_TDS","PPTP","WARCRAFT3","WORLD_OF_KUNG_FU","SLACK","FACEBOOK",\
    "TWITTER","DROPBOX","GMAIL","GOOGLE_MAPS","YOUTUBE","SKYPE","GOOGLE","DCERPC","NETFLOW","SFLOW",\
    "HTTP_CONNECT","HTTP_PROXY","CITRIX","NETFLIX","LASTFM","WAZE","YOUTUBE_UPLOAD","HULU","CHECKMK","AJP",\
    "APPLE","WEBEX","WHATSAPP","APPLE_ICLOUD","VIBER","APPLE_ITUNES","RADIUS","WINDOWS_UPDATE","TEAMVIEWER","TUENTI",\
    "LOTUS_NOTES","SAP","GTP","UPNP","LLMNR","REMOTE_SCAN","SPOTIFY","MESSENGER","H323","OPENVPN",\
    "NOE","CISCOVPN","TEAMSPEAK","TOR","SKINNY","RTCP","RSYNC","ORACLE","CORBA","UBUNTUONE",\
    "WHOIS_DAS","COLLECTD","SOCKS","NINTENDO","RTMP","FTP_DATA","WIKIPEDIA","ZMQ","AMAZON","EBAY",\
    "CNN","MEGACO","REDIS","PANDO","VHUA","TELEGRAM","VEVO","PANDORA","QUIC","ZOOM",\
    "EAQ","OOKLA","AMQP","KAKAOTALK","KAKAOTALK_VOICE","TWITCH","DOH_DOT","WECHAT","MPEGTS","SNAPCHAT",\
    "SINA","HANGOUT_DUO","IFLIX","GITHUB","BJNP","FREE_205","WIREGUARD","SMPP","DNSCRYPT","TINC",\
    "DEEZER","INSTAGRAM","MICROSOFT","STARCRAFT","TEREDO","HOTSPOT_SHIELD","IMO","GOOGLE_DRIVE","OCS","OFFICE_365",\
    "CLOUDFLARE","MS_ONE_DRIVE","MQTT","RX","APPLESTORE","OPENDNS","GIT","DRDA","PLAYSTORE","SOMEIP",\
    "FIX","PLAYSTATION","PASTEBIN","LINKEDIN","SOUNDCLOUD","CSGO","LISP","DIAMETER","APPLE_PUSH","GOOGLE_SERVICES",\
    "AMAZON_VIDEO","GOOGLE_DOCS","WHATSAPP_FILES","TARGUS_GETDATA","DNP3","IEC60870","BLOOMBERG","CAPWAP","ZABBIX"

#define NDPI_PROTOCOL_SHORT_STRING "ukn","ftp","pop","smtp","imap","dns","ipp","http","mdns","ntp",\
    "netbios","nfs","ssdp","bgp","snmp","xdmcp","smbv1","syslog","dhcp","postgres",\
    "mysql","hotmail","direct_download_link","pops","applejuice","directconnect","ntop","coap","vmware","smtps",\
    "fbzero","ubntac2","kontiki","openft","fasttrack","gnutella","edonkey","bittorrent","skypecall","signal",\
    "memcached","smbv23","mining","nest_log_sink","modbus","whatsappcall","datasaver","xbox","qq","tiktok",\
    "rtsp","imaps","icecast","pplive","ppstream","zattoo","shoutcast","sopcast","tvants","tvuplayer",\
    "httpdl","qqlive","thunder","soulseek","psvue","irc","ayiya","unencrypted_jabber","msn","oscar",\
    "yahoo","battlefield","google+","vrrp","steam","halflife2","worldofwarcraft","telnet","stun","ipsec",\
    "gre","icmp","igmp","egp","sctp","ospf","ipip","rtp","rdp","vnc",\
    "pcanywhere","tls","ssh","usenet","mgcp","iax","tftp","afp","stealthnet","aimini",\
    "sip","truphone","icmpv6","dhcpv6","armagetron","crossfire","dofus","fiesta","florensia","guildwars",\
    "httpactivesync","kerberos","ldap","maplestory","mssqltds","pptp","warcraft3","world_of_kung_fu","slack","facebook",\
    "twitter","dropbox","gmail","googlemaps","youtube","skype","google","dcerpc","netflow","sflow",\
    "httpconnect","httpproxy","citrix","netflix","lastfm","waze","youtubeupload","hulu","checkmk","ajp",\
    "apple","webex","whatsapp","icloud","viber","itunes","radius","windows_update","teamviewer","tuenti",\
    "lotusnotes","sap","gtp","upnp","llmnr","remote_scan","spotify","messenger","h323","openvpn",\
    "noe","ciscovpn","teamspeak","tor","skinny","rtcp","rsync","oracle","corba","ubuntuone",\
    "whoisdas","collectd","socks","nintendo","rtmp","ftpdata","wikipedia","zmq","amazon","ebay",\
    "cnn","megaco","redis","pando","vhua","telegram","vevo","pandora","quic","zoom",\
    "eaq","ookla","amqp","kakaotalk","kakaotalkvoice","twitch","dohdot","wechat","mpegts","snapchat",\
    "sina","hangoutduo","iflix","github","bjnp","free205","wireguard","smpp","dnscrypt","tinc",\
    "deezer","instagram","microsoft","starcraft","teredo","hotspotshield","imo","googledrive","ocs","office365",\
    "cloudflare","ms_one_drive","mqtt","rx","applestore","opendns","git","drda","playstore","someip",\
    "fix","playstation","pastebin","linkedin","soundcloud","csgo","lisp","diameter","applepush","googleservices",\
    "amazonvideo","googledocs","whatsappfiles","targusgetdata","dnp3","iec60870","bloomberg","capwap","zabbix"

typedef struct _ipt_xdpi {
    NDPI_PROTOCOL_BITMASK protomask;
}ipt_xdpi_t;

#endif//__IPT_XDPI_H
