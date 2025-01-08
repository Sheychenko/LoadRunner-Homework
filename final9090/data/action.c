Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("131.0.2903.112", 
		"URL=https://config.edge.skype.com/config/v1/Edge/131.0.2903.112?clientId=748690809752085297&agents=EdgeRuntime%2CEdgeRuntimeConfig%2CEdgeDomainActions&osname=win&client=edge&channel=stable&scpfre=0&osarch=x86_64&osver=10.0.22631&wu=1&devicefamily=desktop&uma=0&sessionid=158&mngd=0&installdate=1694958418&edu=0&bphint=2&soobedate=1694958271&fg=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Edge-User-Anid", 
		"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.112");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJ2VzJmMlRjbFFqN0V2UW1iemZaQlJiYnpsTkdNcU1VYkFqL3VzSzdlTStnPVwiIiwiNiI6InN0YWJsZSIsIjciOiI2Nzg2MDQ4MzI3NjkiLCI5IjoiZGVza3RvcCJ9");

	web_url("v3", 
		"URL=https://edge.microsoft.com/serviceexperimentation/v3/?osname=win&channel=stable&osver=10.0.22631&devicefamily=desktop&installdate=1694958418&clientversion=131.0.2903.112&experimentationmode=2&scpguard=0&scpfull=0&scpver=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"702b023a,a74ddd5e,925773ca,6c715cfb,c1350ab9,3f6a1a2,f95e5542,322c815,dee07e4,93277d03,b9047d,fe484d33,7727e674,1baafbd5,d54f5dd3,4e39dc0e,c2f48bc1,76e9a798,59e5636d,cc2ca015,51e941e0\",\"enable_features\":\"ddfd6cd3,eb6bda0a,27e96171,54acf997,9f28e3fd,1ff9bef0,4cb0a145,6c138508,ab423f01,fbcd420a,f2ce36eb,d20a5ccf,81f32c3b,ab447047,a20d9658,2681f34b,3e592ade,383c38d3,ff2c204,2c4eca72,66aaf0d8,c9b1eff3,69bc2e54,c7f02517,508f3c74,54026607,24b90b43,fc9ed8aa,75b1b341,"
		"1207cc22,31eb1075,18a22b0d,3891021f,2c975da3,2373949a,a976f7f5,55a5f854,5cfd95dc,7407dec5,112da081,974a1f21,21714a50,95a29f90,177b250e,a49949fb,9e8c649c,bf8cde40,66f69762,df9dd966,ee446086,4ab9326a,99e16ee6,ff424117,45371e92,12b79225,bf158d94,cc83e0ed,818cc3e5,55b8f41b,4ff83a15,6c603e1e,17fcb4b7,4d578363,f26b1d9f,e28a1926,e2a8ee65,cb46dffb,f7a7d752,841beaf9,ace2c02,badd9207,62fd93b7,715909a6,f2462fc7,ac6af412,d29e7da8,792fbf1a,72ca7b98,d56ab6df,43d8ef41,9f497c3b,951654f3,75888302,a1c02b9b,8b8dd9d3"
		",aa5e60d5,451171d4,3faf1b94,6911c10f,2b99039a,d5c4bb55,1c6d05a2,3c59dfce,e02966fa,282948aa,e066252c,609df054,b05c236d,126803bb,8f5ff88b,1c49ec40,50cbb1f,a1d4ae4,67815f60,8b16b1a4,3e1e1ad1,3061cce0,839906b2,8b944d27,15b354,15a8d884,9961d8da,6fce5c2c,d5427798,1dc4660d,1d4568d,8fcfcba7,ffdec9de,2894fa9e,7ee22832,6bdf2e51,9c2a448f,498b0a6\",\"filter\":{\"version\":\"131.0.2903.112\"}}", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJ2VzJmMlRjbFFqN0V2UW1iemZaQlJiYnpsTkdNcU1VYkFqL3VzSzdlTStnPVwiIiwiNiI6InN0YWJsZSIsIjciOiI2Nzg2MDQ4MzI3NjkiLCI5IjoiZGVza3RvcCJ9");

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.112");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("EdgeFeatureFlags", 
		"{\"ExtensionUseNewStoreKeys\":true,\"UseHttpsForDownload\":true}");

	web_add_header("MS-CV", 
		"oPaNNAIK+MmuqEnPzZWKq6");

	web_add_header("Update-Interactivity", 
		"bg");

	web_url("crx", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=131.0.2903.112&lang=ru&acceptformat=crx3,puff&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAgALBAAUWkziSC7RbDJKS1VkhugDegv7L0eAAEiIJDr/r+GUMrrxvY2oGKupn3a/qjceR4KEzCfsnqBv9T+YoFEukpOS3VXDq90tNHHMhDwegwpDjuL4iYSqzf2X6bOSp49KPooL6o1AJE2Ia7QO5EyW2yyBOsvbFdJPZ+n1rYVCUDZjSp/Jvn/WIy6j9/l8/kh5VtzfYh2kwh2DEGYAABBdPmoMri1D/CFc7YSHam7dIAKUKR21Q650cm/vpw/5wzIyQf+2mNqDQgCJl989gwE66MTqeKaks/6njrMRIeNndjK5zGSnjtdVD1tEH0+zK7y2VRfQ1A/IF4p3PSiwXgcO+e24uRRJCbBD5jAj9EkY7WATLV2tMCxZ6ry2Sk2M7y9m3Crg7N6CjiORTX1etL2QNMMghHrwzuJ6T48SngATV/crdIM+"
		"BjYUjRMEYSbIpkWeMD7BzutsxEKPJntZ0rv0ncT5Q4Jz0XSZOVhHAItzRjk1EutZH11wjMrXWDS0Aj0V+592O4ybrLxifexx1yaGeHW3sjO2saLW4l8S0t1Ky2Cc6iElUHirNuhhr+AkyhEVekMBbw/I5Nl0CuLVkHQIwWIq5zj1E3g72OlwO8GvjbOCepV3RDvpz+LV2e2rnRj4iyDcR3FTUol7jDM3RmDcfH/X+LmqhOVZOCHXXloEzDm7O/trZCwdkOMGekENaYihGvIlOuv1hdjlkdVpMZj2Zp2pIGWlFXDxDXuFw4mnNDbYLNzWC2RI+ab+RKmeEKrA2wN3UPAGAbsb0mqQFG4BdrMBDo5QN1RHhGC5mcHPOb2eo6ZL0LwJT9n5oKH0b78DaNLP0G++mlW+uOu2gy2fMOfUiFDmng/o1TvSUH412tMiAYAX3xkr+9Z+PDt/tNtynzbK/ZFVFOc5jmLGO+"
		"IEglqNMUu7YN47ihcHdNwXWes8q2DKIApcEPSdBPSY0R7NVQI=&p=");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.112");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_url("signin", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Search-RPSToken", 
		"t=EwDYAqyMBAAUWkziSC7RbDJKS1VkhugDegv7L0eAALuJpX2ww/JN/oG9EGASpSlX15I4D0thmKs2+1qnrBx1f35vbgvi5e4cBgvYv+F8VEpfqRFvUAsVxZRCghMB288xMYRztx9ftpL0z7sb4i0vqSyOWrOr/EZvvCXPT5u40IXcgrNp+Ui1ddwHR7o7TAvF66pHnuZq5Uyu/l21M6ojEGYAABCUFxA5+tN2g7Z6uK3K3dP/IAIfQNCV2asvQMW/ymvxBAkZJMbpm0y1q5aPM/UiNgnvnSw50YMLeaSgNhnJs2Js0i1XXQEKI+bIm9AkLCGFII+1+qUhlryMj1jZguWfGzeK7uqk74xtVQo920VR1DlM2HEHjhImLYG+xrpXI6VmqhmXPFkwcwoRLg1aBxU4D7oTeiLQqUF97yt1ys90WBIvB/8jNIwTfPEjdTl0oslnK6zpiZZfEGUMk/"
		"ikUKWrpOCgcJi1yk9r93MiJ4UjRgdgz362eUmj5XJyAXiNftpo3xhSeCJSTg8h6EFgxOyXQocusuUrQOw+IQSUeR3EAaCl8ZcdEFelLj+uMU5lsWSLhxjWp0yaQUw+vpFIqGwppeIzz63ZLoXrWS8nUM7DKi705pAKuLiEMKQ0bYCZSfe81Qb9pvXt8e10Aao3g9MCAjH4KfS0reJl9D5eGjtMNjgMeW51QWAMVaBaBJAwpKA8JQ7QtdWfH//EJZQRORGzMc5IEg7TWfNITP+tcynnNEMPNHgo17AxmVqPHYqEzg+5P5e8ISPY0LA9z/5ufDzHed+DGk9LLialrCFR+QqLmNE5+EyS1oxeu8lJRMHnO/3NDHzdC3Yy6KV6QJVKW0uS4sAueJ/dhI1YSEonpvlsn50x1NUucG5yCyDEl8rSc5dehp1djjcMwZw8wzGRuTKLO9SsbDxQoeIX2QWq/"
		"XDO0HMQW0fJh0Xs0EaHQIqFvGmZ4vIFVQI=&p=");

	web_url("signin_2", 
		"URL=https://copilot.microsoft.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_url("shoppingsettings", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJ2VzJmMlRjbFFqN0V2UW1iemZaQlJiYnpsTkdNcU1VYkFqL3VzSzdlTStnPVwiIiwiNiI6InN0YWJsZSIsIjciOiI2Nzg2MDQ4MzI3NjkiLCI5IjoiZGVza3RvcCJ9");

	web_custom_request("rewardsUserInfo_2", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"5A2B8DB7CDA5D9D9E95088C2FFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_add_header("X-AnchorMailbox", 
		"CID:f070a191a34bd5e7");

	web_url("V1Profile", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Client-Data", 
		"eyIxIjoiMCIsIjEwIjoiIiwiMiI6IjAiLCIzIjoiMCIsIjQiOiI3NDg2OTA4MDk3NTIwODUyOTciLCI1IjoiXCJ2VzJmMlRjbFFqN0V2UW1iemZaQlJiYnpsTkdNcU1VYkFqL3VzSzdlTStnPVwiIiwiNiI6InN0YWJsZSIsIjciOiI2Nzg2MDQ4MzI3NjkiLCI5IjoiZGVza3RvcCJ9");

	web_url("shoppingsettings_2", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AFS-CV", 
		"JkXsl9CsUPu+kc0YOoXS4f");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22631; app=Microsoft Edge; appVer=131.0.2903.112; appChannel=stable; appInstallationId=748690809752085297; region=RU;");

	web_add_header("X-Client-Data", 
		"CI2HywE=");

	lr_think_time(9);

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=iM%2BDiC14xNRRu2K6XGGa2w%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18iM+DiC14xNRRu2K6XGGa2w==\\x10c\\x18\\x02*\\xED\\x04\\x12\\x02\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\xB1\\xFFN\\xF4\\x93\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xBFG\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x082\\x8E\\xC2+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00"
		"(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:-ProductionEnvironmentDefinition_1662295566635RJ\n\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x00b\ndummytokenj\\x02\\x10\\x01r\\x1Cchr:iM+DiC14xNRRu2K6XGGa2w==", 
		LAST);

	web_url("regionalAndLanguageSettings", 
		"URL=https://graph.microsoft.com/beta/me/settings/regionalAndLanguageSettings", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(17);

	web_url("config.json", 
		"URL=https://edge-consumer-static.azureedge.net/mouse-gesture/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("1_loginPage");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(25);

	web_url("auth", 
		"URL=https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_url("auth_2", 
		"URL=https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://yastatic.net/s3/passport-auth-customs/customs/v1.174.4/passport.auth.customs.css", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/s3/passport-static/core/v1.188.15/i/authv2/qr-icon-dark.svg", "Referer=https://yastatic.net/s3/passport-static/core/v1.188.15/css/react.authv2.cij.css", ENDITEM, 
		"Url=https://yastatic.net/s3/passport-static/core/v1.188.15/i/authv2/fingerprint-icon-dark.svg", "Referer=https://yastatic.net/s3/passport-static/core/v1.188.15/css/react.authv2.cij.css", ENDITEM, 
		"Url=https://yastatic.net/s3/passport-static/core/v1.188.15/i/authv2/all-social-icon-dark.svg", "Referer=https://yastatic.net/s3/passport-static/core/v1.188.15/css/react.authv2.cij.css", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("5625391299761943971", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-1726568276624310487/5625391299761943971", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-AnchorMailbox", 
		"CID:f070a191a34bd5e7");

	web_url("V1Profile_2", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://yastatic.net/islands/_/KRBKbh7904nwfw8-FzDelXRpZ9o.woff2", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/islands/_/g0MeJlAWVRZjlLOLzhOGwwDQzKY.woff", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/s3/passport-auth-customs/customs/_/5c229b91.jpg", "Referer=https://yastatic.net/s3/passport-auth-customs//customs/v1.174.4/passport.auth.customs.css", ENDITEM, 
		LAST);

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.112");

	web_add_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_header("X-Microsoft-Update-AppId", 
		"eeobbhfgfagbclfofmgbdfoicabjdbkn,oankkpibpaokgecfckkdkgaoafllipag,kpfehajjjbbcifeehjgfgnabifknmdad,pghocgajpebopihickglahgebcmkcekh,ohckeflnhegojcjlcpbfpciadgikcohk,fppmbhmldokgmleojlplaaodlkibgikh,alpjnmnfbgfkmmpcfpejmmoebdndedno,ojblfafjmiikbkepnnolpgbbhejhlcim,ndikpojcjlepofdkaaldkinkjbeeebkl,fgbafbciocncjfbbonhocjaohoknlaco,jbfaflocpnkhbgcijpkiafdpbjkedane,ahmaebgpfccdhgidjaidaoojjcijckba,pbdgbpmpeenomngainidcjmopnklimmf,mpicjakjneaggahlnmbojhjpnileolnb,kmkacjgmmfchkbeglfbjjeidfckbnkca,"
		"ebkkldgijmkljgglkajkjgedfnigiakk,mkcgfaeepibomfapiapjaceihcojnphg,lkkdlcloifjinapabfonaibjijloebfb,plbmmhnabegcabfbcejohgjpkamkddhn,llmidpclgepbgbgoecnhcmgfhmfplfao,omnckhpgfmaoelhddliebabpgblmmnjp,jcmcegpcehdchljeldgmmfbgcpnmgedo,lfmeghnikdkbonehgjihjebgioakijgn,hjaimielcgmceiphgjjfddlgjklfpdei,gllimckfbolmioaaihpppacjccghejen,cllppcmmlnkggcmljjfigkcigaajjmid,oghefchejbbgepkneeedmklffjpbaiaa,pdfjdcjjjegpclfiilihfkmdfndkneei");

	web_add_header("X-Microsoft-Update-Interactivity", 
		"bg");

	web_add_header("X-Microsoft-Update-Service-Cohort", 
		"6411");

	web_add_header("X-Microsoft-Update-Updater", 
		"msedge-131.0.2903.112");

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=7:7nSnCEy-mNkHvEl_Z5NWmg5_S6JWQ9r1afy79sFNDp0&cup2hreq=ba867eaea91d769d49fdef48e9148fc93a43c3bcd2681bf8118a777486395be2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.63\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.63\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.63,\"AppVersion\":\"131.0.2903.112\",\""
		"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.26\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1AB07E887ACCA305058EEAB9053C96DC531C2C5C067AB4F30AFA2B31F1EDD966\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.26\",\"AppMajorVersion\":\"131\",\""
		"AppRollout\":0.26,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"6498.2024.12.2\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.22\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.00AF3F07B5ABB71F6D30337E1EEF62FA280F06EF19485C0CF6B72171F92CCC0A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{"
		"\"AppCohort\":\"rrf@0.22\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.22,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"120.0.6050.0\"},{\"appid\":\"pghocgajpebopihickglahgebcmkcekh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8DAA3547317E62E7E02DA356F9540C329689C49350ACF8A30088320C805E74ED\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.72,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"3.0.0.8\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.53\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.95FD9D48E4FC245A3F3A99A3A16ECD1355050BA3F4AFC555F19A97C7F9B49677\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.53\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.53,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.1.7\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\""
		"rrf@0.97\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.97\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.97,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\""
		"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.30\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.98D784E8E77112DF1B4E935BA63D9D887E1D1663AFE53D5FB947F7345801092A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.30\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.3,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"14.0.0.2\"},{\"appid\":\"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.47\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.47\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.47,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.10.2830.0\"},{\"appid\":\""
		"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.50\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.69D0D51AD8D1AABAAE811B5BC6F72729BEEBE8AB40C8E6080C8255453F913377\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.50\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.5,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"10.34.0.57\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.09\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.2EE0FD95211580C591EEB5DF8280DB42AA00166AB03A919A3748BD857A42EA75\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.09\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.09,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2024.12.14.1\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.72\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.72\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.72,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},"
		"\"updatecheck\":{},\"version\":\"1.0.0.26\"},{\"appid\":\"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.24\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.24\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.24,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\""
		"pbdgbpmpeenomngainidcjmopnklimmf\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.B27BEC7581505715364F132DE1998818C82462DBF55A1F55F9B15E29E988D791\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.6,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"0.0.0.46\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.37\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.37,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.0.0.19\"},{\"appid\":\"kmkacjgmmfchkbeglfbjjeidfckbnkca\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4A84F2BDD63DABE6ABDE22B9047A6942EEB7BDF93D8435CC4B188DBE72D9E30D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.77,\"AppVersion\":\""
		"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.0.0\"},{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.27\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.27\",\""
		"AppMajorVersion\":\"131\",\"AppRollout\":0.27,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.62\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.62\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.62,\"AppVersion"
		"\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.58\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.CB0C8B4D212BCD4A741F0625FAC3968E0559EDFD37DD0760C5270662868F373A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.58\",\""
		"AppMajorVersion\":\"131\",\"AppRollout\":0.58,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"4.0.3.7\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.42\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.1E1174204F8A0A13DE2E224A1BE882D2724A6FD13BA18A895FD5098FD5552460\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.42\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.42,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"3057\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.52\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.6975806A535B13127A1ED15B1B83F0EAE36D2BBEBA7135ED70F11173300955D0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.52\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.52,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2.0.8019.0\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.51\",\"enabled\":true,\"installdate\":-1,"
		"\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.51,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.96\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.E8A9049C8F62D5E3785D307A8AFC82080C1DB479F8DDC23B4BB6AC7CA7AD644F\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.96\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.96,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2025.1.3.1\"},{\"appid\":\""
		"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.62\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.8D0A42A37A981A46B00865EF11F43AB0AC84B248E015FB228D88A7D7B511AEBA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.62\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.62,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\""
		"updatecheck\":{},\"version\":\"2.0.0.19\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.87\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.87\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.87,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"gllimckfbolmioaaihpppacjccghejen\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.4466E240C25BBDD6278A46E9966A4C3C4D5DD64DAB897879FB479F158FAFAEC6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.91,\"AppVersion\":\""
		"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.1.0.0\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.80\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.7847208B976C730A6378DA74BDCEA33001FA50738AFA4E9F1533D93D3CC9723C\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.80\",\""
		"AppMajorVersion\":\"131\",\"AppRollout\":0.8,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"128.18267.18263.516\"},{\"appid\":\"oghefchejbbgepkneeedmklffjpbaiaa\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.04\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\"1.5F87F608850995E52E0F1477DC78087CACBD6560E9DA289237CF2EB745EB3944\"}]},\"ping\":{\"r"
		"\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.04\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.04,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"1.19.2.0\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{\"fp\":\""
		"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.45\",\"AppMajorVersion\":\"131\",\"AppRollout\":0.45,\"AppVersion\":\"131.0.2903.112\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.43\"},\"updatecheck\":{},\"version\":\"2024.8.10.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,"
		"\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4602\"},\"prodversion\":\"131.0.2903.112\",\"protocol\":\"3.1\",\"requestid\":\"{b9e0679c-9902-4b67-b1a7-390e81adaefb}\",\"sessionid\":\"{c19e64b2-f7b4-470e-a8eb-99e6783bf53e}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.195.43\"},\""
		"updaterversion\":\"131.0.2903.112\"}}", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/metrika/watch.js", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/islands/_/TR2STky64Ra69XlYzqKN7cnjYfQ.woff2", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=/neededge/v1?bucket=69", "Referer=", ENDITEM, 
		"Url=/extensionrevocation/v1/threatListUpdates_fetch?req=ChgKBm1zZWRnZRIOMTMxLjAuMjkwMy4xMTIaGwgBEAgaDTE3MzU4ODE4OTQ4NzYiBCABIAIoBCICCAE=&ct=application/x-protobuf&key=d414dd4f9db345fa8003e32adc81b362", "Referer=", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://passport.yandex.ru");

	web_add_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("click", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t30.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=2876,207=4910.1,-cdn=unknown/cts=1735901418307/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;"
		"1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D"
		"(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=2876,207=1860.6,-cdn=unknown/cts=1735901418308/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;"
		"1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D"
		"(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=3070,207=4881.5,-cdn=unknown/cts=1735901418308/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;"
		"1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D"
		"(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=react.inited,207=4910,-cdn=unknown/cts=1735901418308/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,"
		"92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D"
		"(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=3036,207=4910.1,-cdn=unknown/cts=1735901418308/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/dtype=stred/pid=1/cid=72202/path=690.1033/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;"
		"652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,2129=1735901413396,1036=463,1037=0,1038=2,1383=1,1039=88,1040=298,1040.906=389,1310.2084=6,1310.2085=1548,1310.1309=0,1310.1007=1548,2299=2,3140=8,3141=20,2130=1803,1041=1249,1041.906=1340,2116=466,2114=464,2131=2102,2123=2102,2770=2102,2769=560,2113=463,2112=463,2111=463,2110=463,2109=8,2117=466,2120=852,2119=554,2115=465,1484=1,1384.1385=1,2437="
		"2771,2870=4g,-cdn=unknown/cts=1735901418309/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15"
		",experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=1926.2793,207=1802.2,-cdn=unknown/cts=1735901418309/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,"
		"92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D"
		"(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=1926.2794,207=1802.2,-cdn=unknown/cts=1735901418309/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.2044/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,"
		"92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D"
		"(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=3071,13=https%3A%2F%2Fyastatic.net%2Fs3%2Fpassport-static%2Fcore%2Fv1.188.15%2Fjs%2Freact.authv2.lego.ru.js,2116=1756.5,2114=1753.3,2886=55173,2113=843.5,2112=843.5,2136=1067.9,2887=18771,2888=resource,2111=843.5,2889=script,2890=http%2F1.1,2110=0,2109=0,2117=1756.5,2120=1911.4,2119=1791.7,2115="
		"1754.2,2322=843.5,2323=19071,2137=0,-cdn=unknown/cts=1735901418309/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.2044/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform="
		"desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=3071,13=https%3A%2F%2Fyastatic.net%2Fs3%2Fpassport-static%2Fcore%2Fv1.188.15%2Fjs%2Freact.authv2.vendors.ru.js,2116=1764.1,2114=1762.8,2886=431720,2113=843.5,2112=843.5,2136=1918.6,2887=151044,2888=resource,2111=843.5,2889=script,2890=http%2F1.1,2110=0,2109=0,2117=1764.1,2120=2762.1,2119=2090.3,"
		"2115=1763.6,2322=843.5,2323=151344,2137=0,-cdn=unknown/cts=1735901418309/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.2044/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,"
		"-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=2095,13=https%3A%2F%2Fyastatic.net%2Fs3%2Fpassport-static%2Fcore%2Fv1.188.15%2Fjs%2Freact.authv2.react.ru.js,2116=1764.7,2114=1763.1,2886=2656277,2113=843.6,2112=843.6,2136=3897.6,2887=692781,2888=resource,2111=843.6,2889=script,2890=http%2F1.1,2110=0,2109=0,2117=1764.7,2120=4741.2,2119=1906.9,"
		"2115=1764.4,2322=843.6,2323=693081,2137=0,-cdn=unknown/cts=1735901418309/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.2044/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,"
		"-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=2447,13=https%3A%2F%2Fyastatic.net%2Fs3%2Fpassport-static%2Fcore%2Fv1.188.15%2Fjs%2F..%2Fcss%2Freact.authv2.cij.css,2116=1351.2,2114=569.5,2886=448354,2113=561.1,2112=561.1,2136=1191.5,2887=97298,2888=resource,2111=561.1,2889=link,2890=http%2F1.1,2110=0,2109=0,2117=1351.3,2120=1752.6,2119=1396.1,"
		"2115=571.4,2322=561.1,2323=97598,2137=0,-cdn=unknown/cts=1735901418309/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("metrika_match.html", 
		"URL=https://mc.yandex.ru/metrika/metrika_match.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://passport.yandex.ru/favicon.ico", "Referer=https://passport.yandex.ru/", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("3", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&page-ref=&charset=utf-8&ut=noindex&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A32715450324%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135019%3Aet%3A1735901419%3Ac%3A1%3Arn%3A607671844%3Arqn%3A5%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Ast%3A1735901419&t=mc(p-4-g-1)clc(0-0-0)rqnt(5)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(32768)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("3_2", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&page-ref=&charset=utf-8&ut=noindex&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A32715450324%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135019%3Aet%3A1735901419%3Ac%3A1%3Arn%3A656216124%3Arqn%3A1%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Afp%3A1802%3Ads%3A0%2C1%2C89%2C298%2C463%2C455%2C1%2C1250%2C0%2C%2C%2C%2C2102%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Ast%3A1735901419&t=mc(p-4-g-1)clc(0-0-0)rqnt(1)aw(1)rcm(1)yu(9903672511735901413)cdl(na)"
		"eco(32768)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("3_3", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&page-ref=&charset=utf-8&ut=noindex&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A32715450324%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135019%3Aet%3A1735901419%3Ac%3A1%3Arn%3A160262620%3Arqn%3A4%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Ast%3A1735901419&t=mc(p-4-g-1)clc(0-0-0)rqnt(4)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(32768)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_url("3_4", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&page-ref=&charset=utf-8&ut=noindex&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A32715450324%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135019%3Aet%3A1735901419%3Ac%3A1%3Arn%3A979200307%3Arqn%3A2%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Ast%3A1735901419&t=mc(p-4-g-1)clc(0-0-0)rqnt(2)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(32768)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_url("3_5", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&page-ref=&charset=utf-8&ut=noindex&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A32715450324%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135019%3Aet%3A1735901419%3Ac%3A1%3Arn%3A876624590%3Arqn%3A6%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Ast%3A1735901419&t=mc(p-4-g-1)clc(0-0-0)rqnt(6)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(32768)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../metrika/advert.gif", "Referer=https://passport.yandex.ru/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135020%3Aet%3A1735901421%3Ac%3A1%3Arn%3A3537359%3Arqn%3A2%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Arqnl%3A1%3Ast%3A1735901421&t=gdpr(8-0)mc(p-4-g-1)clc(0-0-0)rqnt(2)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)ti(0)&force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D1%8B%22%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mail360%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t37.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_2", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135020%3Aet%3A1735901421%3Ac%3A1%3Arn%3A381982103%3Arqn%3A5%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Arqnl%3A1%3Ast%3A1735901421&t=gdpr(8-0)mc(p-4-g-1)clc(0-0-0)rqnt(5)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)ti(0)&force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D0%BA%D0%BD%D0%BE%D0%BF%D0%BA%D0%B8%20%5C%22%D0%9F%D0%BE%20%D0%BB%D0%B8%D1%86%D1%83%20%D0%B8%D0%BB%D0%B8%20%D0%BE%D1%82%D0%BF%D0%B5%D1%87%D0%B0%D1%82%D0%BA%D1%83%5C%22%22%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mail360%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t38.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_3", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135020%3Aet%3A1735901421%3Ac%3A1%3Arn%3A369030069%3Arqn%3A3%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Arqnl%3A1%3Ast%3A1735901421&t=gdpr(8-0)mc(p-4-g-1)clc(0-0-0)rqnt(3)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)ti(0)&force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%22%D0%9F%D0%B5%D1%80%D0%B5%D0%BA%D0%BB%D1%8E%D1%87%D0%B0%D1%82%D0%B5%D0%BB%D1%8C%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD-%D1%82%D0%B5%D0%BB%D0%B5%D1%84%D0%BE%D0%BD%3A%20%D0%BF%D0%BE%D0%BA%D0%B0%D0%B7%2C%20%D0%B2%D0%BA%D0%BB%D1%8E%D1%87%D0%B5%D0%BD%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%22%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mail360%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t39.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_4", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135020%3Aet%3A1735901421%3Ac%3A1%3Arn%3A791699554%3Arqn%3A4%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Arqnl%3A1%3Ast%3A1735901421&t=gdpr(8-0)mc(p-4-g-1)clc(0-0-0)rqnt(4)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)ti(0)&force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%7B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D0%B2%D0%B2%D0%BE%D0%B4%D0%B0%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%D0%B0%22%3A%22auth_2%22%7D%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mail360%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t40.inf", 
		"EncType=", 
		LAST);

	web_custom_request("784657", 
		"URL=https://mc.yandex.ru/watch/784657?page-url=goal%3A%2F%2Fpassport.yandex.ru%2F2step_domik_show_login_form&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135020%3Aet%3A1735901421%3Ac%3A1%3Arn%3A405592592%3Arqn%3A6%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Ans%3A1735901413396%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c"
		"1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901421%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-4-g-1)clc(0-0-0)rqnt(6)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)fip(1)ti(0)&force-urlencoded=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t41.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"report");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_custom_request("csp", 
		"URL=https://csp.yandex.net/csp?from=passport&project=passport&yandex_login=&yandexuid=9903672511735901413", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"document-uri\":\"https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360\",\"referrer\":\"\",\"violated-directive\":\"connect-src\",\"effective-directive\":\"connect-src\",\"original-policy\":\"default-src 'none';style-src 'self' yastatic.net 'unsafe-inline' 'unsafe-eval' s3.mds.yandex.net s3.mdst.yandex.net;script-src 'self' yastatic.net mc.admetrica.ru mc.yandex.ru mc.admetrica.com mc.yandex.com chat.s3.yandex.net api-maps.yandex.ru "
		"suggest-maps.yandex.net export.yandex.ru 'unsafe-eval' 'unsafe-inline' 'nonce-da44e00e-1894-4230-bccd-ac00418a8e48' https://yastatic.net/s3/frontend/butterfly/latest/butterfly.js;img-src 'self' yastatic.net https://ysa-static.passport.yandex.ru https://ysa-static.passport.yandex.net yandex.st data: mc.admetrica.ru mc.yandex.ru mc.admetrica.com mc.yandex.com api-maps.yandex.ru *.captcha.yandex.net s3.mds.yandex.net s3.mdst.yandex.net avatars.mds.yandex.net avatars.mdst.yandex.net clck.yandex.ru "
		"*.maps.yandex.net yapic.yandex.ru img.yandex.ru static-maps.yandex.ru https://video-tub-ru.yandex.net https://img0-tub-ru.yandex.net https://img1-tub-ru.yandex.net https://img2-tub-ru.yandex.net https://img3-tub-ru.yandex.net yango.com blob:  mc.webvisor.com mc.webvisor.org https://downloader.disk.yandex.ru;font-src 'self' data: yastatic.net;object-src yastatic.net;media-src *.captcha.yandex.net data: yastatic.net;connect-src mail.yandex.ru 'self' mc.admetrica.ru mc.yandex.ru mc.admetrica.com "
		"mc.yandex.com trust.yandex.ru trust.yandex.com suggest-maps.yandex.net mc.webvisor.com mc.webvisor.org yandex.ru api.passport.yandex.ru *.disk.yandex.net;frame-ancestors 'self';frame-src 'self' yandex.st s4.money.yandex.net https://yandex.ru/chat split.yandex.ru yastatic.net yandex.ru  sso.passport.yandex.ru sso.ya.ru pass.yandex.ru magic.passport.yandex.ru passport.yandex.ru https://trust.yandex.ru blob: mc.admetrica.ru mc.yandex.ru mc.admetrica.com mc.yandex.com https://yandex.ru/forms https://"
		"forms.yandex.ru/;child-src 'self' yandex.st yandex.ru  passport.yandex.ru pass.yandex.ru https://trust.yandex.ru blob: mc.yandex.ru;report-uri https://csp.yandex.net/csp?from=passport&project=passport&yandex_login=&yandexuid=9903672511735901413;manifest-src 'self' yastatic.net\",\"disposition\":\"enforce\",\"blocked-uri\":\"https://mc.yandex.md/cc?wmode=7\",\"line-number\":103,\"column-number\":102,\"source-file\":\"https://mc.yandex.ru/metrika/watch.js\",\"status-code\":200,\"script-sample\":\"\""
		"}}", 
		LAST);

	web_custom_request("csp_2", 
		"URL=https://csp.yandex.net/csp?from=passport&project=passport&yandex_login=&yandexuid=9903672511735901413", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"document-uri\":\"https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360\",\"referrer\":\"\",\"violated-directive\":\"connect-src\",\"effective-directive\":\"connect-src\",\"original-policy\":\"default-src 'none';style-src 'self' yastatic.net 'unsafe-inline' 'unsafe-eval' s3.mds.yandex.net s3.mdst.yandex.net;script-src 'self' yastatic.net mc.admetrica.ru mc.yandex.ru mc.admetrica.com mc.yandex.com chat.s3.yandex.net api-maps.yandex.ru "
		"suggest-maps.yandex.net export.yandex.ru 'unsafe-eval' 'unsafe-inline' 'nonce-da44e00e-1894-4230-bccd-ac00418a8e48' https://yastatic.net/s3/frontend/butterfly/latest/butterfly.js;img-src 'self' yastatic.net https://ysa-static.passport.yandex.ru https://ysa-static.passport.yandex.net yandex.st data: mc.admetrica.ru mc.yandex.ru mc.admetrica.com mc.yandex.com api-maps.yandex.ru *.captcha.yandex.net s3.mds.yandex.net s3.mdst.yandex.net avatars.mds.yandex.net avatars.mdst.yandex.net clck.yandex.ru "
		"*.maps.yandex.net yapic.yandex.ru img.yandex.ru static-maps.yandex.ru https://video-tub-ru.yandex.net https://img0-tub-ru.yandex.net https://img1-tub-ru.yandex.net https://img2-tub-ru.yandex.net https://img3-tub-ru.yandex.net yango.com blob:  mc.webvisor.com mc.webvisor.org https://downloader.disk.yandex.ru;font-src 'self' data: yastatic.net;object-src yastatic.net;media-src *.captcha.yandex.net data: yastatic.net;connect-src mail.yandex.ru 'self' mc.admetrica.ru mc.yandex.ru mc.admetrica.com "
		"mc.yandex.com trust.yandex.ru trust.yandex.com suggest-maps.yandex.net mc.webvisor.com mc.webvisor.org yandex.ru api.passport.yandex.ru *.disk.yandex.net;frame-ancestors 'self';frame-src 'self' yandex.st s4.money.yandex.net https://yandex.ru/chat split.yandex.ru yastatic.net yandex.ru  sso.passport.yandex.ru sso.ya.ru pass.yandex.ru magic.passport.yandex.ru passport.yandex.ru https://trust.yandex.ru blob: mc.admetrica.ru mc.yandex.ru mc.admetrica.com mc.yandex.com https://yandex.ru/forms https://"
		"forms.yandex.ru/;child-src 'self' yandex.st yandex.ru  passport.yandex.ru pass.yandex.ru https://trust.yandex.ru blob: mc.yandex.ru;report-uri https://csp.yandex.net/csp?from=passport&project=passport&yandex_login=&yandexuid=9903672511735901413;manifest-src 'self' yastatic.net\",\"disposition\":\"enforce\",\"blocked-uri\":\"https://mc.yandex.md/cc?wmode=7\",\"line-number\":102,\"column-number\":294,\"source-file\":\"https://mc.yandex.ru/metrika/watch.js\",\"status-code\":200,\"script-sample\":\"\""
		"}}", 
		EXTRARES, 
		"Url=http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1736221547&P2=404&P3=2&P4=e%2fcHk%2b1WwXA%2byIehBhNUJyLRgrLHi7jGqGZSQQE3phRlGRplHmkBa1V%2fcmrWPg2uhqMPd86MNhaKJMvRj5VIXA%3d%3d", "Referer=", ENDITEM, 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_2", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t44.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=2795,207=7679,2796.2797=s-4745-4910.s-5688-5784.s-7512-7679,689.2322=4912,-cdn=unknown/cts=1735901424356/*", 
		LAST);

	lr_think_time(9);

	web_custom_request("1_5", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"nb%3A1%3Acl%3A1904%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135034%3Aet%3A1735901434%3Ac%3A1%3Arn%3A62180018%3Arqn%3A7%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Arqnl%3A1%3Ast%3A1735901434&t=gdpr(8-0)mc(p-4-g-1)clc(0-0-0)"
		"rqnt(7)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ct%22%3A%5B%5D%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t45.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_custom_request("click_3", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t46.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.361/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,d=passport.yandex.ru-!2!154010;yastatic.net-css!2!106860;yastatic.net-js!5!950062;yastatic.net-!2!88813;yastatic.net-svg!3!5104;yastatic.net-woff!1!55782;mc.yandex.ru-js!1!67147;mc.yandex.ru-html!1!2886;mc.yandex.ru-!12!0;mc.yandex.ru-gif!1!343;passport.yandex.ru-ico!1!15706;mc.yandex.md-!1!0;csp.yandex.net-!2!0;,t=20795.6,-cdn=unknown/cts="
		"1735901434192/*", 
		LAST);

	lr_think_time(15);

	web_custom_request("click_4", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t47.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.361/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,d=mc.yandex.ru-!1!0;,t=35801.9,-cdn=unknown/cts=1735901449199/*", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("PreferAnonymous");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Mesh-Client-Arch", 
		"x86_64");

	web_add_auto_header("Sec-Mesh-Client-Edge-Channel", 
		"stable");

	web_add_auto_header("Sec-Mesh-Client-Edge-Version", 
		"131.0.2903.112");

	web_add_auto_header("Sec-Mesh-Client-OS", 
		"Windows");

	web_add_auto_header("Sec-Mesh-Client-OS-Version", 
		"10.0.22631");

	web_add_auto_header("Sec-Mesh-Client-WebView", 
		"0");

	web_add_auto_header("X-Microsoft-Update-Service-Cohort", 
		"6411");

	web_custom_request("update_2", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.37\",\"enabled\":true,\"event\":[{\"download_time_ms\":32461,\"downloaded\":0,\"downloader\":\"bits\",\"errorcode\":-2145386477,\"eventresult\":0,\"eventtype\":14,\"nextversion\":\"4.0.1.10\",\"previousversion\":\"4.0.0.19\",\"total\":67802,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/"
		"files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1736221547&P2=404&P3=2&P4=e%2fcHk%2b1WwXA%2byIehBhNUJyLRgrLHi7jGqGZSQQE3phRlGRplHmkBa1V%2fcmrWPg2uhqMPd86MNhaKJMvRj5VIXA%3d%3d\"},{\"download_time_ms\":376,\"downloaded\":67802,\"downloader\":\"direct\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"4.0.1.10\",\"previousversion\":\"4.0.0.19\",\"total\":67802,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/2ed1297e-f6c9-4355-aec4-433ea371b116?P1=1736221547&P2="
		"404&P3=2&P4=e%2fcHk%2b1WwXA%2byIehBhNUJyLRgrLHi7jGqGZSQQE3phRlGRplHmkBa1V%2fcmrWPg2uhqMPd86MNhaKJMvRj5VIXA%3d%3d\"},{\"errorcat\":3,\"errorcode\":16,\"eventresult\":0,\"eventtype\":3,\"install_time_ms\":34,\"nextfp\":\"1.585DE38D235AE02DB9B82F20B88251C2B1DD4CD3B0037A7709640F0C3D20BA9C\",\"nextversion\":\"4.0.1.10\",\"previousfp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\",\"previousversion\":\"4.0.0.19\"}],\"installdate\":-1,\"lang\":\"ru\",\"packages\":{\"package\":[{"
		"\"fp\":\"1.D0760C8DC53D9AC78138D8BB36E76A885A94363E33058BC33FB4E03162A2492C\"}]},\"version\":\"4.0.0.19\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4602\"},\"prodversion\":\"131.0.2903.112\",\"protocol\":\"3.1\",\"requestid\":\""
		"{1ebd1fdf-73b7-47d0-98a6-cc3cc3acd06f}\",\"sessionid\":\"{c19e64b2-f7b4-470e-a8eb-99e6783bf53e}\",\"updaterversion\":\"131.0.2903.112\"}}", 
		LAST);

	lr_think_time(8);

	web_custom_request("update_3", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.45\",\"enabled\":true,\"event\":[{\"download_time_ms\":8042,\"downloaded\":6252,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"2024.11.8.0\",\"previousversion\":\"2024.8.10.0\",\"total\":6252,\"url\":\"http://msedge.b.tlu.dl.delivery.mp.microsoft.com/filestreamingservice/files/"
		"2a0d597c-a09c-4400-be86-87596dd2e696?P1=1736221549&P2=404&P3=2&P4=dxlVwoiTza%2bkmmlyq1qgoCDNPJuVNpgxNfUDL2Xdy3wVBouHVC27m%2fGZNCsjgFJo1niePC6W0bqmYtNHMvX82A%3d%3d\"},{\"eventresult\":1,\"eventtype\":3,\"install_time_ms\":44,\"nextfp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\",\"nextversion\":\"2024.11.8.0\",\"previousfp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\",\"previousversion\":\"2024.8.10.0\"}],\"installdate\":-1,\"lang\":\"ru\",\""
		"packages\":{\"package\":[{\"fp\":\"1.A3A37C49F6DEFB87760822D31C3F90D9D77D2E9C84D372A45E4E88878CC046DA\"}]},\"version\":\"2024.11.8.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":1,\"physmemory\":32,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22631.4602\"},\"prodversion\":\"131.0.2903.112\",\"protocol\":\"3.1\",\"requestid\":\""
		"{5aa61e2c-5bd3-499b-8f9c-c4f0c9f9f6dd}\",\"sessionid\":\"{c19e64b2-f7b4-470e-a8eb-99e6783bf53e}\",\"updaterversion\":\"131.0.2903.112\"}}", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A1069085962%3Ax%3A26466%3Ay%3A56172%3At%3A665%3Ap%3APWAAA1A1AFAAAAA2A1AAA1A1AA%3AX%3A591%3AY%3A605&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901486&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A771895400%3Ax%3A10922%3Ay%3A12872%3At%3A681%3Ap%3APWAAA1A1AFAAAAA2A1AAA1A1AA%3AX%3A517%3AY%3A568&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901487&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A153349338%3Ax%3A15316%3Ay%3A32913%3At%3A792%3Ap%3A%3FA1A2AFAAAAA2A1AAA1A1AA%3AX%3A541%3AY%3A665&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901498&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		LAST);

	lr_end_transaction("1_loginPage",LR_AUTO);

	lr_start_transaction("2_login");

	web_revert_auto_header("Sec-Mesh-Client-Arch");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Channel");

	web_revert_auto_header("Sec-Mesh-Client-Edge-Version");

	web_revert_auto_header("Sec-Mesh-Client-OS");

	web_revert_auto_header("Sec-Mesh-Client-OS-Version");

	web_revert_auto_header("Sec-Mesh-Client-WebView");

	web_revert_auto_header("X-Microsoft-Update-Service-Cohort");

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("1_6", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3DAAA1A1AFAAAAA2A1AAA1A1AA&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135125%3Aet%3A1735901486%3Ac%3A1%3Arn%3A347279615%3Arqn%3A8%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9b"
		"cdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901486%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-4-g-1)clc(1-591-605)rqnt(8)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)ti"
		"(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t50.inf", 
		"EncType=", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("click_5", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t51.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.2877/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=first-input,207.2154=72409.3,207.1428=72410.4,2877=1.1,-cdn=unknown/cts=1735901485808/*", 
		LAST);

	web_custom_request("1_7", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3DAAA1A1AFAAAAA2A1AAA1A1AA&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135127%3Aet%3A1735901487%3Ac%3A1%3Arn%3A2228672%3Arqn%3A9%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcd"
		"d80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901487%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-4-g-1)clc(2-554-586)rqnt(9)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fid(110)fip"
		"(1)ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t52.inf", 
		"EncType=", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	lr_think_time(6);

	web_custom_request("click_6", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t53.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.361/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,d=mc.yandex.ru-!2!0;,t=80802.4,-cdn=unknown/cts=1735901494200/*", 
		LAST);

	lr_think_time(4);

	web_custom_request("1_8", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3D%253FA1A2AFAAAAA2A1AAA1A1AA%26i%3Dpassp%253Asign-in%26c%3D3212059714&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135138%3Aet%3A1735901498%3Ac%3A1%3Arn%3A79551709%3Arqn%3A10%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9b"
		"cdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901498%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-4-g-1)clc(3-549-612)rqnt(10)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)ti"
		"(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t54.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_submit_data("start", 
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/start", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=338f85e52662d6a3b4de05cda97cb62748674a4c:1735901414107", ENDITEM, 
		"Name=login", "Value=belkatestit", ENDITEM, 
		"Name=process_uuid", "Value=3508d530-5f42-4d5e-ac56-ef253bd9d78e", ENDITEM, 
		"Name=retpath", "Value=https://sso.passport.yandex.ru/prepare?uuid=9d957ab5-6983-44a3-9dd0-d1e3dc323ed7&goal=https%3A%2F%2Fya.ru%2F&finish=https%3A%2F%2Fmail.yandex.ru", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		"Name=check_for_xtokens_for_pictures", "Value=1", ENDITEM, 
		"Name=can_send_push_code", "Value=1", ENDITEM, 
		EXTRARES, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A634299593%3Ax%3A-97673%3Ay%3A-461086%3At%3A794%3Ap%3APWAA1A1AFAAA2A1AAA1A1AA%3AX%3A0%3AY%3A0&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901499&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-yapic/0/0-0/islands-200", "Referer=https://passport.yandex.ru/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_9", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135138%3Aet%3A1735901499%3Ac%3A1%3Arn%3A375954213%3Arqn%3A12%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901499&t=gdpr(8-0)mc(p-4-g-2)clc(4-412-459)rqnt(12)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)ti(0)&"
		"force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%7B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D0%B2%D0%B2%D0%BE%D0%B4%D0%B0%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%D0%B0%22%3A%7B%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%BA%D0%B0%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%BB%D0%BE%D0%B3%D0%B8%D0%BD%D0%B0%22%3A%22%D0%A3%D1%81%D0%BF%D0%B5%D1%88%D0%BD%D1%8B%D0%B9%20%D0%B2%D0%B2%D0%BE%D0%B4%22%7D%7D%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin"
		"%22%3A%22mail360%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t56.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_10", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135138%3Aet%3A1735901499%3Ac%3A1%3Arn%3A14161545%3Arqn%3A13%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901499&t=gdpr(8-0)mc(p-5-g-2)clc(4-412-459)rqnt(13)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)ti(0)&"
		"force-urlencoded=1&site-info=%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B2%D0%B2%D0%BE%D0%B4%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D1%8F%22%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mail360%22%2C%22trackIdHash%22%3A%227b460b779308a80790739b357e296f56350f3b4a5042e360ec181521aac4984c%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t57.inf", 
		"EncType=", 
		LAST);

	web_custom_request("784657_2", 
		"URL=https://mc.yandex.ru/watch/784657?page-url=goal%3A%2F%2Fpassport.yandex.ru%2F2step_domik_show_pass_form&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135138%3Aet%3A1735901499%3Ac%3A1%3Arn%3A839508910%3Arqn%3A11%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9"
		"bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901499%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-4-g-1)clc(4-412-459)rqnt(11)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)"
		"ti(0)&force-urlencoded=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t58.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_11", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135138%3Aet%3A1735901499%3Ac%3A1%3Arn%3A174172495%3Arqn%3A14%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901499&t=gdpr(8-0)mc(p-6-g-2)clc(4-412-459)rqnt(14)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)ti(0)&"
		"force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%7B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B2%D0%B2%D0%BE%D0%B4%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D1%8F%22%3A%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D0%BA%D0%BD%D0%BE%D0%BF%D0%BA%D0%B8%20%5C%22%D0%9F%D0%BE%20%D0%BB%D0%B8%D1%86%D1%83%20%D0%B8%D0%BB%D0%B8%20%D0%BE%D1%82%D0%BF%D0%B5%D1%87%D0%B0%D1%82%D0%BA%D1%83%5C%22%22%7D%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22n"
		"ull%22%2C%22origin%22%3A%22mail360%22%2C%22trackIdHash%22%3A%227b460b779308a80790739b357e296f56350f3b4a5042e360ec181521aac4984c%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t59.inf", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("-4530234926834531428", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-1726568276624310487/-4530234926834531428", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A656718687%3Ax%3A30583%3Ay%3A5957%3At%3A849%3Ap%3A%3FAA1A1AFAAA2A1AAA1A1AA%3AX%3A751%3AY%3A636&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901504&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A339374357%3Ax%3A13022%3Ay%3A57343%3At%3A868%3Ap%3APWAA1A1AFAAA2A1AAA1A1AA%3AX%3A527%3AY%3A669&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901506&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		"Url=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A584445765%3Ax%3A9846%3Ay%3A21942%3At%3A1479%3Ap%3A%3FAA2AFAAA2A1AAA1A1AA%3AX%3A516%3AY%3A755&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901567&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://passport.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("1_12", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=form%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3DFAAAA1A2A1AAA1A1AA&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135138%3Aet%3A1735901499%3Ac%3A1%3Arn%3A115842703%3Arqn%3A15%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9"
		"bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901499%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-7-g-2)clc(4-412-459)rqnt(15)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)"
		"ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t61.inf", 
		"EncType=", 
		LAST);

	lr_think_time(4);

	web_custom_request("1_13", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3D%253FAA1A1AFAAA2A1AAA1A1AA%26i%3Dpassword-toggle&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135144%3Aet%3A1735901504%3Ac%3A1%3Arn%3A791640060%3Arqn%3A16%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9"
		"bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901504%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-7-g-2)clc(6-489-519)rqnt(16)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)"
		"ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t62.inf", 
		"EncType=", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("click_7", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t63.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.361/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,d=mc.yandex.ru-!7!0;passport.yandex.ru-!1!617;passport.yandex.ru-ico!1!0;avatars.mds.yandex.net-!1!0;,t=95801.1,-cdn=unknown/cts=1735901509198/*", 
		LAST);

	web_custom_request("1_14", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3D%253FAA2AFAAA2A1AAA1A1AA%26i%3Dpassp%253Asign-in%26c%3D3429166947&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135247%3Aet%3A1735901567%3Ac%3A1%3Arn%3A1054277904%3Arqn%3A17%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b"
		"9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901567%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-7-g-2)clc(8-497-567)rqnt(17)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)"
		"ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t64.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_15", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=form%3A%2F%2Fpassport.yandex.ru%2F%3Fp%3DFAAA2A1AAA1A1AA&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135247%3Aet%3A1735901567%3Ac%3A1%3Arn%3A680773600%3Arqn%3A18%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9"
		"bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901567%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-7-g-2)clc(8-497-567)rqnt(18)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)"
		"ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t65.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_custom_request("commit_password", 
		"URL=https://passport.yandex.ru/registration-validations/auth/multi_step/commit_password", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t66.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=csrf_token=338f85e52662d6a3b4de05cda97cb62748674a4c%3A1735901414107&track_id=2408773c043c1053bdd004fb8b5fd69c9b&password=B31k%40bYlK4t35T!&retpath=https%3A%2F%2Fsso.passport.yandex.ru%2Fprepare%3Fuuid%3D9d957ab5-6983-44a3-9dd0-d1e3dc323ed7%26goal%3Dhttps%253A%252F%252Fya.ru%252F%26finish%3Dhttps%253A%252F%252Fmail.yandex.ru&lang=ru", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_16", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135247%3Aet%3A1735901568%3Ac%3A1%3Arn%3A83540209%3Arqn%3A20%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901568&t=gdpr(8-0)mc(p-7-g-3)clc(8-497-567)rqnt(20)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)ti(0)&"
		"force-urlencoded=1&site-info="
		"%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%7B%22%D0%9F%D0%BE%D0%BA%D0%B0%D0%B7%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%20%D0%B2%D0%B2%D0%BE%D0%B4%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D1%8F%22%3A%7B%22%D0%9E%D1%82%D0%BF%D1%80%D0%B0%D0%B2%D0%BA%D0%B0%20%D1%84%D0%BE%D1%80%D0%BC%D1%8B%22%3A%22%D0%A3%D1%81%D0%BF%D0%B5%D1%88%D0%BD%D1%8B%D0%B9%20%D0%B2%D0%B2%D0%BE%D0%B4%22%7D%7D%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mai"
		"l360%22%2C%22trackIdHash%22%3A%227b460b779308a80790739b357e296f56350f3b4a5042e360ec181521aac4984c%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t67.inf", 
		"EncType=", 
		LAST);

	web_custom_request("784657_3", 
		"URL=https://mc.yandex.ru/watch/784657?page-url=goal%3A%2F%2Fpassport.yandex.ru%2Fone_domik_auth_sucess&page-ref=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135247%3Aet%3A1735901568%3Ac%3A1%3Arn%3A963789519%3Arqn%3A19%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3App%3A3629563401%3Apu%3A32361475851735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9"
		"bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901568%3At%3A%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F&t=gdpr(8-0)mc(p-7-g-2)clc(8-497-567)rqnt(19)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)fip(1)"
		"ti(0)&force-urlencoded=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t68.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_17", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901421_d57c2ee3fb6b35a0d3f305e1d4e3ba7d8c694726d676d846efa85aede2ffdd3b&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A48396766081%3Ahid%3A268403425%3Az%3A180%3Ai%3A20250103135247%3Aet%3A1735901568%3Ac%3A1%3Arn%3A550634703%3Arqn%3A21%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901413396%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901568&t=gdpr(8-0)mc(p-8-g-3)clc(8-497-567)rqnt(21)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(3244804)dss(2)ti(0)&"
		"force-urlencoded=1&site-info=%7B%22%D0%90%D0%B2%D1%82%D0%BE%D1%80%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D1%8F%22%3A%22%D0%A3%D1%81%D0%BF%D0%B5%D1%88%D0%BD%D1%8B%D0%B9%20%D0%B2%D1%85%D0%BE%D0%B4%20%D1%81%20%D0%BF%D0%B0%D1%80%D0%BE%D0%BB%D0%B5%D0%BC%22%2C%22info%22%3A%7B%22version%22%3A%221.188.15%22%2C%22userType%22%3A%22null%22%2C%22origin%22%3A%22mail360%22%2C%22trackIdHash%22%3A%227b460b779308a80790739b357e296f56350f3b4a5042e360ec181521aac4984c%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t69.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_submit_data("accounts", 
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=338f85e52662d6a3b4de05cda97cb62748674a4c:1735901414107", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		LAST);

	web_submit_data("getCommonTrack", 
		"Action=https://passport.yandex.ru/registration-validations/getCommonTrack", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=907d5793893481413593f6076353efe971c151ff:1735901568039", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		"Name=track_id", "Value=", ENDITEM, 
		LAST);

	web_submit_data("ask_v2", 
		"Action=https://passport.yandex.ru/registration-validations/auth/additional_data/ask_v2", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=907d5793893481413593f6076353efe971c151ff:1735901568039", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		"Name=track_id", "Value=6997e7f593b7201f87c11e4cc8c706c19b", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("sec-ch-prefers-color-scheme");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("check", 
		"URL=https://api.passport.yandex.ru/registration_status/check", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_submit_data("accounts_2", 
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=907d5793893481413593f6076353efe971c151ff:1735901568039", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		LAST);

	web_submit_data("getCommonTrack_2", 
		"Action=https://passport.yandex.ru/registration-validations/getCommonTrack", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=85e08fc1097d92d812c94921aed72d0f1b364268:1735901568840", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		"Name=track_id", "Value=", ENDITEM, 
		LAST);

	web_submit_data("ask_v2_2", 
		"Action=https://passport.yandex.ru/registration-validations/auth/additional_data/ask_v2", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=csrf_token", "Value=85e08fc1097d92d812c94921aed72d0f1b364268:1735901568840", ENDITEM, 
		"Name=origin", "Value=mail360", ENDITEM, 
		"Name=track_id", "Value=595e2be08cf63215b0f3420752935ca69c", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_revert_auto_header("sec-ch-prefers-color-scheme");

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_8", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t77.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.361/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,d=mc.yandex.ru-!5!0;passport.yandex.ru-!7!15850;api.passport.yandex.ru-!1!0;,t=155509.5,-cdn=unknown/cts=1735901568907/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.4004/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,"
		"-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,s=0.007953,-cdn=unknown/cts=1735901568907/*\r\n/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.207/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5"
		";990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments=domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,143.2129=1735901413396,143.2112=463,143.2119=554,1701=largest-contentful-paint,207=2019.1,-cdn=unknown/cts=1735901568907/*", 
		LAST);

	web_custom_request("click_9", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t78.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901414064585-klg-d-5666213010135359319/path=690.2096.361/slots=882393,0,-1;882400,0,-1;885707,0,-1;859597,0,-1;637798,0,-1;637794,0,-1;637792,0,-1;637790,0,-1;894589,0,-1;950234,0,-1;869683,0,-1;784250,0,-1;652732,0,-1;1177783,0,92;1183344,0,8;1174579,0,12;1180242,0,15;1180238,0,76;1180240,0,5;990359,0,54;847634,0,67/vars=region=213,rum_id=ru.passport.auth,-project=passport,-page=%2Fauth,-env=production,-platform=desktop,-version=1.188.15,experiments="
		"domik-yabro-android-webauthn-exp%3Bsms-auth-on%3Brestorelogin_call_dictcall%3Bpassport-app-fingerprint-disable%3Bpassport-disable-id-redir-for-browser%3DpassportSdk%3Bpers_address_should_dedup_addresses%3Besia-am-enabled%3Bcustoms-exp-split%3Bpassport-redirect-to-id-pages%3D(%3F%3C!%5E(showSplit))"
		"%3D%3Bsocial-complete-exp2%3Bsocializm-new-exp%3Bwhatsapp-code-exp%3Bweb-am-auto-ru-url-opening-exp%3Bstart-social-on-single-button-in-social-block-disabled%3Bshow-provider-apple-id-on-restore%3Bauth-social-start-restroration-in-am%3Bremove-back-pane-on-webam-on-social-restricted%3Bshow-auth-another-way-button-on-restore%3Bshow-provider-apple-id%3Blite-flow-update-exp%3Bdelete-account-and-data-exp%3Bdomik-qr-bez-qr-universal-android-link-exp%3Bhide-non-rfc-list-on-image2fa-invalid-x-token%3Bis-cha"
		"llenge-for-image-2fa-enabled%3Bcustoms-pwl-exp-zero-suggest-if-phone-with-accs%3Bcustoms-pwl-exp-disable-reg-from-zero-suggest%3Bflashcall-code-exp%3Bflashcall-reg-code-exp%3Bpwl-exp-support-relogin%3Bpwl-exp-support-phoneconfirm%3Bauth-reg-flashcall-exp%3Bforce-show-code-in-notification%3Btry-to-use-anmon-exp%3Bsepareted-neophonish-reg-exp%3Bpwl-exp-use-customs-folders%3Bpwl4-exp%3Bpwl-customs-exp-yango-play-lite-flow%3Bpwl-customs-yango-pro-single-account%3Bpush-code-for-auth%3Bauth-reg-flashcal"
		"l-by-check-availability-v2-exp%3Bautosubmit-yateamfed-login-exp%3Bprevious-step-link-as-button-on-am-exp%3Bsepareted-neophonish-reg-group2-exp%3Bcommunal-promo-exp%3Ballow-push-multiple-account-suggest-auth-reg%3Brestore-password-by-esia-enabled%3Btmp%2Fnew-phones%3Buser_id_logout_exp%3Buse-only-check-availability-v2-exp%3Bshow-eula-by-tld%3Bmaster-session-allow-exp%3Bdomik-become-child-exp%3Bbadged_carousel%3D1%3Bios_multiple_account_tags_enabled%3D1%3Breporting_sloth%3D1%3Bmake_subscriptions_gre"
		"at_again%3D1%3Bturn_auth_by_sms_code_on%3D1%3Bscopes_screen_new_design%3D1%3Bweb_login_on%3D1%3Bweb_am_on%3D1%3Bpwl-call-am-ready-before-react-hydrated%3Bdisk-disable-metrics-exp%3Bpwl2-exp%3Bpwl-exp%3Btoloka-sso-exp%3Bpwl-allow-auth-push-code-control%3Bbackend_suggest_qr_auth_1fa%3Bcustoms-pay-console-exp%3Bbackend_silent_otp_pushes%3Bbackend_silent_1fa_pushes%3Bbackend_silent_2fa_pushes%3Bsettings_before_multi_etalon%3Badd-user-mode-ignore-exp,1042=Mozilla%2F5.0%20"
		"(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,d=passport.yandex.ru-ico!1!0;,t=155794.4,-cdn=unknown/cts=1735901569192/*", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_url("redirect", 
		"URL=https://passport.yandex.ru/redirect?url=https%3A%2F%2Fsso.passport.yandex.ru%2Fprepare%3Fuuid%3D9d957ab5-6983-44a3-9dd0-d1e3dc323ed7%26goal%3Dhttps%253A%252F%252Fya.ru%252F%26finish%3Dhttps%253A%252F%252Fmail.yandex.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://passport.yandex.ru/", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://sso.passport.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_submit_data("sync", 
		"Action=https://sso.ya.ru/sync?uuid=9d957ab5-6983-44a3-9dd0-d1e3dc323ed7&finish=https%3A%2F%2Fmail.yandex.ru", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sso.passport.yandex.ru/", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=goal", "Value=https://ya.ru/", ENDITEM, 
		"Name=container", "Value="
		"1735901629.10151408.aRpObvbT7WkbHysO.61WWtouGrWnrGV-fT4t82DGjTbKQ8jlEJQdC8SGcbJPSs7yg-ROFtniRRIvhCSoh-swxhI_c_UVohkpWiHks9lmhNIZC7giEhiKkICPwkWlTGkSCWRywdy52pMQrBPqaTeHWLnm-SXAxl8DXoEE9IFtQ8OWXX2HaBfrp-sEJymvMPSdFArDjHJkkuTOs9fUJ_ME0SnHHFsBHA4rBMiuv5aI5ulpOz9WuwBDiUlY4Ky4-9pd7BcfMetPcD_F2V08unbdtiPA6cSPcuuwWZ4Pzzlp-ykRaM5PbIK6eNNEVV4I0AnqciRfMJHEDxbZVqng-pSSbJmqVYf9G23jzmHxp5gfeeU_sYUgd9ST9p8vOOwn8KkdRwXCyY_qIngQk3kIAf8PqZ0CUt0lA655MK81S6mGcABp4AVNZ2na1VGMWDGhu_raaMcyNoHN8LU_gwp6Hss9Naz0zIIjjrLHx3"
		"VhYAmKqhwCdAEhR_ycuw28daSnJFD1Tc2CaLfYRjVmOpStU4wk7bxlDrDBvXXBzb4uxqm515tr0UjG3wIbzlGW_S3_1rK_XepH6l4jlwF7-WmlekSLiwOn8SfFVQZYVuKHUqe0hyGO6YxtmYb8AkZDjcmSAoafIa4Fa1W7RgNkfcpybo0NGUB8IPXz8OdEtwrK_mRY_q4n3KAhdMJrINL072RKDXfEpL2p8Fv4pKeaNtKBTUe173R5pbnGiCAv8BOmsgzBeyMbdaedtMLBX-UUQlF1JKUU-XK0UpCse4nRodalGscSoSDfjPvH3NIvaVXJvQEpSYdujYhxtlxZBC0r7uHOADsXvBjtVLqtCJQeyV_SC5xx4JsYvEZ5YdWztS1LAeTFEsf51DqWhmCrmtiiBG2CIk2hPktLxPKUcHBadMEiKi6hcbZOCQBKwGc6798pO_rWrXFWJpOrsEJ5VCkL-pqCm9ME2ghKrZ534Uu6FKbNLNT3K6QI"
		"OROeWj4I0SxZ-rAXmsBjVd0vnmzwfhnR3rmK2hTPPoQ4qtCU8qCXcfP8CI5vvCT6Y_V8e8CcbPiY-56Zh-_WXWzPDw4wtmgHUaOOoqX1nqxo37jrPaPvHYDBkoHp2g4Kzq0t7bFoneP0HDcQvdpOTOslNhDLiK8k8lAACR8sZD64elNlQScFt4KP__WGi8CJcETzwvcGbqnDXPv8MblhUG0-e1zSmuVkyXvvIjUoDZibySRRqwznRQyw7CaWPiX3NfpqrZ7Cv6T61YpU_D36B-KNyWR0_bCBcAmv_pY5YTw8URymXUggohx1sB4ynagfomgFMO08MC_vYhLORw5iphIRjFoLQ1WpGiTky6r_BfvbbHPmPGNbAKWfB5G9rTzRbpIbYMl0V2apiTOxpQ9gwyx9Y-Zr5NWdPGd_p77numdX0Bt7HcI2GIUT_gJmUgd9K8OaRg4sjtT1Y_cIK3Y43eXfohRXkqVICzH3e_2REcpXV9aEgJlhnn"
		"iNXcBINxo4qgSv1Qzoe_MnC66EZdvuaClIaxaWLblZCXylqEqAF7KJ-V5NCKZ_J_jr3_1oi2oMiU05Ndywb5zXvd25pBkLs1dvVsuHqeVMBTDaX4VnUOZSDPbUmn8VksyFI19HebMzFnK7h5zGZuAPbqvCjkl3C3x9LWSxku9SwliEAvjrx_eBuLXiUw361WpkprfmXuZsMuM_SKMp5_4DrceCV3vgUZ0CJyg5_9uZwhC8OU32fmNnFYDq_hCpfEIvbVXgD5ez9TbZ3sDXdQVw9wu5iISqox89DqbCPWcoUnujBUf_X-BLJO8YHOahxfLMKTXV9SlVMxjhHE0cnr4exZKxkixXxr0Yehy0EmX63Rf4GKy4HHkPyk0MjjV7-lEacucUYiS3S7FNGdIDlDcrmPwSXFZ00uI1rxiU2_In4OljR400uSqWAEJPISts_6QsaTNqdafQhK4Xy2FeXBzvsltHuoOzNYQduQK9rH5BQyJ8R2KL7tLd"
		"wQh4.110qfl-3Ce1peZJbY0PhDA", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("mail.yandex.ru", 
		"URL=https://mail.yandex.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sso.ya.ru/", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-bold.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/nanoislands-1d307024c5c4eafdedcf4b2d100910f1.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/mail-5043479c8ea725e7c0c29249ddd24bad.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/messages-dc005d1b737aa54db39c11c4b13287eb.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/old-efaed7dac6ac2faffcb3c69846860c25.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/left-c796292c8c308d22dce7ffccfe1d0b2c.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/ab69671de1bd8502995d-10.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/6ec4cffcd1bb52fe092a-4.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/d4f5c9f46269a0b41948-2.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/e922bb3520ef9b524448-5.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-medium.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/fa906c9a0907a40b7db6-1.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-regular.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/fe972e381147ac026547-0.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/69c0d32fabe3fe06d0c6-28.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/60f648208e391de5ef2f-24.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/5bd45b6f976a30645a5a-33.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/2213e97c1da3c0868b22-45.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/1-402d650168a8a0489ae8.css", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/notification-center-e5e7baf05bcd505dc256.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/4fe266d1d78fb42a3cf9-42.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/8326df3e30cb5766128d-18.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/651118b267db18ec503b-3.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/0-73b72689fec0c6f7a381.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/ab8c88ef58beec999165-25.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/dc505ad8d19c8b93a518-22.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/d5cb5aa499ab6129d944-37.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/1-402d650168a8a0489ae8.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/53c0969e540074ad5d96-20.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/0-73b72689fec0c6f7a381.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/0ccaea0b251e53ff09b6-40.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/16903286c5ab61bac01b-39.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/4b09d1c5e2e20dc18262-47.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/direct-9d8a6c1e3300a69d56c1.js", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/notification-center-e5e7baf05bcd505dc256.js", ENDITEM, 
		"Url=https://yandex.ru/ads/system/context.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/d2541605b31d1683480b-46.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/subscriptions-1372a635e5b01ce24a3cb0bb1e245692.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/editor-949639c56475b1cfb2b674c25029378a.css", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-yapic/36777/0r-6/islands-200", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/compose-react-ed4a1667c03624783e34d592089e379b.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/compose-manager-eafaa0995b55e546ca1d30747b45ff9e.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/e29b2885ec8908c035a2-27.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/message-95c5b1c60e3a8b6d85722f2795e7f426.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/compose-9c6c4b23ec3d017d28037682092d8518.css", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/09166b971d68524f129f-23.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/dc22b778f507cf99af5f1fbaa09283ad-message.ogg", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/63d9be1e7c3864195c07-34.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/c0d191884b98355c8e4a-38.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/65301c385a1ae5aaff9b-36.js", ENDITEM, 
		"Url=https://yastatic.net/s3/liza/_/promo-7b50c08b4adcf927a62cda7964f60341.css", ENDITEM, 
		"Url=https://yastatic.net/s3/psf/mail-liza-react-client/react-tracing-460746e7d66b2fcf379e.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/5956674fd0fdd7c45be0.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/57bcfd9e2482bf6eab12.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/28c60da322306eea85f3.js", ENDITEM, 
		"Url=https://yastatic.net/s3/home/fonts/ys/3/text-variable-full.woff2", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/cc3eb7227602aea2a356.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/454b3fa45c64f15c3946.js", ENDITEM, 
		"Url=https://yastatic.net/safeframe-bundles/0.83/host.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/739a3f1b20a135fc8afd.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/0a36daf5e89dd66b60ce.js", ENDITEM, 
		"Url=https://yastatic.net/partner-code-bundles/1183758/b005959240c3440cc8c6.js", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5235281/ktLhRxtt8g7ddvNKc1viUw/wx150", ENDITEM, 
		"Url=https://yandex.ru/an/rtbcount/"
		"1VvVyZtp0Ma200000000U9nJVBhcOk7QbmMTXW7iBMMT4yxyikmxM9xE00IUC97GQL7XmR5jcOmCgOn0ySm0zWsP8F7IKWu6XjghGA5MHX0vap7cBqW10yD2Hf4s26ibdBKHH6rW1X9x6QUuoZ4S1SkSPGI9N6K4ITvbP91HPFZBE8k9WM4k4qZaBDD_8BZAv0Pals8IwEgE_nF0pi3mzuQMw6ajDeQ_J5mWovbPWMGlioAGdCeCqZQNsHnaDSXa3h3Lp161fgNvmHFQJZB3_7iLhF8kcFp9xE343t4uI_F_8s3thc2vyujz1mlJ0PR_CC1uaiLwsqLkHgk8DHTOMZ-r7p-tv5Itn4qMi4w63_OFuQotB22_BM0LFCdQmYm45hp0sW02Z3TPOIxuoWeoj8EjWMK2szERn_gkRzsrevDn1jkLmy4BsAQzU_Dynxwdcu9Nii4CFS3cVeAD-H4RZtEebLDsYO5dU5cv-K-uz4Hs66iMExkXeO"
		"MnkQd51dQc7UoC9zZ57x2llFPxpiTblSUDVh3pT71KJU1WNC01zE4AZYazR1j0n0uEnbiS646yWBE1UGNdJCODdDedE1alS3Azu6JymCduWvDn0HT8EzU1Fw8VGR70u93umw6H6yRg1BCENFtlS86xfQ5fXIC0GTNDMG00?", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5217787/WN3SgwtlkfmhkvjtUGwWlA/wx150", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/4936745/YYAB0graWta4Gxu3fJVPSw/y90", ENDITEM, 
		"Url=https://yandex.ru/an/rtbcount/"
		"1PeIe7i20dG200000000U9nJVBhcOk7QbmMTXW7iALqC4y_yifnmi3oT0GWyOIAXzQ5QZB5jcOmCgOn0ySm0zYDD8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aCXLHf3aNKO66GM6luopc1WOvZA1H9OoBG2IQvaYW29dcVu3mLKcHw38AoO1vXdtTGBO6HXEplSGFQt5nl2NYGla46QG0tgP5O7aL6QG4NEPpK7E0Dd20NO6SqIWQMb-y8Isaymmlry5gxmB9dyoEpZnGpp1Klt_24Y8OGNBXFlgErYO3h3yXm76aopMsovoCrf5hBd0qlgf_VYv9QUw9Mv2lChmmVuXdFMM1UJF1Qo29rbRc8N0WXTO6nOqD3ZSP8Kvu2ihoCmEjWQM2MnFRnxhkxvrruvEnXbiLmu7Bs2RzkxDyntxdcuANia6C_C0c_i9DkP7R3pEeLQvlgQMdk5bvU"
		"O_uT8JsM6iMUpiXeOMnkQc5XlOcNQmCvzW5t_0tltotCStUt_-Zlh1pjF1KJM1Wt41nu4_eYiuTfmNsW0YTd0mtkB02E45d0tCApXtC6xWP3h1oNo1a-a59-C7JiOVd8mBk83Xiu8BQCP7K2GmF9WdvDZ83MDrWbaCFqKTBt2tD3IjS0G0d0JDOW00?", ENDITEM, 
		"Url=https://favicon.yandex.net/favicon/bargipsy.com?size=32&stub=2", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5217787/WN3SgwtlkfmhkvjtUGwWlA/wy300", ENDITEM, 
		"Url=https://favicon.yandex.net/favicon/yandex.ru?size=32&stub=2", ENDITEM, 
		"Url=https://favicon.yandex.net/favicon/nuum.ru?size=32&stub=2", ENDITEM, 
		"Url=https://favicon.yandex.net/favicon/practicum.yandex.ru?size=32&stub=2", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5426325/U_BSGhSUoy3TfBxI1VDVIQ/x90", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5426325/U_BSGhSUoy3TfBxI1VDVIQ/y180", ENDITEM, 
		"Url=/u2709/favicon/png/main-favicon/32/0.png", ENDITEM, 
		"Url=https://static-mon.yandex.net/static/main.js?pid=yandex_mail", ENDITEM, 
		"Url=https://yastatic.net/daas/atom.js", ENDITEM, 
		"Url=https://yandex.ru/an/rtbcount/"
		"1TGNDIBo0MK200000000U9nJVBhcOk7QbmMTXW7iFdkBbv_vPVdkO7aw0n1umaH2itV-zezjosHaI6K4YcS6iF_P0X8lBULWOAYz2XHgPGIHCnbR_uCKC30iP0nAXB1MmbaRGTG6PY2nbt6Agnp3KR3CMKQGo5L6aEHTHWOPHOQ_ZBEO61ZcCe54pZBz1uAhJCU0x5TC0dSqTkG4i3CmnEGybJgjnSRmbuaBP3apAv3iPLO4abEPGThcCfk3h0QPp06scZaYqBGqFtX2sqbcc7-lWbNU1PC_cHsS-24EPsd-VmJitXKihV_PTx0m7M3v3mEC9rcijrtaPhIAM7E1fVLJ-_5pIqvrIzna0Uja-63_4CvwomBosm9MmPEiBSn2OC4Bh0qB6XeKRhB27F2L5MHc1ri3omIsfpUFzLtVkcj79-CCjYk7WnUmJNltvlcEVKyt1QzaWvbvWCtc11lp8pOUvr2hB1UdSF_midBpdt3fYUmmrYnsTa"
		"D32sDpKuiDx4mxs1bFi8i_O5zvxVUSZyjwZnlzOEVfuAYQmC6uW0FemHKSbmwnRW0HEpWORt5WXF02pWRc5Pmp6JTmQf_WPBp0oVI1a_479-C2Bf1UhWD_H3-2Oe11GVIRGoCtZDK9PWNy-EzmWRkbeMc58m3PDCol?", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5338229/EFowg_WDoaR-GL6LL8wWhQ/x90", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5338229/EFowg_WDoaR-GL6LL8wWhQ/y180", ENDITEM, 
		"Url=https://favicon.yandex.net/favicon/contract.gosuslugi.ru?size=32&stub=2", ENDITEM, 
		"Url=https://yandex.ru/an/rtbcount/"
		"1LOY8XZy0N0200000000U9nJVBhcOk7QbmMTXW7i6hSxbf_vPVdkO7aw0n1umaH2lRXDP6FRCXaPKXc1ufa1x1SkWiHBYpaO66gl0eLQ6K7aJCOSFP021eQ5Z2M7m0o6bN3MHf3K1cOWiPVnmXmvXgDWcREC896hZ239kumCCWeCVnbdCJ4mp6K2YInbMW0arp9504NEClq7WgjCXu4YhvW4D0pssmImCp2iNlzAwhGM6yDV9YwGGvXPWMGlioAGdCeCCc8kipd86I1REC3EO8u8D2tD3vxGTf8PvlUhO9LtmUHFPWSdVeWdMEh_7m7xPmNBcpiiErYO3h3yXm76aopMsovoCrf5hBd0qlgf_VYv9QUw9MwoGFpwmVuXdFMM1UJF1Qo29rbRc8N0WXTO6neuRhB2hF_A2ZAnWws1PGBRqvl7-gvltRMZat46svN3mGlOfhrxytp7lgURWbUomKmym6PpWetv4HkFSwXLgNDAX7zuMRdvJx"
		"ZqH7OOQnOxkw6XXR6vgSK6TgOTxCmdsCKVi7U_FFVnpTwVlwD-iFDqS5HDu61Sm07qtWgEBotC6q343Wx6MnmOuRk0iu5v1USEnWsSarXES39Vu6JwmCduWvDn0HT8CzU1Fw8VGH70qE3tmg6H6yRg1BCEFFlaS86xfQ5fXIC0Vo7GxW00?", ENDITEM, 
		"Url=https://favicon.yandex.net/favicon/xn----9sbdzhj4bie6fq.xn--p1ai?size=32&stub=2", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5161428/oYuGE084W9V1H4RcmSBuRQ/x180", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5161428/oYuGE084W9V1H4RcmSBuRQ/y90", ENDITEM, 
		"Url=https://clck.yandex.ru/click/dtype=PS/project=search_mail/action=suggest-compose/product=web/uid=2064807418/filed=to/field=to/suggest_used=yes/suggest_show=yes/pos=1/count=1/user_text=/search_text=belkatestit%40yandex.ru/*https://mail.yandex.ru/?uid=2064807418", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5332322/h5o2sLPcOrZR4fLznExXxQ/y90", ENDITEM, 
		"Url=https://avatars.mds.yandex.net/get-direct/5332322/h5o2sLPcOrZR4fLznExXxQ/x180", ENDITEM, 
		"Url=https://yandex.ru/an/rtbcount/"
		"1OuG4P7v0Mi200000000U9nJVBhcOk7QbmMTXW7iQpmgLftvPVdhO7aw0n1umaH2ENczv6BRCXaPKXc1ufa1x0xs8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aCXLHf3aNKO66GM6luopc1WOvZA1H9OoBG2IQvaYW29dcVu3mLKcHw38AoQ1A_yNVGzWPs1OqRTC-hGM6yDV9YwGGvX13kXbLWIIKvb1HinbDWSv0sGB1zWPp161fgNvmHFQJZB3_7uLhF8kcFp9xE343_44I_N_8o0XXXKizmwexc1XEi3o7mOOJx9ORxl8pMWLiUO2I-kdzkFdbfpgbhW9yIh31_k7SDPR5f0_5x0AdcHjOHO22zvaXTdybHLaM0TR0yi4jgStZ_LTtxfhHoVZ3BOhXuCNi4rxz-RvZdrFDmMlP8CPTe3D_GGRyoCs7kTGgxGA3x-0yB9oyvzmwOdiCD"
		"OiTdP3GmjZSrEB3UnCEzYPJx2BFs3lVddkuvkzFtz7_M3dwU2eci31k83Zm1_H5HmxpWjj014xE1XlSM04xGBE1kOLd3iODt1EOZd1oNo1a-a39-CFJiO5NC1WMS45DE4ZAEmP7imJScpaXh4wmIo6dwAE5xXR6ffME080WmdFJG00?", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("click_10", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t82.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.1033/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;"
		"1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,2129=1735901570190,1036=4,1037=0,1038=557,1383=557,1039=1761,1040=1357,1040.906=3675,1310.2084=6,1310.2085=1358,1310.1309=6,1310.1007=1501,3140=8,3141=20,2116=561,2114=4,2131=3829,2123=3823,2770=3680,2769=2328,2113=4,2112=4,2111=4,2117=561,2120=3679,2119=2322,2115=4,1484=1,2437=2771,2870=4g,rtt=50,"
		"dwl=4.8,rawType=undefined,-cdn=mskstoredata/cts=1735901574025/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0"
		",-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=1926.2793,207=3238.7,-cdn=mskstoredata/cts=1735901574026/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;"
		"1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287"
		"=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=1926.2794,207=3238.7,-cdn=mskstoredata/cts=1735901574026/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("liza1", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=folders,labels,messages,stickers,tabs", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t83.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901574015,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0"
		",-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0"
		",-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\""
		"\",\"models\":[{\"name\":\"folders\",\"params\":{},\"meta\":{\"requestAttempt\":1}},{\"name\":\"labels\",\"params\":{},\"meta\":{\"requestAttempt\":1}},{\"name\":\"messages\",\"params\":{\"current_folder\":true,\"with_pins\":\"yes\",\"sort_type\":\"date\",\"threaded\":\"yes\",\"tabId\":\"relevant\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"stickers\",\"params\":{\"type\":\"reply_later\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"tabs\",\"params\":{},\"meta\":{\"requestAttempt\":1}}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("52122583", 
		"URL=https://mc.yandex.ru/watch/52122583?browser-info=rn%3A647117%3Ac%3A1%3As%3A2560x1440x24%3Aen%3Autf-8%3At%3A%D0%AF%D0%BD%D0%B4%D0%B5%D0%BA%D1%81%20%D0%9F%D0%BE%D1%87%D1%82%D0%B0&rn=119436&page-url=https%3A%2F%2Fmail.yandex.ru%2F&page-ref=https%3A%2F%2Fsso.ya.ru%2F&site-info=%7B%22serviceId%22%3A%2267%22%2C%22workspaceId%22%3A%22supportMail%22%2C%22orgId%22%3A%22undefined%22%2C%22version%22%3A%221.20.0%22%2C%22visitId%22%3A%22msngr_widget_0ne46%22%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t84.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body= ", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("unread_count", 
		"URL=https://yandex.ru/messenger/api/unread_count?parentOrigin=https%3A%2F%2Fmail.yandex.ru&rn=705433&reqNum=1&other_guid=f9bcfd00-dbce-9456-5051-c1497d71c663&serviceId=67&client=supportMail", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);

	web_url("unread_count_2", 
		"URL=https://yandex.ru/messenger/api/unread_count?parentOrigin=https%3A%2F%2Fmail.yandex.ru&rn=536859&reqNum=1&other_guid=f9bcfd00-dbce-9456-5051-c1497d71c663&serviceId=67&client=supportMail", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t86.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("iframe-api", 
		"URL=https://yandex.ru/chat/iframe-api", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Request-Id", 
		"173590157961329748");

	web_add_auto_header("Origin", 
		"https://yandex.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Application-Id", 
		"undefined_supportMail");

	web_add_auto_header("X-Version", 
		"5");

	web_custom_request("csrf-token", 
		"URL=https://yandex.ru/messenger/api/registry/csrf-token/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://yandex.ru/chat/iframe-api", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_header("X-CSRF-TOKEN", 
		"13f215cc6643009c3af764e46d73a37a86e4d577:1735901580");

	web_add_header("X-Origin-Service-ID", 
		"67");

	web_add_header("X-Request-Attempt", 
		"0");

	web_add_header("X-Request-Id", 
		"173590157992177385");

	web_submit_data("api", 
		"Action=https://yandex.ru/messenger/api/registry/api/", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://yandex.ru/chat/iframe-api", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=request", "Value={\"method\":\"request_user\",\"params\":{\"bind_phone_number\":false}}", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("PreferAnonymous");

	web_revert_auto_header("X-Application-Id");

	web_revert_auto_header("X-Version");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("-6604027304460592741", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-4580527958402001268/-6604027304460592741", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3_6", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"b3f18f97-a29c-4547-9f63-dfbfb3b3984f\",\"onlineIdTicket\":\"t=GwAmAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAELPqwQNxs/57rbUIhaGLtLHwACG/hjh8DnQsX93wmv7YDY9u3tYT2p0wlwStA17vauuyvqO7+NSej9tQpMvFkixXp8TjTMlxxmcQaynrDLN+qP+zBGy7Elr/"
		"vRCSCYBBwj0juzXBD87J1DGVc7IFfgU4rhLdApSuicUtwd68gj5KsEvLTOmFNhCa1+hxOj8ky5QuPUlHQvtb7VitT9hzxne4fb4S5vtoTOhGYO2N7aTQBC2OU5kkiKMuJJFI9RFz6X6lXubhkU93aHUeevVSvZNogv01M7QhhTGUZ95tf/FMXxhUUpDa7FYB+sOzNne5r3Vb3NqiLZK/H/pdy+rc4110ix4B&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4602.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":"
		"\"131.0.2903.112 (Official build) \"},\"client\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\""
		":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://yandex.ru/chat/iframe-api\",\"ip\":null},\"referrer\":{\"uri\":\"https://mail.yandex.ru/\",\"ip\":null},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"e20bea48-6a72-4eab-b015-b9fcef665a44\",\"synchronous\":false}", 
		LAST);

	web_add_header("Origin", 
		"https://yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("vapid_key", 
		"URL=https://push.yandex.ru/v2/vapid_key", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://yandex.ru/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_2", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=promozavr-config,promozavr-user-config", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"promozavr-config\",\"params\":{\"version\":\"\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"promozavr-user-config\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580697,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0"
		",-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,"
		"0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,"
		"0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("40081755", 
		"URL=https://mc.yandex.ru/watch/40081755?wmode=7&page-url=https%3A%2F%2Fmail.yandex.ru%2F%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&charset=utf-8&exp="
		"VvTZMa8-zG7kOnX7hrDKIk9i5Hw5fW6Q_IEcMkYXgw3cu9ZeDU0i5wqw1hA2tkRCkWpJ85B3uuMn5EuFA7tGq2HhOZFR7mbvd4Vg1se1w5L9xzvqq4riUaBA04oEEYou8g3THEASNRut3lM2cm5hcABmuKapycrejaBLbWdlx-97w8wPACCaMiDcPR2Mp8Es1jP4UNoZ3CDHulvv1BwvDTs-d4hEhlTZ_AQkGs8SMZupFEKgcMv-tzwkg9Pr25bamhXqQFuO8cAN2zIOg_wUrjzQjqoExG2wdTJroEDmTl6GpXzOb7b_T6Z7O0qFpG_7oGGfNKGgQTYba3C64jC29MfQZVIxY8O0yum_lL8cwD3IDeK6nUK5dHXcSodc21hBffyKaBFEL1YtFh5U4-lKKmNLN_pyPvpgI3GSoyEdfwrV5VNEjeW3zw8SmNRYgH6_32xde8NNdrFDDJ6IedjUjQpd7szuAZgu_L5afoUc0c2hpQaokpFD9O"
		"o2T0oU5gvRAiXrF4dlKBhIH6w2eRLzxDzK8FH9S3yi5VusjkHdK2rz6hTljKBklg2X_bTjPs7onWlayd4TurOK_WMNyP_0q68yEQAGtQYCCkVE5sz7rttKl0cY3iR8Bzp0xnDCJG5CaYmXS6SMERQq-uFX-ubUP6XG2i2S8DAK3SKG45_EFbgDXe7_BdtiJ5Q-IpJTvQek2xA0hZVM-EP5mVHXLi2Z3WwZI5kjNgjY1wQCHYOdiV-fjTnWCGbmdA%2C%2C&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135300%3Aet%3A1735901581%3Ac%3A1%3Arn%3A403236968%3Arqn%3A1%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Afp%3A3239%3Ads%3A0%2C557%2C1761%2C1357%2C4%2C0%2C%2C1%2C6%2C%2C%2C%2C3823%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Afip%3Ad9cbf386f9f7c43"
		"2e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901581&t=gdpr(13-0)clc(0-0-0)rqnt(1)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)fip(1)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("click_11", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t95.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,"
		"12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=Performance_showFolders,207.2154=-0.4,207.1428=10533.6,2877=10534,-cdn=mskstoredata/cts=1735901580724/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680"
		",0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project="
		"liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A70%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901580746,-type=string,-name=adRequest/cts=1735901580746/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1"
		";924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2161%22%2C%22statId%22%3A65%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901580747,-type=string,-name=adRequest/cts=1735901580747/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1"
		";924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A70%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22ns-router-redirect%22%7D,-ts=1735901580793,-type=string,-name=adRequest/cts=1735901580793/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;"
		"877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76"
		";1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2161%22%2C%22statId%22%3A65%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22ns-router-redirect%22%7D,-ts=1735901580793,-type=string,-name=adRequest/cts=1735901580793/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;"
		"877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76"
		";1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A70%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901580829,-type=string,-name=adRequest/cts=1735901580829/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;"
		"814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;"
		"1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2161%22%2C%22statId%22%3A65%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901580830,-type=string,-name=adRequest/cts=1735901580830/*", 
		LAST);

	web_custom_request("click_12", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t96.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,"
		"12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=1401,207.2154=10774.6,207.1428=10774.6,2877=0,2924=28.176.2048.2314.2389,2925=0,689.2322=10774.6,-cdn=mskstoredata/cts=1735901580965/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1"
		";1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143="
		"28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=2046,207.2154=10647.7,207.1428=10774.7,2877=127,2924=28.176.2048.2314.2389,2925=0,689.2322=10774.6,-cdn=mskstoredata/cts=1735901580965/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;"
		"848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=487,207.2154=10647.7,207.1428="
		"10774.7,2877=127,2924=28.176.2048.2314.2389,2925=0,689.2322=10774.6,-cdn=mskstoredata/cts=1735901580965/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;"
		"1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=Performance-initMessageList,207.2154=-0.2,207.1428=10774.8,2877=10775,-cdn=mskstoredata/cts=1735901580965/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_3", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=system-status", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"system-status\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580694,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089"
		",0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1"
		";1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\""
		"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_websocket_connect("ID=0", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_4", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=collectors", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"collectors\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580745,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,"
		"-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;"
		"1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\""
		"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("click_13", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t100.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=2876,207=10813.7,-cdn=mskstoredata/cts=1735901581004/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_5", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=filters", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"filters\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580745,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;"
		"1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;"
		"1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\""
		"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_6", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get-subscription-counters/v1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get-subscription-counters/v1\",\"params\":{\"optinEnabled\":false},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580750,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0"
		",-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,"
		"-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,"
		"15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_18", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135301%3Aet%3A1735901582%3Ac%3A1%3Arn%3A789019864%3Arqn%3A3%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901582&t=gdpr(13-0)"
		"mc(p-1)clc(0-0-0)rqnt(3)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(2)ti(1)", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t103.inf", 
		"Body=site-info="
		"%5B%7B%22Yandex%20header%20PRO%22%3A%7B%22Login%20header.Right%20part%22%3A%7B%22Portal%20navigation%2FServices%22%3A%7B%22yandex.ru%22%3A%7B%22More%22%3A%22Show%22%2C%22Mail%22%3A%22Show%22%2C%22Disk%22%3A%22Show%22%2C%22Documents%22%3A%22Show%22%2C%22Calendar%22%3A%22Show%22%2C%22Premium%22%3A%22Show%22%7D%7D%7D%7D%7D%2C%7B%22theme%22%3A%7B%22u2709%22%3A%7B%22%D0%BE%D0%B4%D0%BD%D0%B0%20%D1%81%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0%22%3A%22general-default%22%7D%7D%7D%2C%7B%22stat%22%3A%7B%22ee"
		"xp%22%3A%22539434%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22500420%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22722413%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22814988%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22877126%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22924339%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221030704%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221103680%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221104225%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221105295%22%"
		"7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221151124%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221162876%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221163247%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221170089%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221174879%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22610121%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22848713%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22944321%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22985006%22%7D%7D%2C%7B%22stat%2"
		"2%3A%7B%22eexp%22%3A%221024668%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221030455%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221075392%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221104478%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221142331%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221152849%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221150928%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221158907%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221179603%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%2"
		"2%3A%221104704%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221140931%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22985890%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22715756%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22762607%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22705044%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22943630%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221160418%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221086206%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22261659%22%7D%7"
		"D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22134421%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%22188836%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221117098%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221183344%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221180242%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221180238%22%7D%7D%2C%7B%22stat%22%3A%7B%22eexp%22%3A%221180240%22%7D%7D%2C%7B%22stat%22%3A%7B%22puid%22%3A%222064807418%22%7D%7D%2C%7B%22lang%22%3A%22ru%22%7D%2C%7B%22tabs%22%3A%22yes%22%7D%2C%7B%"
		"22version%22%3A%22191.1.0%22%7D%5D", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_19", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135301%3Aet%3A1735901582%3Ac%3A1%3Arn%3A630117342%3Arqn%3A2%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901582&t=gdpr(13-0)"
		"clc(0-0-0)rqnt(2)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(2)ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22adSessionID%22%3A%229696341735901581656%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t104.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_7", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=userphones", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"userphones\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901581007,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,"
		"-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;"
		"1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\""
		"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("cc", 
		"URL=https://mc.yandex.md/cc?wmode=7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_websocket_connect("ID=1", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB1", 
		"OnMessageCB=OnMessageCB1", 
		"OnErrorCB=OnErrorCB1", 
		"OnCloseCB=OnCloseCB1", 
		LAST);

	/*Connection ID 1 received buffer WebSocketReceive1*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_8", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=signs", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"signs\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901581007,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;"
		"1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;"
		"1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\""
		"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_9", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=messages-pager", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t109.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"messages-pager\",\"params\":{\"current_folder\":\"1\",\"tabId\":\"relevant\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580984,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,"
		"-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,"
		"-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,"
		"8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("92550", 
		"URL=https://yandex.ru/ads/meta/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&pcode-version=1183758&pcodever=1183758&comboblock-unencoded-vast=1&ad-session-id=9696341735901581656&target-id=51989608&pcode-test-ids="
		"1111484%2C0%2C72%3B1173005%2C0%2C38%3B1135992%2C0%2C20%3B1179650%2C0%2C62%3B1184115%2C0%2C7%3B1170777%2C0%2C23%3B1183716%2C0%2C29%3B1139808%2C0%2C34%3B1164347%2C0%2C50%3B1175802%2C0%2C9%3B1175871%2C0%2C8%3B1180617%2C0%2C27%3B1178013%2C0%2C26%3B1183758%2C0%2C6%3B912288%2C0%2C77&pcode-flags-map="
		"eJylWF1znLgS%2FS88G68EiI%2B8aaBhVAMSkcTYzlZKhT141xvbs9cf2d2k8t9vCfBkwM5MtvbJBqaPWq3u06f11VlTZQpJF6YEXuil8%2B7Xr87n9va5c945Hgpi58R56h6f2MZ558QoRlHgfPt40pudSVqbkikNHKRZXBjBU5gAaNnAPgDGfhASb4egGrmGC8O40hJoZSqRgeQmA8UKPkF6vGpvO3Pf%2FTWFI56H4x1co8CsmZaMU6PX5n0D8sLUVNJqgtX9%2FecMJfQSMqCwDIRh3OiCGpX1iINvjBemgoxRk7MS1ATwevtg2tvbGWgSR7gH1YUwI3DBhQSj2Ac47FEcIIx6YykNSJYZLcyaKn3MDPvR9%2BhquijBrEEqJqbhxDj2Y%2BTPrQNv8LhqSs0WlNtzbTjLGWSGcQ0yp%2BlBz0kSe9HggQ3dYtXvVZlcSLOLbSqqhTiEEkZJgKKX7XM4MxJ0I7mhuQZp0pKlK6OXUj"
		"TF8mC%2BRRijIOmBVEWltinRgIHz2ixKmq767N1H%2BNW5a29uTx%2BenRPnn%2FZ%2B0%2F19%2BvD8y81d%2B1v3OHn1W3vXv9l86e6Hn7efb562w793p3sPm%2Fub8a1F3iE4J85D%2B%2BV2%2B%2BX38fOXh%2BHv80N7et%2F99fjqB3%2B027ub0XT7yf79ONkqib0hZgq0ySCnTalNTQswvKkWIA9FPCLYj4aEu6BKU81SkwNkZlGKdGVYZs6WTMMb8ZIuc70gwR4KXOycTJ692bM%2Few76Z%2Bp6BCMUeaM9dUkcByF2Md69CCNMIrvAxwkdJSEOe6dzZUohapOz80PbjInvY7%2B3sFlV1NqoVLL6YFnFke8lA%2BtlTPUlNWRgKnjOZEX1vLpmAIlH%2FHhYNfsAfCCVFZSgj9nh2Esm7LakPCvtMfDV6IStLJrphh%2Bsy8SPPDIQpaIVmAvKMzg3magoO%2BxDhKIwmW"
		"xe1MClXphaQm0q0NQsmnJ1ECQhwcgKoGlhlkCzw%2FmIEYpJOJARVRc8HSp33%2BSr89g92Qzc%2B26sXxnV1JSCZs7J9BvwDGywZu%2FHD7O3tif%2BCOCHSzDOtBle0CwX57PPFWjJVtSkorFkOvuaCrFiYCqq06XtNm%2F%2FqpaiYgpeLdwXut3%2B6GXPtrNfTRnYCN47bGvq9%2B3j06MNpm1jH79NTgLHUTJyqKr7JjQ2wjOml6LRRkLGJKTaCF5eHO9SyItQPHBNrs1LVtG6LsWaccOEMsCzlMrsCEziIbKrjh2OUqD3G04qgWq2tsdH02XvtP1xWlJWHUtCL%2FH3tp6zc3POqKiYkfC%2BAaXVYXPfIxHZmaeN0qIypSgMy%2BmURQPSte0lDt2ka6%2FdIGp99zIKN257fRkGSdeSDbFkGpE2DkOfuFebMHGDJL52k00Suxhdtbjd4Pays5SZguf5YYBdb0ECN0A%2BcRdk"
		"kbielxCCATLIcufESUgX%2B5u4dUnQBW6w8T23jXDg4su2vYyjK0ySjV0U%2FCDwvdgNwsh3A4KpuwjDwF34IeRengY5Sia8jJEfJHH81sZrkCnwSX6gU4TIz1mneTFlgARHGEeJ57zDJ46PUBJ7AcLOO%2FztB4C2Zl8E0VCoh08wiMJRGaZKjoKyYFV1WL6hIPHCcGamQK5BuoplR4wJ8sautqu3vhX%2FqAOHfoKCyCezMyB%2B4A2u9zq9svqtkLQ0lKuzY4lPEoK9nQ%2B1pSSjJU1XINV0dR9hzwtDQhx7AjgMAo%2FMXYmDeNyRrExe0uJI3cRJFI9SpoZ0kJ8NZ%2B8t0WV9advuXZc0hWqWTa%2FBEhKOcShAm%2FXKZFCJUdcsLoymBcumWYUJQcTOHI9%2F%2FmKB3M83m27rfv7kdpub%2B203PJ%2F%2B8bi9d6aJloQIf5%2BPaJYN04ey6r1v140s96hJFwdlMLaAoy"
		"oTtWYV%2BwAmXUK6MllTlyylGn4inBgj7H%2F3CnjPk3oJFRioan1haGoljKkph%2FJfSnWMPWwHiYmPVhRkqj5iF5IxVju7oheulRijdsQ%2BSsJhXTjXIDktTaZqm6Vc1UJqc7S6cYCCURTBed0H0q6shlFPL8W0Ad15M2svib%2BHNW%2FKUqUSgL%2BItHRJeQFGSAZcHxWJGIdBTMId3pqlJgVW9qlDy9QsgRXLI%2FNfGPqet5d%2FuTg3dhqoGP85%2BygJolctNS2FneUarQU3%2BZFjiQhGeAchGj2O9qVd3WonS8Ez%2Brl6ms3OkY%2F2Wruto1RCBlwzWg69%2Fc0GfL19cNvbW%2Feh%2B99zZwXN9OqBJMmrqwdJeSYqcwZlKioYxqVUlOIVP7qP3W139dRtZp4mIUE7UC7MGSwqq6w0s1I%2FPjqv4%2B%2F7VEvRlMOdQ1qnpqbpSi2FHiR%2Bo18uEQaxdeSeJULR"
		"qLgHrTaIHwm5BLU0ilV1eewKwo9G0n4LYRjIbXr8FxRbp7O6QKfJvwCo6Pmgkyde3Nxf%2F4wXQxR2WJpVIJoJUogQQj%2Flzks0DqH5%2Fw3NNFyzcvy6j4sP4Nq8klVtgEr1RmJfPT8%2Bbe%2FMpn34NCuWJEbxvGcsbLUMY29xjMv8kUhs8aq6ZNoSGc1o3WvxtXeEAEiMhloFpYCn8OKCWkrGDw6bvfF48zYUjHVa6CXIcW5ZCsk%2BCK5padb%2BYT9iFOLxIgqGW8lBixW0PsaDMRpvGupUZLCeUV5%2FRiR%2BlaZ9P%2Fr2f%2Fa8OtQ%3D&pcode-icookie=KN4YJN2fwz%2B4oUc0YnlO7ehmT5iRutE882mLt2mZpKsas2F0jd69R08CC3ZSOhRkdrtDAZv7ejGiR9ZeW8vuJB3dHqI%3D&disable-base64=1&duid=MTczNTkwMTQxOTg3NzMwMDQ4NQ%3D%3D&"
		"imp-id=2165&ecma-version=es2017&charset=utf-8&partner-stat-id=70&test-tag=7696581394434&tga-with-creatives=1&top-ancestor=https%3A%2F%2Fmail.yandex.ru&top-ancestor-undetermined=0&uid=2064807418&layout-config="
		"%7B%22win_width%22%3A1241%2C%22win_height%22%3A1281%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A4.8%2C%22isInIframe%22%3Afalse%2C%22w%22%3A684%2C%22h%22%3A36%2C%22width%22%3A697%2C%22height%22%3A36%2C%22visible%22%3A1%2C%22fullscreenHeaderHeight%22%3A80%2C%22left%22%3A348%2C%22top%22%3A76%2C%22ad_no%22%3A0%2C%22darkTheme%22%3Afalse%2C%22safeArea%22%3A%7B%22top%22%3A0%2C%22bottom%22%3A0%2C%22left%22%3A0%2C%22right%22%3A0%7D%2C%22req_no%22%3A0%7D&grab-orig-len=48&grab="
		"eyJncmFiX3ZlcnNpb24iOjIsImZvcmJpZGRlbiI6MX0KrP__&uniformat=true&callback=Ya%5B4121202387224%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_10", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-mail-reset-recent-counter", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-mail-reset-recent-counter\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901581008,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;"
		"1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;"
		"877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76"
		";1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_11", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get_user_activity", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get_user_activity\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901582010,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("monitoring_liza.txt", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?allTime=127&allSumTime=23&requestTime=0&selfTime=127&full=127&collectModels.0=5&requestModels.0=0&collectViews=1&generateHTML=11&html2node=1&triggerHideEvents=0&insertNodes=2&triggerEvents=3&blockname=messages&request=0&event=BlockTimings&visibilityState=visible&show=127&browser=Edge&uid=2064807418&login=belkatestit&cid=LIZA-12390077-1735901572153&loc=https%3A%2F%2Fmail.yandex.ru%2F%23tabs%2Frelevant&cv=191.1.0&lcl=ru&cdn=mskstoredata&exp="
		"539434%2C0%2C-1%3B500420%2C0%2C-1%3B722413%2C0%2C-1%3B814988%2C0%2C-1%3B877126%2C0%2C-1%3B924339%2C0%2C-1%3B1030704%2C0%2C-1%3B1103680%2C0%2C-1%3B1104225%2C0%2C-1%3B1105295%2C0%2C-1%3B1151124%2C0%2C-1%3B1162876%2C0%2C-1%3B1163247%2C0%2C-1%3B1170089%2C0%2C-1%3B1174879%2C0%2C-1%3B610121%2C0%2C-1%3B848713%2C0%2C-1%3B944321%2C0%2C-1%3B985006%2C0%2C-1%3B1024668%2C0%2C-1%3B1030455%2C0%2C-1%3B1075392%2C0%2C-1%3B1104478%2C0%2C-1%3B1142331%2C0%2C-1%3B1152849%2C0%2C-1%3B1150928%2C0%2C-1%3B1158907%2C0%2C-1%3"
		"B1179603%2C0%2C-1%3B1104704%2C0%2C-1%3B1140931%2C0%2C-1%3B985890%2C0%2C13%3B715756%2C0%2C52%3B762607%2C0%2C8%3B705044%2C0%2C99%3B943630%2C0%2C12%3B1160418%2C0%2C48%3B1086206%2C0%2C3%3B261659%2C0%2C59%3B134421%2C0%2C43%3B188836%2C0%2C33%3B1117098%2C0%2C61%3B1183344%2C0%2C8%3B1180242%2C0%2C15%3B1180238%2C0%2C76%3B1180240%2C0%2C5&kclbd=n&csw=undefined&lifetime=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t113.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("monitoring_liza.txt_2", 
		"URL=https://mail.yandex.ru/monitoring_liza.txt?event=LoadingTime&theme=general-default&regDate=1735142319000&regionId=213&prepare=6.6760&static-load=6.6750&handlers=0.2990&static-run=3.4370&parse-prefetch=0.0070&pageinit=0.0100&first-draw=0.2380&trigger-init=0.0480&log-timings=1735901581.0520&timeout=8.5340&tm.connectStart=1735901570194&tm.secureConnectionStart=1735901570194&tm.unloadEventEnd=0&tm.domainLookupStart=1735901570194&tm.domainLookupEnd=1735901570194&tm.responseStart=1735901572512&"
		"tm.connectEnd=1735901570751&tm.responseEnd=1735901573869&tm.requestStart=1735901570751&tm.domLoading=1735901572518&tm.redirectStart=0&tm.loadEventEnd=0&tm.domComplete=0&tm.navigationStart=1735901570190&tm.loadEventStart=0&tm.domContentLoadedEventEnd=1735901574019&tm.unloadEventStart=0&tm.redirectEnd=0&tm.domInteractive=1735901573870&tm.fetchStart=1735901570194&tm.domContentLoadedEventStart=1735901574013&nav.type=0&nav.redirectCount=0&uid=2064807418&login=belkatestit&cid=LIZA-12390077-1735901572153"
		"&loc=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&cv=191.1.0&lcl=ru&cdn=mskstoredata&exp="
		"539434%2C0%2C-1%3B500420%2C0%2C-1%3B722413%2C0%2C-1%3B814988%2C0%2C-1%3B877126%2C0%2C-1%3B924339%2C0%2C-1%3B1030704%2C0%2C-1%3B1103680%2C0%2C-1%3B1104225%2C0%2C-1%3B1105295%2C0%2C-1%3B1151124%2C0%2C-1%3B1162876%2C0%2C-1%3B1163247%2C0%2C-1%3B1170089%2C0%2C-1%3B1174879%2C0%2C-1%3B610121%2C0%2C-1%3B848713%2C0%2C-1%3B944321%2C0%2C-1%3B985006%2C0%2C-1%3B1024668%2C0%2C-1%3B1030455%2C0%2C-1%3B1075392%2C0%2C-1%3B1104478%2C0%2C-1%3B1142331%2C0%2C-1%3B1152849%2C0%2C-1%3B1150928%2C0%2C-1%3B1158907%2C0%2C-1%3"
		"B1179603%2C0%2C-1%3B1104704%2C0%2C-1%3B1140931%2C0%2C-1%3B985890%2C0%2C13%3B715756%2C0%2C52%3B762607%2C0%2C8%3B705044%2C0%2C99%3B943630%2C0%2C12%3B1160418%2C0%2C48%3B1086206%2C0%2C3%3B261659%2C0%2C59%3B134421%2C0%2C43%3B188836%2C0%2C33%3B1117098%2C0%2C61%3B1183344%2C0%2C8%3B1180242%2C0%2C15%3B1180238%2C0%2C76%3B1180240%2C0%2C5&kclbd=n&csw=undefined&lifetime=0&afterload=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t114.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_12", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=app-badge-counter", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t115.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"app-badge-counter\",\"params\":{\"uid\":\"2064807418\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_locale\":\"ru\",\"_timestamp\":1735901582173,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("v1", 
		"URL=https://mail.yandex.ru/web-api/journal/v1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t116.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"messages\":\"[{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":70,\\\"trigger\\\":\\\"after-page-load\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"right-col-rtb-1\\\",\\\"id\\\":\\\"R-I-92550-2161\\\",\\\"statId\\\":65,\\\"trigger\\\":\\\"after-page-load\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\","
		"\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":70,\\\"trigger\\\":\\\"after-page-load\\\",\\\"pageName\\\":\\\"ns-router-redirect\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"right-col-rtb-1\\\",\\\"id\\\":\\\"R-I-92550-2161\\\",\\\"statId\\\":65,\\\"trigger\\\":\\\"after-page-load\\\",\\\"pageName\\\":\\\""
		"ns-router-redirect\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":70,\\\"trigger\\\":\\\"after-page-load\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"right-col-rtb-1\\\",\\\"id\\\":\\\"R-I-92550-2161\\\",\\\"statId\\\":65,\\\"trigger\\\":\\\"after-page-load\\\","
		"\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"mids\\\":[\\\"188306759419428877\\\",\\\"188306759419428874\\\",\\\"188306759419428871\\\",\\\"188306759419428868\\\"],\\\"tabId\\\":\\\"relevant\\\",\\\"foldersTabsEnabled\\\":true,\\\"reason\\\":\\\"mail-list-render\\\"}]\",\"model\":\"do-client-log\",\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\""
		":1735901581229,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;"
		"715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;"
		"1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("v1_2", 
		"URL=https://mail.yandex.ru/web-api/journal/v1?_m=do-journal-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t117.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"BodyBinary={\"messages\":\"[{\\\\\"target\\\\\":\\\\\"folder\\\\\",\\\\\"fid\\\\\":\\\\\"1\\\\\",\\\\\"fidName\\\\\":\\\\\"\\xD0\\x92\\xD1\\x85\\xD0\\xBE\\xD0\\xB4\\xD1\\x8F\\xD1\\x89\\xD0\\xB8\\xD0\\xB5\\\\\",\\\\\"isUserFolder\\\\\":false,\\\\\"operation\\\\\":\\\\\"open\\\\\"},{\\\\\"target\\\\\":\\\\\"folder\\\\\",\\\\\"fid\\\\\":\\\\\"1\\\\\",\\\\\"fidName\\\\\":\\\\\"\\xD0\\x92\\xD1\\x85\\xD0\\xBE\\xD0\\xB4\\xD1\\x8F\\xD1\\x89\\xD0\\xB8\\xD0\\xB5\\\\\",\\\\\"isUserFolder\\\\\":false,\\\\\""
		"operation\\\\\":\\\\\"open\\\\\"},{\\\\\"target\\\\\":\\\\\"tab\\\\\",\\\\\"tabId\\\\\":\\\\\"relevant\\\\\",\\\\\"operation\\\\\":\\\\\"open\\\\\"}]\",\"model\":\"do-journal-log\",\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901581229,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,"
		"-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0"
		",5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,"
		"43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_13", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=user-dropdown-data", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"user-dropdown-data\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580696,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_14", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=messages", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t119.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"messages\",\"params\":{\"current_folder\":\"1\",\"sort_type\":\"date\",\"with_pins\":\"yes\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901580696,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,"
		"0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,"
		"0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0"
		",61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_15", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get-ds-collection", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t120.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get-ds-collection\",\"params\":{\"collection\":\"promo\",\"db\":\"ps\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901582869,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;"
		"1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;"
		"722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;"
		"1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("92550_2", 
		"URL=https://mc.yandex.ru/watch/92550?wmode=7&page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&nohit=1&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135303%3Aet%3A1735901583%3Ac%3A1%3Arn%3A56299429%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6"
		"cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901583&t=mc(p-2)clc(0-0-0)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(2)fip(1)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t121.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("92550_3", 
		"URL=https://mc.yandex.ru/watch/92550?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"pv%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135303%3Aet%3A1735901584%3Ac%3A1%3Arn%3A414708261%3Arqn%3A2%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4"
		"db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901584&t=mc(p-3-h-1)clc(0-0-0)rqnt(2)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(2)fip(1)ti(0)&force-urlencoded=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t122.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_20", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135303%3Aet%3A1735901584%3Ac%3A1%3Arn%3A15116285%3Arqn%3A1%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Afp%3A3239%3Ads%3A0%2C557%2C1761%2C1357%2C4%2C0%2C%2C1%2C6%2C%2C%2C%2C3823%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901584&t=mc(p-3-h-1)clc(0-0-0)rqnt(1)aw(1"
		")rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(2)ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22adSessionID%22%3A%229696341735901581656%22%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t123.inf", 
		"EncType=", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("event_confirmation", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=OPTIONS", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("event_confirmation_2", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18071978324589021008\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18071978324804241232\",\"ImpID\":\"2165\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"bs_response\"}]}]}", 
		LAST);

	web_custom_request("event_confirmation_3", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18071978324589021008\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18071978324804241232\",\"ImpID\":\"2165\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"container_in_viewport_after_response\"}]}]}", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("92550_4", 
		"URL=https://yandex.ru/ads/meta/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&pcode-version=1183758&pcodever=1183758&comboblock-unencoded-vast=1&ad-session-id=9696341735901581656&target-id=57527401&pcode-test-ids="
		"1111484%2C0%2C72%3B1173005%2C0%2C38%3B1135992%2C0%2C20%3B1179650%2C0%2C62%3B1184115%2C0%2C7%3B1170777%2C0%2C23%3B1183716%2C0%2C29%3B1139808%2C0%2C34%3B1164347%2C0%2C50%3B1175802%2C0%2C9%3B1175871%2C0%2C8%3B1180617%2C0%2C27%3B1178013%2C0%2C26%3B1183758%2C0%2C6%3B912288%2C0%2C77&pcode-flags-map="
		"eJylWF1znLgS%2FS88G68EiI%2B8aaBhVAMSkcTYzlZKhT141xvbs9cf2d2k8t9vCfBkwM5MtvbJBqaPWq3u06f11VlTZQpJF6YEXuil8%2B7Xr87n9va5c945Hgpi58R56h6f2MZ558QoRlHgfPt40pudSVqbkikNHKRZXBjBU5gAaNnAPgDGfhASb4egGrmGC8O40hJoZSqRgeQmA8UKPkF6vGpvO3Pf%2FTWFI56H4x1co8CsmZaMU6PX5n0D8sLUVNJqgtX9%2FecMJfQSMqCwDIRh3OiCGpX1iINvjBemgoxRk7MS1ATwevtg2tvbGWgSR7gH1YUwI3DBhQSj2Ac47FEcIIx6YykNSJYZLcyaKn3MDPvR9%2BhquijBrEEqJqbhxDj2Y%2BTPrQNv8LhqSs0WlNtzbTjLGWSGcQ0yp%2BlBz0kSe9HggQ3dYtXvVZlcSLOLbSqqhTiEEkZJgKKX7XM4MxJ0I7mhuQZp0pKlK6OXUj"
		"TF8mC%2BRRijIOmBVEWltinRgIHz2ixKmq767N1H%2BNW5a29uTx%2BenRPnn%2FZ%2B0%2F19%2BvD8y81d%2B1v3OHn1W3vXv9l86e6Hn7efb562w793p3sPm%2Fub8a1F3iE4J85D%2B%2BV2%2B%2BX38fOXh%2BHv80N7et%2F99fjqB3%2B027ub0XT7yf79ONkqib0hZgq0ySCnTalNTQswvKkWIA9FPCLYj4aEu6BKU81SkwNkZlGKdGVYZs6WTMMb8ZIuc70gwR4KXOycTJ692bM%2Few76Z%2Bp6BCMUeaM9dUkcByF2Md69CCNMIrvAxwkdJSEOe6dzZUohapOz80PbjInvY7%2B3sFlV1NqoVLL6YFnFke8lA%2BtlTPUlNWRgKnjOZEX1vLpmAIlH%2FHhYNfsAfCCVFZSgj9nh2Esm7LakPCvtMfDV6IStLJrphh%2Bsy8SPPDIQpaIVmAvKMzg3magoO%2BxDhKIwmW"
		"xe1MClXphaQm0q0NQsmnJ1ECQhwcgKoGlhlkCzw%2FmIEYpJOJARVRc8HSp33%2BSr89g92Qzc%2B26sXxnV1JSCZs7J9BvwDGywZu%2FHD7O3tif%2BCOCHSzDOtBle0CwX57PPFWjJVtSkorFkOvuaCrFiYCqq06XtNm%2F%2FqpaiYgpeLdwXut3%2B6GXPtrNfTRnYCN47bGvq9%2B3j06MNpm1jH79NTgLHUTJyqKr7JjQ2wjOml6LRRkLGJKTaCF5eHO9SyItQPHBNrs1LVtG6LsWaccOEMsCzlMrsCEziIbKrjh2OUqD3G04qgWq2tsdH02XvtP1xWlJWHUtCL%2FH3tp6zc3POqKiYkfC%2BAaXVYXPfIxHZmaeN0qIypSgMy%2BmURQPSte0lDt2ka6%2FdIGp99zIKN257fRkGSdeSDbFkGpE2DkOfuFebMHGDJL52k00Suxhdtbjd4Pays5SZguf5YYBdb0ECN0A%2BcRdk"
		"kbielxCCATLIcufESUgX%2B5u4dUnQBW6w8T23jXDg4su2vYyjK0ySjV0U%2FCDwvdgNwsh3A4KpuwjDwF34IeRengY5Sia8jJEfJHH81sZrkCnwSX6gU4TIz1mneTFlgARHGEeJ57zDJ46PUBJ7AcLOO%2FztB4C2Zl8E0VCoh08wiMJRGaZKjoKyYFV1WL6hIPHCcGamQK5BuoplR4wJ8sautqu3vhX%2FqAOHfoKCyCezMyB%2B4A2u9zq9svqtkLQ0lKuzY4lPEoK9nQ%2B1pSSjJU1XINV0dR9hzwtDQhx7AjgMAo%2FMXYmDeNyRrExe0uJI3cRJFI9SpoZ0kJ8NZ%2B8t0WV9advuXZc0hWqWTa%2FBEhKOcShAm%2FXKZFCJUdcsLoymBcumWYUJQcTOHI9%2F%2FmKB3M83m27rfv7kdpub%2B203PJ%2F%2B8bi9d6aJloQIf5%2BPaJYN04ey6r1v140s96hJFwdlMLaAoy"
		"oTtWYV%2BwAmXUK6MllTlyylGn4inBgj7H%2F3CnjPk3oJFRioan1haGoljKkph%2FJfSnWMPWwHiYmPVhRkqj5iF5IxVju7oheulRijdsQ%2BSsJhXTjXIDktTaZqm6Vc1UJqc7S6cYCCURTBed0H0q6shlFPL8W0Ad15M2svib%2BHNW%2FKUqUSgL%2BItHRJeQFGSAZcHxWJGIdBTMId3pqlJgVW9qlDy9QsgRXLI%2FNfGPqet5d%2FuTg3dhqoGP85%2BygJolctNS2FneUarQU3%2BZFjiQhGeAchGj2O9qVd3WonS8Ez%2Brl6ms3OkY%2F2Wruto1RCBlwzWg69%2Fc0GfL19cNvbW%2Feh%2B99zZwXN9OqBJMmrqwdJeSYqcwZlKioYxqVUlOIVP7qP3W139dRtZp4mIUE7UC7MGSwqq6w0s1I%2FPjqv4%2B%2F7VEvRlMOdQ1qnpqbpSi2FHiR%2Bo18uEQaxdeSeJULR"
		"qLgHrTaIHwm5BLU0ilV1eewKwo9G0n4LYRjIbXr8FxRbp7O6QKfJvwCo6Pmgkyde3Nxf%2F4wXQxR2WJpVIJoJUogQQj%2Flzks0DqH5%2Fw3NNFyzcvy6j4sP4Nq8klVtgEr1RmJfPT8%2Bbe%2FMpn34NCuWJEbxvGcsbLUMY29xjMv8kUhs8aq6ZNoSGc1o3WvxtXeEAEiMhloFpYCn8OKCWkrGDw6bvfF48zYUjHVa6CXIcW5ZCsk%2BCK5padb%2BYT9iFOLxIgqGW8lBixW0PsaDMRpvGupUZLCeUV5%2FRiR%2BlaZ9P%2Fr2f%2Fa8OtQ%3D&pcode-icookie=KN4YJN2fwz%2B4oUc0YnlO7ehmT5iRutE882mLt2mZpKsas2F0jd69R08CC3ZSOhRkdrtDAZv7ejGiR9ZeW8vuJB3dHqI%3D&disable-base64=1&duid=MTczNTkwMTQxOTg3NzMwMDQ4NQ%3D%3D&"
		"imp-id=2161&ecma-version=es2017&charset=utf-8&partner-stat-id=65&skip-token=yabs.NzIwNTc2MTAyNDUxMDI0NzM%3D&test-tag=7696581394434&tga-with-creatives=1&top-ancestor=https%3A%2F%2Fmail.yandex.ru&top-ancestor-undetermined=0&uid=2064807418&layout-config="
		"%7B%22win_width%22%3A1241%2C%22win_height%22%3A1281%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A4.8%2C%22isInIframe%22%3Afalse%2C%22w%22%3A163%2C%22h%22%3A0%2C%22width%22%3A176%2C%22height%22%3A0%2C%22visible%22%3A1%2C%22fullscreenHeaderHeight%22%3A80%2C%22left%22%3A1065%2C%22top%22%3A102%2C%22ad_no%22%3A1%2C%22darkTheme%22%3Afalse%2C%22safeArea%22%3A%7B%22top%22%3A0%2C%22bottom%22%3A0%2C%22left%22%3A0%2C%22right%22%3A0%7D%2C%22req_no%22%3A1%7D&grab-orig-len=48&grab="
		"eyJncmFiX3ZlcnNpb24iOjIsImZvcmJpZGRlbiI6MX0KrP__&uniformat=true&callback=Ya%5B8677357214334%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("event_confirmation_4", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18071978836110870352\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18071978836238796624\",\"ImpID\":\"2161\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"bs_response\"}]}]}", 
		LAST);

	web_custom_request("event_confirmation_5", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18071978836110870352\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18071978836238796624\",\"ImpID\":\"2161\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"container_in_viewport_after_response\"}]}]}", 
		EXTRARES, 
		"Url=/mapuid/yandex/", "Referer=", ENDITEM, 
		"Url=/resource/spacer.gif", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("click_14", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t130.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;"
		"943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A70%2C%22lifetime%22%3A14098%2C%22trigger%22%3A%22after-page-load%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901584288,-type=string,-name=adShow/cts=1735901584288/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,"
		"-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,"
		"61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=Performance_showAdTop,207.2154=-0.6,207.1428=14098.4,2877=14099,-cdn=mskstoredata/cts=1735901584288/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;"
		"1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701="
		"2046.3431.2154,207=10556.5,2924=3431.77,2925=0,689.2322=0.001,-cdn=mskstoredata/cts=1735901584289/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1"
		";1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=2046.3431.1428,207=14098,2924=3431.77,2925=0,689.2322=0.001,-cdn=mskstoredata/cts=1735901584289/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;"
		"500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;"
		"1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=2046.3431,207.2154=10557.5,207.1428=14099,2877=3541.5,2924=3431.77,2925=0,689.2322=0.001,-cdn=mskstoredata/cts=1735901584289/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;"
		"1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129="
		"1735901570190,1701=2046.3431.791.3178,207.2154=10814.7,207.1428=14099,2877=3284.3,2924=3431.77,2925=0,689.2322=0.001,-cdn=mskstoredata/cts=1735901584289/*/reqid=LIZA", 
		LAST);

	web_custom_request("click_15", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t131.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=1724,207=15958.4,-cdn=mskstoredata/cts=1735901586148/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2892/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;"
		"1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,2116=560.6,"
		"2114=4.1,2886=1026278,2124=15958.2,2131=3829.1,2123=3823.4,2770=3679.7,2113=3.6,2112=3.6,2136=0,2887=274259,2888=navigation,2111=3.6,2889=navigation,2126=0,2125=15958.4,2890=http%2F1.1,1385=0,2110=0,2109=0,2117=560.6,2120=3679.2,2119=2322.3,2115=4.1,2322=0,2323=274559,76=navigate,2128=0,2127=0,2137=0,2437=2771,2870=4g,rtt=50,dwl=4.8,rawType=undefined,-cdn=mskstoredata/cts=1735901586149/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;"
		"877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76"
		";1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=largest-loading-elem-paint,207=15432.6,-cdn=mskstoredata/cts=1735901586151/*", 
		LAST);

	web_custom_request("click_16", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t132.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=2795,207=12673,2796.2797=s-6706-7078.s-9228-9285.s-10494-10565.s-10655-10737.s-12516-12673,689.2322=3835.6,-cdn=mskstoredata/cts=1735901586316/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("1_21", 
		"URL=https://an.yandex.ru/jserr/1", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t133.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1TmuXERo0Ma200000000U9nJVBhcOk7QbmMTXW7iBMMT4yxyikmxM9xE00IUC97GQL7XmR5jcOmCgOn0ySm0zWsP8F7IKWu6XjghGA5MHX0vap7cBqW10yD2Hf4s26ibdBKHH6rW1X9x6QUuoZ4S1SkSPGG9NmMJTnaPP1GP_ZBEOc9WcCi44ZdBz1y8hZAv0Tclc0IwkkF_1B0pCFozeILwMekDuIyJ5yXoPbOWsSki22IdCeEqpMKs1raDiei3", 
		"URL=https://yandex.ru/an/rtbcount/"
		"1TmuXERo0Ma200000000U9nJVBhcOk7QbmMTXW7iBMMT4yxyikmxM9xE00IUC97GQL7XmR5jcOmCgOn0ySm0zWsP8F7IKWu6XjghGA5MHX0vap7cBqW10yD2Hf4s26ibdBKHH6rW1X9x6QUuoZ4S1SkSPGG9NmMJTnaPP1GP_ZBEOc9WcCi44ZdBz1y8hZAv0Tclc0IwkkF_1B0pCFozeILwMekDuIyJ5yXoPbOWsSki22IdCeEqpMKs1raDiei3R3LpHA1fQNxmXBQJp33_NWMhl0icVp8xEF537CxI_Fy8sBqhMExyOj_1mdI0vJyCC9vaiTvsaPlHAcBD1PRMJ-t7poqvrIrnamMia-63_KCuwoqBo6yBM0LFihOm2u45Bx0sW03ZJLQO2xwoWWpjO6jWcS3szEQnlkjRT-teP9p1TkLmy0AsQU_UFD-nx-ccu9LiC4CFiBcVO6D-nCRZ76hbb5rYu1bULcx-4ouzaHt6ciNERcXeOM"
		"nkQh61dMa7E-C9Tl47x2kl_PxpSLdlSQCVx3mT75KJE1WNS01zk89ZIW_R1X2nWuFn5WT642_WR61UmJcJSGEdzWbEnWkSJ2yu6JzmClxWP5p01TBETU2Fw4TGB30u9FvmQEI6iJh1h0DN_pjSu6vfQ5hX200-1yrN?test-tag=29&rnd=3689869975418&confirmRatio=1000000&ctime=1735901586494&banner-sizes=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6IjY5N3gzMiJ9&partner-stat-id=70&confirmTime=2101000&width=697&height=32&top-screen-block-area=22304&top-screen-block-area-portion=0.01403&banner-test-tags=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6IjI4MTUwMDc0NjgzMzkzNiJ9&"
		"constructor-rendered-assets=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6NTM2ODc5OTE5fQ&rendered-direct-assets=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6MTA0ODYzN30", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t134.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1OpAT7000dG200000000U9nJVBhcOk7QbmMTXW7iALqC4y_yifnmi3oT0GWyOIAXzQ5QZB5jcOmCgOn0ySm0zYDD8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aF1LC7cNaK56WU4luomc1eQvJ22HfKmBWEHQfWYWo5cc_q1mbSaHAFAAIO1vndsT07O6XfFpFKHFQx4n_6NY0Zc46UI0NcP583cL", 
		"URL=https://yandex.ru/an/rtbcount/"
		"1OpAT7000dG200000000U9nJVBhcOk7QbmMTXW7iALqC4y_yifnmi3oT0GWyOIAXzQ5QZB5jcOmCgOn0ySm0zYDD8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aF1LC7cNaK56WU4luomc1eQvJ22HfKmBWEHQfWYWo5cc_q1mbSaHAFAAIO1vndsT07O6XfFpFKHFQx4n_6NY0Zc46UI0NcP583cL6MJ4N6Ppa3D0zdA0dS4S4MXQcXyyeUqaCyplLy4gxuB9dymEJlmGJx1K_py24c9OmJBXlleE5gO3BFzXWF4aY_MsYzoCLX5hBh2qVce_Vcx9gMw9cn2lCdomVmXdlMK1-NC1g-19rXPc8R3W1TQ61GqD3ZTPOGxuoWeoiuEjWMK2szERn_gkRzsrevDn1jkLmy4BsAQzU_Dynxwdcu9Nii7CFC3cVeAD-H4RZtEeLQwlgQLdU5cv-K"
		"-uz4Hs66iMExkXeOMnkQd51dQc7UpC9zZ57x1tlpptyStUdx-ZVh3pT71KJU1WNC1nu8_e2euTvuKsW8WT78otE312U05d0_CApXsC6pYPJd0oN-1aUi79-86JyGSdum8kOFYiu0AQyH4K2GmFvWavDdB3M9rW5iDFKSSBt2qDJIiS0PWWpM00?test-tag=29&rnd=8427537522664&confirmRatio=919077&ctime=1735901586590&banner-sizes=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkiLCI3MjA1NzYxMDA4NDYwODQwNCI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2109000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&banner-test-tags=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjI4MTUwMDc0NjYyOTEzNiIsIjcyMDU3NjEwMDg0NjA4NDA0IjoiMjgxNTAwNzQ2NjI5MTM3IiwiNzIwNTc2MTA2MTI1NTgyMTkiOiIyODE0ODM1NjY3NTk5NTQifQ%3D%3D&constructor-rendered-assets=eyI3MjA1NzYxMDc0NDMwOTIwMiI6MjU4OTcsIjcyMDU3NjEwMDg0NjA4NDA0IjoyNTg5NywiNzIwNTc2MTA2MTI1NTgyMTkiOjI1ODk3fQ&rendered-direct-assets=eyI3MjA1NzYxMDc0NDMwOTIwMiI6MTc3LCI3MjA1NzYxMDA4NDYwODQwNCI6MTc3LCI3MjA1NzYxMDYxMjU1ODIxOSI6MTc3fQ", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t135.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOSejI_zOoVX2Lad0SqB0CCJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcVtELawHozX01sdYjH6ZHWHE9Le-F1WSA823dRPuVj01wyB8u0tswTDup-pAODjl4gbKgdCi7IosU6VQB_qlSdT9V5YeyyWFl9OzCAR2dCm4y117C06heQn7DmJhOQzAQTsfTMmzJNa9usMfidGU9O1ZvVnUriWGvKIJk00k7G0MXz0DW3Tdp6OVMIYM8yVRLegyGMk", 
		"URL=https://yandex.ru/an/count/"
		"WOSejI_zOoVX2Lad0SqB0CCJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcVtELawHozX01sdYjH6ZHWHE9Le-F1WSA823dRPuVj01wyB8u0tswTDup-pAODjl4gbKgdCi7IosU6VQB_qlSdT9V5YeyyWFl9OzCAR2dCm4y117C06heQn7DmJhOQzAQTsfTMmzJNa9usMfidGU9O1ZvVnUriWGvKIJk00k7G0MXz0DW3Tdp6OVMIYM8yVRLegyGMkt_6DStD2bVTaYeMj0xgkpv2RCetAPW9914XW_4MfXB50yaSg2eDCcP-IsHAWA9Eji2UZUmfPJq6dTLt7neXf6745hQx3U2Fvj3k4l30Mx3YgWYQ2tzcKfjwohBdxt-Z9kgxhMDhSD5JiqaKtOjX2PsN6fcJOA49bWF8_3JgQPMqGmqKM_22RJFWshpvI3867s_ZbBS-pNNvi9dq5Ym6FAXCFIcetVSAB6gN5g9y5J_Prxy3KtUgOVl"
		"mQtRL1bY4z3DW60Y-AK4jv~2="
		"WVCejI_zOoVX2LbW0IqF03CSRKsvmYOg1BmcAg3oQU51k3YWYnrU36B0bmRnzM5IEWWk22Oln4ZZv9aCg9QtqwZ0JjbhxP2N-iuO-dmkT_PiltFd3NU-ocO2IGH8OFn5gOInGF97AWg3ZgCd_38r9MlaaUrGPsj1bgV47tHakrwEiKDK6Q49165o1MWX28ihG0j165m1MWYsiWLe8TY2Aa0BmTPJ0Le8jfmAq7geCDOLBjqcOEC2iX00SPBpDL64SSAp12GQv7IHUEWOcn1RFJWPSWDbWAyG5vfSe427y_c62GS87PsDkIXiopud1_T4gs5logbTQJLiQQUQifGgF5SZzhgkwtgDpa5gJwmFYGx79ngkfzcUPS3ZPVpU5e1Wwoc0hGEwrbiacgKoiwMlQ0fRJq67cL3sK88nv1We7Nl7f6VZOiJC61tc6ycdtI7aXR40fhiiQt9rnXI_s7-1w_B3C8YFan-iCsRbVtN6h7olZsAK-be0s9"
		"dzR1EGMQQNNXaQJFDeetUQHnkzzNM4-vmtB-zykMbu9T2JlPvYL9GV7_271Qlptn78QOnMValhkcucfp5QUQqlikKjJizdFGt2DeQQ0W4D_8-T-t-I_XFXCdMjqhPBisIhAuIIEhKtCf7gIW0k68XZeFCXC4_dVqvPU8TJ~2?stat-id=70&test-tag=29&rnd=4811294504031&confirmRatio=1000000&ctime=1735901586715&banner-sizes=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6IjY5N3gzMiJ9&partner-stat-id=70&confirmTime=2107000&width=697&height=32&top-screen-block-area=22304&top-screen-block-area-portion=0.01403&wmode=0&banner-test-tags="
		"eyI3MjA1NzYxMDI0NTEwMjQ3MyI6IjI4MTUwMDc0NjgzMzkzNiJ9&constructor-rendered-assets=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6NTM2ODc5OTE5fQ&rendered-direct-assets=eyI3MjA1NzYxMDI0NTEwMjQ3MyI6MTA0ODYzN30&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t136.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOWejI_zOoVX2Lae0TKB0DDJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM94C8LEGCI3mOaAEDXbX-y37RmkZ03UR9bZcqOVPbC6stYLIgLIcM7fPBF3Fz5-wNkJkqlYnKQVGNpaiUY5DnNcO2Q0WpY03LmDOpcu9reDUrDExKghOUjho4yQBKsJeV4i0nulu_UsG8Og9Pp00N3f0BG-W6m0kZzZCFl8HB4zoqHB9Rx0", 
		"URL=https://yandex.ru/an/count/"
		"WOWejI_zOoVX2Lae0TKB0DDJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM94C8LEGCI3mOaAEDXbX-y37RmkZ03UR9bZcqOVPbC6stYLIgLIcM7fPBF3Fz5-wNkJkqlYnKQVGNpaiUY5DnNcO2Q0WpY03LmDOpcu9reDUrDExKghOUjho4yQBKsJeV4i0nulu_UsG8Og9Pp00N3f0BG-W6m0kZzZCFl8HB4zoqHB9Rx0zJk-SMvEgFAUJB6mTK3NzHboKwPHsKmWYG0G1D5JAc4i456uNMAGAVDOcIq1Xp9PvgICFe52rbFGQLtNiJ5Y6aPSGQlhCDv8lXvAB1wC1JkEgg29u7SsfQctB6lk_ZTwigxhEfOsDmqLktJHZHYoq5cPiIaPDefe3r1-hRJ6i0GC4l015lmWcrpuDhC-qWo1X_luvL7Firr-R2Pz1Oi1ZoeJ3qfgDtt2YngbnQYV1K_sTU_0rDtgc7"
		"xy6jsrGPOXFGpO1W8lYb1BUG00~2="
		"WUiejI_zOoVX2LbY0UqE0FDQQKsvmYOj0juA2EWcUXfxJBkmDWxemWG1zebFlY2y89Yy42EDasSoe5hUJYEzK_RV7V9Itnb3dy_bpfxjT-wyuSvNsKmWYG0G1D5JAc4i456uNMBGSLn02XCcM3fWZwMkAr4nhMkBIsVhWaWGCo2abPWI9eShfRaG80YJAq0BGLXS0Le8mk0Aq4AmbIr02y4ML05Q2BQU2j12iELKWDP3XR6kSEas0HiNa8K0Y9EShmaiRcv6Hv4Nv7H5oFBXPS8FHGD6HeJm6E1hooqH92_iVBvXgg7ySBCnFyDgSd1FvDIkF5QI7TmQCGUfFR4-93eSdsYudcPxbW6Fb_5xMm22hQS0jWxeMc-H4v95PhRq5KrXwodeC1FA5gw8cCMGOw1qB3D6X_b6ylLGOl5WB83fBikQN9eciI_EW2J83qCmkUI3QPg4_2zDav3lbK2HojTAmBtwsHWfp3Azz3ANkmmDnXbZ3AHtd3"
		"76G7hhwmY_d7apCygNlPsJ9sLFzaYgJ2twyG5pYqvv_ci32TaOrszfNTUv824Rutgjhykh0lReivu6mY902cyG_DQUiu-swobK9cZJ3bTebfTnfTs7Rbv3FcqqRPbugwlLwC97oK3mha0IFpnFr_wSKiWEfm00~2?stat-id=65&test-tag=29&rnd=7749039772645&confirmRatio=919077&ctime=1735901586792&banner-sizes=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkiLCI3MjA1NzYxMDA4NDYwODQwNCI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2107000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDA4NDYwODQwNCI6IjI4MTUwMDc0NjYyOTEzNyJ9&constructor-rendered-assets=eyI3MjA1NzYxMDA4NDYwODQwNCI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDA4NDYwODQwNCI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t137.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOWejI_zOoVX2Lae0TKB0DDJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM94C8LEGCI3mOaAEDXbX-y37RmkZ03UR9bZcqOVPbC6stYLIgLIcM7fPBF3Fz5-wNkJkqlYnKQVGNpaiUY5DnNcO2Q0WpY03LmDOpcu9reDUrDExKghOUjho4yQBKsJeV4i0nulu_UsG8Og9Pp00N3f0BG-W6m0kZzZCFl8HB4zoqHB9Rx0_2", 
		"URL=https://yandex.ru/an/count/"
		"WOWejI_zOoVX2Lae0TKB0DDJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM94C8LEGCI3mOaAEDXbX-y37RmkZ03UR9bZcqOVPbC6stYLIgLIcM7fPBF3Fz5-wNkJkqlYnKQVGNpaiUY5DnNcO2Q0WpY03LmDOpcu9reDUrDExKghOUjho4yQBKsJeV4i0nulu_UsG8Og9Pp00N3f0BG-W6m0kZzZCFl8HB4zoqHB9Rx0zJk-SMvEgFAUJB6mTK3NzHboKwPHsKmWYG0G1D5JAc4i456uNMAGAVDOcIq1Xp9PvgICFe52rbFGQLtNiJ5Y6aPSGQlhCDv8lXvAB1wC1JkEgg29u7SsfQctB6lk_ZTwigxhEfOsDmqLktJHZHYoq5cPiIaPDefe3r1-hRJ6i0GC4l015lmWcrpuDhC-qWo1X_luvL7Firr-R2Pz1Oi1ZoeJ3qfgDtt2YngbnQYV1K_sTU_0rDtgc7"
		"xy6jsrGPOXFGpO1W8lYb1BUG00~2="
		"WViejI_zOoVX2Lbp0MqF0FCRRKsvmYOj0juA2EWcJb1uqZCY-k60BamGO9_uv0l22uB92p7IE7ac0whbxJJIEsN_tI4lzPqnzFbSxkpPVkVE6-vybSq4aWW0GH0zfHB60X65soK67SS6lBgI_Ec0FPKsBcX91i6qKEbiFOyZO9DNjAmcmKmELqfp8K0G9bU05eAmk0Aq48J15Q25O2jRW1Q2BQW2j11iFHMWXM3BgG2jXmfZNU7IRG8sBY0B0H0dELyJM3uJ4MHzKZbTfQr7kGzX_y7hFN1D-A5emCY841u3V848CsI2I8uxHBlPGO3ns3WZoVbymuHJj_N4nZnYZ-xBc9WSt1EjXhqfftQbrR1rGDTtlKRd8BKdreT4X-CJ3TVJRCyouF4oVcyBGB3r5C3M0TqAhCW9oI8pM_ggGhbCzXH3Ze5YnkYHV3sKM3mO2s2wox8czuCJh2_EsKFxOQzVhNtm1oS-_lU34n_VcwEF-xKsl7Ryx1"
		"_2BDDBxmPnNnIzRn3tHT5RNqSu9kRDFigNlLYuoygJVPyIfaK_Hg17sCkT_-QOW_iXvhUqhkkISt0_nBpMXnDzZC5yDWC-AenqalIhH1eG_1S4Q1zlr_CjJM0rgovxHP7ZHL-lbpxHRAysPNPbplcJd16wq5gtemTDDc05E9ffJhdvjKm0~2?stat-id=65&test-tag=29&rnd=7749039772645&confirmRatio=919077&ctime=1735901586792&banner-sizes=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkiLCI3MjA1NzYxMDA4NDYwODQwNCI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2107000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjI4MTUwMDc0NjYyOTEzNiJ9&constructor-rendered-assets=eyI3MjA1NzYxMDc0NDMwOTIwMiI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDc0NDMwOTIwMiI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t138.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOWejI_zOoVX2Lae0TKB0DDJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM94C8LEGCI3mOaAEDXbX-y37RmkZ03UR9bZcqOVPbC6stYLIgLIcM7fPBF3Fz5-wNkJkqlYnKQVGNpaiUY5DnNcO2Q0WpY03LmDOpcu9reDUrDExKghOUjho4yQBKsJeV4i0nulu_UsG8Og9Pp00N3f0BG-W6m0kZzZCFl8HB4zoqHB9Rx0_3", 
		"URL=https://yandex.ru/an/count/"
		"WOWejI_zOoVX2Lae0TKB0DDJJ1v4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM94C8LEGCI3mOaAEDXbX-y37RmkZ03UR9bZcqOVPbC6stYLIgLIcM7fPBF3Fz5-wNkJkqlYnKQVGNpaiUY5DnNcO2Q0WpY03LmDOpcu9reDUrDExKghOUjho4yQBKsJeV4i0nulu_UsG8Og9Pp00N3f0BG-W6m0kZzZCFl8HB4zoqHB9Rx0zJk-SMvEgFAUJB6mTK3NzHboKwPHsKmWYG0G1D5JAc4i456uNMAGAVDOcIq1Xp9PvgICFe52rbFGQLtNiJ5Y6aPSGQlhCDv8lXvAB1wC1JkEgg29u7SsfQctB6lk_ZTwigxhEfOsDmqLktJHZHYoq5cPiIaPDefe3r1-hRJ6i0GC4l015lmWcrpuDhC-qWo1X_luvL7Firr-R2Pz1Oi1ZoeJ3qfgDtt2YngbnQYV1K_sTU_0rDtgc7"
		"xy6jsrGPOXFGpO1W8lYb1BUG00~2="
		"WVKejI_zOoVX2Lbg0JqF08FRQqsvmYOj0juA2EWc4AWI5e0J-FI0BamGO9_uv0l22uB92p7IE7ac0whbxJJIEsN_tI4lzPsnDzpvAfi99140WY1wIYMC1I8AjqiCEeub2eTSIUc0FNpfI4FJxejITBOpk81WyQjIBkjHZh53L1cX2GHXSWLe8GYBAq0BGHXS0Le8jh85Q27OWYf02y7MKm5Q2BQS2j1wg33M5IxT9c3Z0h8G076IypNnECN7H08nlvnkKbsF7YRyK3HWP4G8Zm6-IXoXugDInD3AsStUXGGHABCEv_CDqm1FEvcDsGul1k6IA0VtHAjXRygfNMarR7DqVTThT0vIUs9zI7GuFj5mFStsB0CUB-FtjW04Mqy1R1tGhVOY9oIBp6pfgmfbDYLCOiWnKBf-nwHdusB4p1Wzag-74ei7Om5CTrdMv2OvPVbY3_1u_32DnH7iWvESjFnlafEMxrtYqPc_TcctXlMplWgpJ2-zpU"
		"NEOGhN6BrpcC8rHczz7I6NH6_sLhxirmAzPPxibUXMQNvym7axD_PV4keInxpK9OvbUQtFGsIo8-kpJRolKz-MlhCm7OAN9t663_pBeFl3aluJ0JLr-nmj2pPhTi129Aa2SAHNFuisMUjaULdoHXj4N72dAg3b415oIY4y5W80~2?stat-id=65&test-tag=29&rnd=7749039772645&confirmRatio=919077&ctime=1735901586792&banner-sizes=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkiLCI3MjA1NzYxMDA4NDYwODQwNCI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2107000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjI4MTQ4MzU2Njc1OTk1NCJ9&constructor-rendered-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t139.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WY8ejI_zOoVX2LcM0QKG0FCUTZw4s8S8Un2D7aGP19CNOgHnyam6LClRQLHWf-orTiXBVMTy9a3Sp27JENiEbTwvRSDy-4FYeMFy8Um_UA50Z3nzs3q8HdeO-n-FM44bNa2mJJo8_G1S4sAh1oT3Rg0Cy5N203fE5QcD6Z4YS2hHyE71u4G57Ao_-TheGP9pLM6Ba555E9W9u21cODotORo44cyG5uLjqJ3sDUIc7FRAh6OifGhFrOXbQi8wXdvW", 
		"URL=https://yandex.ru/an/tracking/"
		"WY8ejI_zOoVX2LcM0QKG0FCUTZw4s8S8Un2D7aGP19CNOgHnyam6LClRQLHWf-orTiXBVMTy9a3Sp27JENiEbTwvRSDy-4FYeMFy8Um_UA50Z3nzs3q8HdeO-n-FM44bNa2mJJo8_G1S4sAh1oT3Rg0Cy5N203fE5QcD6Z4YS2hHyE71u4G57Ao_-TheGP9pLM6Ba555E9W9u21cODotORo44cyG5uLjqJ3sDUIc7FRAh6OifGhFrOXbQi8wXdvWlGRienYbQhXUrtLThz7FCk3nCdvl2sIe0i7MKm1R1tIjjmWKY94d3BgFJ1JhyQDDIoM-m2tX1BQm-ntVE3SdL7bFfZYWw_eCkIdJg6mca4I01CPVb4eO2oH_fA8mo9GHe2YJhR0deviemZZXMG8I3IWKeIbiFGKTPa8v1ah7tZ7fsRWOCJD6X_b6ycbt27bXBDXnL0LD1B-pAKqzZ_N9_WjSbn-6GNoS_62TCIl_gpDcvNjrngnyRW"
		"9fIlxkenYblXO0TcO_wwCOfPZc9Y2pxCcwhkjOsYn3WsaURVHEysYZjqt3Au6UxFKKewBy-80_B5YT_uv0JcEqybjQrtKpEOtHocjzaIrlSNe-wxtEd14p1uBCs5IkL2gLCcmKeRBfBEMFum6034gbKXaG_97jxFII5ArTm1evcI3HyeuyYxcbSEg6JERvTPDCnSrAdDPDTj2_A5z8LtwYOAt4zbSyn8B5rFy0~2?action-id=25&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("optional.js", 
		"URL=https://static-mon.yandex.net/static/optional.js?pid=yandex_mail&script_key=28543blUKn7nqSkf6QiYtSL17dNPqw&reasure=false", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t141.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("WY8ejI_zOoVX2LcS0QKG0AEUTHKGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKPwf-o_E-IblZDkmAihoPyE-4o0sEUGwPmzXqhltBPXFlmfRJtAVGZx3rvftoJaXzs3OAI7iLTIn0vEYXGduzs3s0_0DU67eW4Z8q9u3F1LmW0wJXMfZHen8fX29o3YmU141HpiykPhemT9pbM5BK965U5W9e23k8aLXKZW1dA9Bko6yH9Al44yOe_kYuQnho4tunBF", 
		"URL=https://yandex.ru/an/tracking/"
		"WY8ejI_zOoVX2LcS0QKG0AEUTHKGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKPwf-o_E-IblZDkmAihoPyE-4o0sEUGwPmzXqhltBPXFlmfRJtAVGZx3rvftoJaXzs3OAI7iLTIn0vEYXGduzs3s0_0DU67eW4Z8q9u3F1LmW0wJXMfZHen8fX29o3YmU141HpiykPhemT9pbM5BK965U5W9e23k8aLXKZW1dA9Bko6yH9Al44yOe_kYuQnho4tunBFJch6CpLYc9emqlUhru1pz75hk0xe-gxNw6SPy7WPlxS5CbI1OEifWAq3kXLO4MdV92G6tKScYkrP9begyGLk2IUmXTtl-CQvEQ7AUpB50LtNPyXDcKPbCu4a0a0GH4-fXB50HE5sYK6cZ813cInpKaOtWUKp4K7M9qMXYAUWmqmenq0nO_H8lXvAB1wC1JkEgg29u7SsfQddxJuvPm_jXxr-jVR17vpu-DyFJdnyxmSdFZut15Rhxp"
		"dwk5zhmsl7p-ReupBDVmYpxCcwhkjOshn1t1T5xnl4VL7qrek5kwmysVSfOLhqOmHwXBtS-M-EERWVOdvBwxekEGVtGynhVJZHnnZCPpFWeyBeTUQCc3aGPCQcSgLIgPHXeuZMfhkKlu-4ZwTKAfK14VnOszRfvITQCq0rSZ99ekKzUHRh5jZKZPVT-VN5c8eRF9mM6-kWrCGN4WVHZszYjHAxP7k81ThN_m40~2?action-id=25&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t142.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("click_17", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t143.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=2923,207=19291.5,2923=0,-cdn=mskstoredata/cts=1735901589482/*", 
		LAST);

	lr_think_time(4);

	web_custom_request("WY8ejI_zOoVX2LcM0QKG0FCUTZw4s8S8Un2D7aGP19CNOgHnyam6LClRQLHWf-orTiXBVMTy9a3Sp27JENiEbTwvRSDy-4FYeMFy8Um_UA50Z3nzs3q8HdeO-n-FM44bNa2mJJo8_G1S4sAh1oT3Rg0Cy5N203fE5QcD6Z4YS2hHyE71u4G57Ao_-TheGP9pLM6Ba555E9W9u21cODotORo44cyG5uLjqJ3sDUIc7FRAh6OifGhFrOXbQi8wXdvW_2", 
		"URL=https://yandex.ru/an/tracking/"
		"WY8ejI_zOoVX2LcM0QKG0FCUTZw4s8S8Un2D7aGP19CNOgHnyam6LClRQLHWf-orTiXBVMTy9a3Sp27JENiEbTwvRSDy-4FYeMFy8Um_UA50Z3nzs3q8HdeO-n-FM44bNa2mJJo8_G1S4sAh1oT3Rg0Cy5N203fE5QcD6Z4YS2hHyE71u4G57Ao_-TheGP9pLM6Ba555E9W9u21cODotORo44cyG5uLjqJ3sDUIc7FRAh6OifGhFrOXbQi8wXdvWlGRienYbQhXUrtLThz7FCk3nCdvl2sIe0i7MKm1R1tIjjmWKY94d3BgFJ1JhyQDDIoM-m2tX1BQm-ntVE3SdL7bFfZYWw_eCkIdJg6mca4I01CPVb4eO2oH_fA8mo9GHe2YJhR0deviemZZXMG8I3IWKeIbiFGKTPa8v1ah7tZ7fsRWOCJD6X_b6ycbt27bXBDXnL0LD1B-pAKqzZ_N9_WjSbn-6GNoS_62TCIl_gpDcvNjrngnyRW"
		"9fIlxkenYblXO0TcO_wwCOfPZc9Y2pxCcwhkjOsYn3WsaURVHEysYZjqt3Au6UxFKKewBy-80_B5YT_uv0JcEqybjQrtKpEOtHocjzaIrlSNe-wxtEd14p1uBCs5IkL2gLCcmKeRBfBEMFum6034gbKXaG_97jxFII5ArTm1evcI3HyeuyYxcbSEg6JERvTPDCnSrAdDPDTj2_A5z8LtwYOAt4zbSyn8B5rFy0~2?action-id=26&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t144.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("WY8ejI_zOoVX2LcS0QKG0AEUTHKGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKPwf-o_E-IblZDkmAihoPyE-4o0sEUGwPmzXqhltBPXFlmfRJtAVGZx3rvftoJaXzs3OAI7iLTIn0vEYXGduzs3s0_0DU67eW4Z8q9u3F1LmW0wJXMfZHen8fX29o3YmU141HpiykPhemT9pbM5BK965U5W9e23k8aLXKZW1dA9Bko6yH9Al44yOe_kYuQnho4tunBF_2", 
		"URL=https://yandex.ru/an/tracking/"
		"WY8ejI_zOoVX2LcS0QKG0AEUTHKGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKPwf-o_E-IblZDkmAihoPyE-4o0sEUGwPmzXqhltBPXFlmfRJtAVGZx3rvftoJaXzs3OAI7iLTIn0vEYXGduzs3s0_0DU67eW4Z8q9u3F1LmW0wJXMfZHen8fX29o3YmU141HpiykPhemT9pbM5BK965U5W9e23k8aLXKZW1dA9Bko6yH9Al44yOe_kYuQnho4tunBFJch6CpLYc9emqlUhru1pz75hk0xe-gxNw6SPy7WPlxS5CbI1OEifWAq3kXLO4MdV92G6tKScYkrP9begyGLk2IUmXTtl-CQvEQ7AUpB50LtNPyXDcKPbCu4a0a0GH4-fXB50HE5sYK6cZ813cInpKaOtWUKp4K7M9qMXYAUWmqmenq0nO_H8lXvAB1wC1JkEgg29u7SsfQddxJuvPm_jXxr-jVR17vpu-DyFJdnyxmSdFZut15Rhxp"
		"dwk5zhmsl7p-ReupBDVmYpxCcwhkjOshn1t1T5xnl4VL7qrek5kwmysVSfOLhqOmHwXBtS-M-EERWVOdvBwxekEGVtGynhVJZHnnZCPpFWeyBeTUQCc3aGPCQcSgLIgPHXeuZMfhkKlu-4ZwTKAfK14VnOszRfvITQCq0rSZ99ekKzUHRh5jZKZPVT-VN5c8eRF9mM6-kWrCGN4WVHZszYjHAxP7k81ThN_m40~2?action-id=26&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_think_time(6);

	web_custom_request("click_18", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t146.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=yastatic.net-css!20!509265;avatars.mds.yandex.net-!9!0;yastatic.net-js!75!3110296;mail.yandex.ru-!20!618340;mc.yandex.ru-!6!0;yandex.ru-!17!74348;yandex.ru-js!2!114182;mc.yandex.ru-js!1!0;mail.yandex.ru-txt!2!676;yastatic.net-ogg!1!25038;mc.yandex.md-!1!0;mc.yandex.ru-html!1!0;yastatic.net-!1"
		"!26304;yastatic.net-svg!1!903;an.yandex.ru-!5!1600;favicon.yandex.net-ru!3!0;favicon.yandex.net-com!1!0;mail.yandex.ru-png!1!900;static-mon.yandex.net-js!2!0;,t=30962.2,-cdn=mskstoredata/cts=1735901601152/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	lr_think_time(14);

	web_websocket_connect("ID=2", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB2", 
		"OnMessageCB=OnMessageCB2", 
		"OnErrorCB=OnErrorCB2", 
		"OnCloseCB=OnCloseCB2", 
		LAST);

	/*Connection ID 2 received buffer WebSocketReceive2*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_16", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get_user_activity", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get_user_activity\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901615386,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_19", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t149.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=mail.yandex.ru-!1!524;,t=45963,-cdn=mskstoredata/cts=1735901616153/*", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	lr_think_time(37);

	web_websocket_connect("ID=3", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB3", 
		"OnMessageCB=OnMessageCB3", 
		"OnErrorCB=OnErrorCB3", 
		"OnCloseCB=OnCloseCB3", 
		LAST);

	/*Connection ID 3 received buffer WebSocketReceive3*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_17", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get_user_activity", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t151.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get_user_activity\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901653539,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	lr_end_transaction("2_login",LR_AUTO);

	web_revert_auto_header("Origin");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("X-AnchorMailbox", 
		"CID:f070a191a34bd5e7");

	lr_think_time(4);

	web_url("V1Profile_3", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t152.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Origin", 
		"https://mail.yandex.ru");

	web_add_header("PreferAnonymous", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("click_20", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t153.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=mail.yandex.ru-!1!524;,t=90969.7,-cdn=mskstoredata/cts=1735901661160/*", 
		LAST);

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-AFS-CV", 
		"QtzpzvFzHmDRHLO3v6Bzxu");

	web_add_header("X-AFS-ClientInfo", 
		"platform=Windows; os=Windows NT; osVer=10.0.22631; app=Microsoft Edge; appVer=131.0.2903.112; appChannel=stable; appInstallationId=748690809752085297; region=RU;");

	web_add_header("X-Client-Data", 
		"CI2HywE=");

	lr_think_time(7);

	web_custom_request("command_2", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=iM%2BDiC14xNRRu2K6XGGa2w%3D%3D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t154.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18iM+DiC14xNRRu2K6XGGa2w==\\x10c\\x18\\x02*\\xED\\x04\\x12\\x02\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08fA\\xC4"
		"+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08fA\\xC4+"
		"\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08fA\\xC4+"
		"\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x08fA\\xC4+"
		"\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xBFG\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08fA\\xC4+\\x94\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x00 \\x00(\\x010\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:-ProductionEnvironmentDefinition_1662295566635Rg\n"
		"'\\x12%8\\x00@\\x00R\\x02\\x10\\x01`\\x0C\\x92\\x03\\x18JkXsl9CsUPu+kc0YOoXS4f.1\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x00b\ndummytokenj\\x02\\x10\\x01r\\x1Cchr:iM+DiC14xNRRu2K6XGGa2w==", 
		LAST);

	lr_start_transaction("3_sendMessage");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	lr_think_time(9);

	web_custom_request("1_22", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3D%253BAAA1%25C2%2582AA1AA2%26h%3D1808927130%26c%3D2368830448&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135437%3Aet%3A1735901678%3Ac%3A1%3Arn%3A464776159%3Arqn%3A3%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C15958%2C15958%2C1%2C%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600"
		"%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901678&t=mc(p-3-h-1)clc(0-0-0)rqnt(3)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fip(1)ti(0)&"
		"force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t155.inf", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_websocket_connect("ID=4", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB4", 
		"OnMessageCB=OnMessageCB4", 
		"OnErrorCB=OnErrorCB4", 
		"OnCloseCB=OnCloseCB4", 
		LAST);

	/*Connection ID 4 received buffer WebSocketReceive4*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_18", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-init-compose", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-init-compose\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901677911,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_21", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t158.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,"
		"12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=Performance_openCompose,207.2154=107713.9,207.1428=107720.9,2877=7,-cdn=mskstoredata/cts=1735901677911/*", 
		LAST);

	web_custom_request("click_22", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t159.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;"
		"943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A198%2C%22trigger%22%3A%22compose-expanded%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901678033,-type=string,-name=adRequest/cts=1735901678033/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0"
		",-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0"
		",8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2163%22%2C%22statId%22%3A195%2C%22trigger%22%3A%22compose-expanded%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901678033,-type=string,-name=adRequest/cts=1735901678033/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413"
		",0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242"
		",0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=first-input,207.2154=107943.5,207.1428=107944.3,2877=0.8,duration=32,js=0.10000002384185791,name=pointerdown,target=a.Button2.Button2_type_link.Button2_view_action.Button2_size_m.ComposeButton-m__containerContent--sPX6v,-cdn=mskstoredata/cts=1735901678135/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("v1_3", 
		"URL=https://mail.yandex.ru/web-api/journal/v1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"messages\":\"[{\\\"scenario\\\":{\\\"id\\\":\\\"LIZA-12390077-1735901572153_1\\\",\\\"type\\\":\\\"compose-react-scenario\\\",\\\"startTime\\\":1735901678037},\\\"params\\\":{\\\"sessionLifetime\\\":107714,\\\"step\\\":\\\"start\\\",\\\"initiator\\\":\\\"button-from-left-column\\\"},\\\"reason\\\":\\\"scenario\\\"},{\\\"scenario\\\":{\\\"id\\\":\\\"LIZA-12390077-1735901572153_1\\\",\\\"type\\\":\\\"compose-react-scenario\\\",\\\"startTime\\\":1735901678037},\\\"params\\\":{\\\""
		"sessionLifetime\\\":107836,\\\"step\\\":\\\"compose-have-opened\\\",\\\"duration\\\":138,\\\"usedSmall\\\":false},\\\"reason\\\":\\\"scenario\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":198,\\\"trigger\\\":\\\"compose-expanded\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"right-col-rtb-1\\\",\\\"id\\\":\\\""
		"R-I-92550-2163\\\",\\\"statId\\\":195,\\\"trigger\\\":\\\"compose-expanded\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"}]\",\"model\":\"do-client-log\",\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901678162,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;"
		"1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3"
		";261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_19", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=compose-autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t161.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"compose-autocomplete\",\"params\":{\"id\":\"editor10\",\"init_session\":\"true\",\"message_id\":\"<389121735901678@mail.yandex.ru>\",\"thread_id\":\"\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901678144,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1"
		";877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;"
		"1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,"
		"48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("92550_5", 
		"URL=https://yandex.ru/ads/meta/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&pcode-version=1183758&pcodever=1183758&comboblock-unencoded-vast=1&ad-session-id=9696341735901581656&target-id=24126712&pcode-test-ids="
		"1111484%2C0%2C72%3B1173005%2C0%2C38%3B1135992%2C0%2C20%3B1179650%2C0%2C62%3B1184115%2C0%2C7%3B1170777%2C0%2C23%3B1183716%2C0%2C29%3B1139808%2C0%2C34%3B1164347%2C0%2C50%3B1175802%2C0%2C9%3B1175871%2C0%2C8%3B1180617%2C0%2C27%3B1178013%2C0%2C26%3B1183758%2C0%2C6%3B912288%2C0%2C77&pcode-flags-map="
		"eJylWF1znLgS%2FS88G68EiI%2B8aaBhVAMSkcTYzlZKhT141xvbs9cf2d2k8t9vCfBkwM5MtvbJBqaPWq3u06f11VlTZQpJF6YEXuil8%2B7Xr87n9va5c945Hgpi58R56h6f2MZ558QoRlHgfPt40pudSVqbkikNHKRZXBjBU5gAaNnAPgDGfhASb4egGrmGC8O40hJoZSqRgeQmA8UKPkF6vGpvO3Pf%2FTWFI56H4x1co8CsmZaMU6PX5n0D8sLUVNJqgtX9%2FecMJfQSMqCwDIRh3OiCGpX1iINvjBemgoxRk7MS1ATwevtg2tvbGWgSR7gH1YUwI3DBhQSj2Ac47FEcIIx6YykNSJYZLcyaKn3MDPvR9%2BhquijBrEEqJqbhxDj2Y%2BTPrQNv8LhqSs0WlNtzbTjLGWSGcQ0yp%2BlBz0kSe9HggQ3dYtXvVZlcSLOLbSqqhTiEEkZJgKKX7XM4MxJ0I7mhuQZp0pKlK6OXUj"
		"TF8mC%2BRRijIOmBVEWltinRgIHz2ixKmq767N1H%2BNW5a29uTx%2BenRPnn%2FZ%2B0%2F19%2BvD8y81d%2B1v3OHn1W3vXv9l86e6Hn7efb562w793p3sPm%2Fub8a1F3iE4J85D%2B%2BV2%2B%2BX38fOXh%2BHv80N7et%2F99fjqB3%2B027ub0XT7yf79ONkqib0hZgq0ySCnTalNTQswvKkWIA9FPCLYj4aEu6BKU81SkwNkZlGKdGVYZs6WTMMb8ZIuc70gwR4KXOycTJ692bM%2Few76Z%2Bp6BCMUeaM9dUkcByF2Md69CCNMIrvAxwkdJSEOe6dzZUohapOz80PbjInvY7%2B3sFlV1NqoVLL6YFnFke8lA%2BtlTPUlNWRgKnjOZEX1vLpmAIlH%2FHhYNfsAfCCVFZSgj9nh2Esm7LakPCvtMfDV6IStLJrphh%2Bsy8SPPDIQpaIVmAvKMzg3magoO%2BxDhKIwmW"
		"xe1MClXphaQm0q0NQsmnJ1ECQhwcgKoGlhlkCzw%2FmIEYpJOJARVRc8HSp33%2BSr89g92Qzc%2B26sXxnV1JSCZs7J9BvwDGywZu%2FHD7O3tif%2BCOCHSzDOtBle0CwX57PPFWjJVtSkorFkOvuaCrFiYCqq06XtNm%2F%2FqpaiYgpeLdwXut3%2B6GXPtrNfTRnYCN47bGvq9%2B3j06MNpm1jH79NTgLHUTJyqKr7JjQ2wjOml6LRRkLGJKTaCF5eHO9SyItQPHBNrs1LVtG6LsWaccOEMsCzlMrsCEziIbKrjh2OUqD3G04qgWq2tsdH02XvtP1xWlJWHUtCL%2FH3tp6zc3POqKiYkfC%2BAaXVYXPfIxHZmaeN0qIypSgMy%2BmURQPSte0lDt2ka6%2FdIGp99zIKN257fRkGSdeSDbFkGpE2DkOfuFebMHGDJL52k00Suxhdtbjd4Pays5SZguf5YYBdb0ECN0A%2BcRdk"
		"kbielxCCATLIcufESUgX%2B5u4dUnQBW6w8T23jXDg4su2vYyjK0ySjV0U%2FCDwvdgNwsh3A4KpuwjDwF34IeRengY5Sia8jJEfJHH81sZrkCnwSX6gU4TIz1mneTFlgARHGEeJ57zDJ46PUBJ7AcLOO%2FztB4C2Zl8E0VCoh08wiMJRGaZKjoKyYFV1WL6hIPHCcGamQK5BuoplR4wJ8sautqu3vhX%2FqAOHfoKCyCezMyB%2B4A2u9zq9svqtkLQ0lKuzY4lPEoK9nQ%2B1pSSjJU1XINV0dR9hzwtDQhx7AjgMAo%2FMXYmDeNyRrExe0uJI3cRJFI9SpoZ0kJ8NZ%2B8t0WV9advuXZc0hWqWTa%2FBEhKOcShAm%2FXKZFCJUdcsLoymBcumWYUJQcTOHI9%2F%2FmKB3M83m27rfv7kdpub%2B203PJ%2F%2B8bi9d6aJloQIf5%2BPaJYN04ey6r1v140s96hJFwdlMLaAoy"
		"oTtWYV%2BwAmXUK6MllTlyylGn4inBgj7H%2F3CnjPk3oJFRioan1haGoljKkph%2FJfSnWMPWwHiYmPVhRkqj5iF5IxVju7oheulRijdsQ%2BSsJhXTjXIDktTaZqm6Vc1UJqc7S6cYCCURTBed0H0q6shlFPL8W0Ad15M2svib%2BHNW%2FKUqUSgL%2BItHRJeQFGSAZcHxWJGIdBTMId3pqlJgVW9qlDy9QsgRXLI%2FNfGPqet5d%2FuTg3dhqoGP85%2BygJolctNS2FneUarQU3%2BZFjiQhGeAchGj2O9qVd3WonS8Ez%2Brl6ms3OkY%2F2Wruto1RCBlwzWg69%2Fc0GfL19cNvbW%2Feh%2B99zZwXN9OqBJMmrqwdJeSYqcwZlKioYxqVUlOIVP7qP3W139dRtZp4mIUE7UC7MGSwqq6w0s1I%2FPjqv4%2B%2F7VEvRlMOdQ1qnpqbpSi2FHiR%2Bo18uEQaxdeSeJULR"
		"qLgHrTaIHwm5BLU0ilV1eewKwo9G0n4LYRjIbXr8FxRbp7O6QKfJvwCo6Pmgkyde3Nxf%2F4wXQxR2WJpVIJoJUogQQj%2Flzks0DqH5%2Fw3NNFyzcvy6j4sP4Nq8klVtgEr1RmJfPT8%2Bbe%2FMpn34NCuWJEbxvGcsbLUMY29xjMv8kUhs8aq6ZNoSGc1o3WvxtXeEAEiMhloFpYCn8OKCWkrGDw6bvfF48zYUjHVa6CXIcW5ZCsk%2BCK5padb%2BYT9iFOLxIgqGW8lBixW0PsaDMRpvGupUZLCeUV5%2FRiR%2BlaZ9P%2Fr2f%2Fa8OtQ%3D&pcode-icookie=KN4YJN2fwz%2B4oUc0YnlO7ehmT5iRutE882mLt2mZpKsas2F0jd69R08CC3ZSOhRkdrtDAZv7ejGiR9ZeW8vuJB3dHqI%3D&disable-base64=1&duid=MTczNTkwMTQxOTg3NzMwMDQ4NQ%3D%3D&"
		"imp-id=2165&refresh-type=6&ecma-version=es2017&charset=utf-8&partner-stat-id=198&skip-token=yabs.NzIwNTc2MTAyNDUxMDI0NzMKNzIwNTc2MTA3NDQzMDkyMDIKNzIwNTc2MTAwODQ2MDg0MDQKNzIwNTc2MTA2MTI1NTgyMTk%3D&test-tag=7696581394434&tga-with-creatives=1&top-ancestor=https%3A%2F%2Fmail.yandex.ru&top-ancestor-undetermined=0&uid=2064807418&layout-config="
		"%7B%22win_width%22%3A1241%2C%22win_height%22%3A1281%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A4.8%2C%22isInIframe%22%3Afalse%2C%22w%22%3A684%2C%22h%22%3A36%2C%22width%22%3A697%2C%22height%22%3A36%2C%22visible%22%3A1%2C%22fullscreenHeaderHeight%22%3A80%2C%22left%22%3A348%2C%22top%22%3A76%2C%22ad_no%22%3A4%2C%22darkTheme%22%3Afalse%2C%22safeArea%22%3A%7B%22top%22%3A0%2C%22bottom%22%3A0%2C%22left%22%3A0%2C%22right%22%3A0%7D%2C%22req_no%22%3A2%7D&grab-orig-len=48&grab="
		"eyJncmFiX3ZlcnNpb24iOjIsImZvcmJpZGRlbiI6MX0KrP__&uniformat=true&callback=Ya%5B1683117317401%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("-5990659328432209154", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-4580527958402001268/-5990659328432209154", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t163.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("event_confirmation_6", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t164.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072003520130451280\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072003520269911888\",\"ImpID\":\"2165\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"bs_response\"}]}]}", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("trace", 
		"URL=https://yandex.ru/ads/trace?pcodever=1183758", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t165.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"data\":{\"bannerId\":\"72057610245102473\",\"impId\":\"2165\",\"pageId\":\"92550\",\"productType\":\"direct\"},\"version\":\"1183758\",\"name\":\"BANNER_PARTS_IN_VIEW\"}", 
		LAST);

	web_custom_request("click_23", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t166.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;"
		"943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A198%2C%22lifetime%22%3A108150%2C%22trigger%22%3A%22compose-expanded%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901678340,-type=string,-name=adShow/cts=1735901678340/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("92550_6", 
		"URL=https://yandex.ru/ads/meta/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&pcode-version=1183758&pcodever=1183758&comboblock-unencoded-vast=1&ad-session-id=9696341735901581656&target-id=43081747&pcode-test-ids="
		"1111484%2C0%2C72%3B1173005%2C0%2C38%3B1135992%2C0%2C20%3B1179650%2C0%2C62%3B1184115%2C0%2C7%3B1170777%2C0%2C23%3B1183716%2C0%2C29%3B1139808%2C0%2C34%3B1164347%2C0%2C50%3B1175802%2C0%2C9%3B1175871%2C0%2C8%3B1180617%2C0%2C27%3B1178013%2C0%2C26%3B1183758%2C0%2C6%3B912288%2C0%2C77&pcode-flags-map="
		"eJylWF1znLgS%2FS88G68EiI%2B8aaBhVAMSkcTYzlZKhT141xvbs9cf2d2k8t9vCfBkwM5MtvbJBqaPWq3u06f11VlTZQpJF6YEXuil8%2B7Xr87n9va5c945Hgpi58R56h6f2MZ558QoRlHgfPt40pudSVqbkikNHKRZXBjBU5gAaNnAPgDGfhASb4egGrmGC8O40hJoZSqRgeQmA8UKPkF6vGpvO3Pf%2FTWFI56H4x1co8CsmZaMU6PX5n0D8sLUVNJqgtX9%2FecMJfQSMqCwDIRh3OiCGpX1iINvjBemgoxRk7MS1ATwevtg2tvbGWgSR7gH1YUwI3DBhQSj2Ac47FEcIIx6YykNSJYZLcyaKn3MDPvR9%2BhquijBrEEqJqbhxDj2Y%2BTPrQNv8LhqSs0WlNtzbTjLGWSGcQ0yp%2BlBz0kSe9HggQ3dYtXvVZlcSLOLbSqqhTiEEkZJgKKX7XM4MxJ0I7mhuQZp0pKlK6OXUj"
		"TF8mC%2BRRijIOmBVEWltinRgIHz2ixKmq767N1H%2BNW5a29uTx%2BenRPnn%2FZ%2B0%2F19%2BvD8y81d%2B1v3OHn1W3vXv9l86e6Hn7efb562w793p3sPm%2Fub8a1F3iE4J85D%2B%2BV2%2B%2BX38fOXh%2BHv80N7et%2F99fjqB3%2B027ub0XT7yf79ONkqib0hZgq0ySCnTalNTQswvKkWIA9FPCLYj4aEu6BKU81SkwNkZlGKdGVYZs6WTMMb8ZIuc70gwR4KXOycTJ692bM%2Few76Z%2Bp6BCMUeaM9dUkcByF2Md69CCNMIrvAxwkdJSEOe6dzZUohapOz80PbjInvY7%2B3sFlV1NqoVLL6YFnFke8lA%2BtlTPUlNWRgKnjOZEX1vLpmAIlH%2FHhYNfsAfCCVFZSgj9nh2Esm7LakPCvtMfDV6IStLJrphh%2Bsy8SPPDIQpaIVmAvKMzg3magoO%2BxDhKIwmW"
		"xe1MClXphaQm0q0NQsmnJ1ECQhwcgKoGlhlkCzw%2FmIEYpJOJARVRc8HSp33%2BSr89g92Qzc%2B26sXxnV1JSCZs7J9BvwDGywZu%2FHD7O3tif%2BCOCHSzDOtBle0CwX57PPFWjJVtSkorFkOvuaCrFiYCqq06XtNm%2F%2FqpaiYgpeLdwXut3%2B6GXPtrNfTRnYCN47bGvq9%2B3j06MNpm1jH79NTgLHUTJyqKr7JjQ2wjOml6LRRkLGJKTaCF5eHO9SyItQPHBNrs1LVtG6LsWaccOEMsCzlMrsCEziIbKrjh2OUqD3G04qgWq2tsdH02XvtP1xWlJWHUtCL%2FH3tp6zc3POqKiYkfC%2BAaXVYXPfIxHZmaeN0qIypSgMy%2BmURQPSte0lDt2ka6%2FdIGp99zIKN257fRkGSdeSDbFkGpE2DkOfuFebMHGDJL52k00Suxhdtbjd4Pays5SZguf5YYBdb0ECN0A%2BcRdk"
		"kbielxCCATLIcufESUgX%2B5u4dUnQBW6w8T23jXDg4su2vYyjK0ySjV0U%2FCDwvdgNwsh3A4KpuwjDwF34IeRengY5Sia8jJEfJHH81sZrkCnwSX6gU4TIz1mneTFlgARHGEeJ57zDJ46PUBJ7AcLOO%2FztB4C2Zl8E0VCoh08wiMJRGaZKjoKyYFV1WL6hIPHCcGamQK5BuoplR4wJ8sautqu3vhX%2FqAOHfoKCyCezMyB%2B4A2u9zq9svqtkLQ0lKuzY4lPEoK9nQ%2B1pSSjJU1XINV0dR9hzwtDQhx7AjgMAo%2FMXYmDeNyRrExe0uJI3cRJFI9SpoZ0kJ8NZ%2B8t0WV9advuXZc0hWqWTa%2FBEhKOcShAm%2FXKZFCJUdcsLoymBcumWYUJQcTOHI9%2F%2FmKB3M83m27rfv7kdpub%2B203PJ%2F%2B8bi9d6aJloQIf5%2BPaJYN04ey6r1v140s96hJFwdlMLaAoy"
		"oTtWYV%2BwAmXUK6MllTlyylGn4inBgj7H%2F3CnjPk3oJFRioan1haGoljKkph%2FJfSnWMPWwHiYmPVhRkqj5iF5IxVju7oheulRijdsQ%2BSsJhXTjXIDktTaZqm6Vc1UJqc7S6cYCCURTBed0H0q6shlFPL8W0Ad15M2svib%2BHNW%2FKUqUSgL%2BItHRJeQFGSAZcHxWJGIdBTMId3pqlJgVW9qlDy9QsgRXLI%2FNfGPqet5d%2FuTg3dhqoGP85%2BygJolctNS2FneUarQU3%2BZFjiQhGeAchGj2O9qVd3WonS8Ez%2Brl6ms3OkY%2F2Wruto1RCBlwzWg69%2Fc0GfL19cNvbW%2Feh%2B99zZwXN9OqBJMmrqwdJeSYqcwZlKioYxqVUlOIVP7qP3W139dRtZp4mIUE7UC7MGSwqq6w0s1I%2FPjqv4%2B%2F7VEvRlMOdQ1qnpqbpSi2FHiR%2Bo18uEQaxdeSeJULR"
		"qLgHrTaIHwm5BLU0ilV1eewKwo9G0n4LYRjIbXr8FxRbp7O6QKfJvwCo6Pmgkyde3Nxf%2F4wXQxR2WJpVIJoJUogQQj%2Flzks0DqH5%2Fw3NNFyzcvy6j4sP4Nq8klVtgEr1RmJfPT8%2Bbe%2FMpn34NCuWJEbxvGcsbLUMY29xjMv8kUhs8aq6ZNoSGc1o3WvxtXeEAEiMhloFpYCn8OKCWkrGDw6bvfF48zYUjHVa6CXIcW5ZCsk%2BCK5padb%2BYT9iFOLxIgqGW8lBixW0PsaDMRpvGupUZLCeUV5%2FRiR%2BlaZ9P%2Fr2f%2Fa8OtQ%3D&pcode-icookie=KN4YJN2fwz%2B4oUc0YnlO7ehmT5iRutE882mLt2mZpKsas2F0jd69R08CC3ZSOhRkdrtDAZv7ejGiR9ZeW8vuJB3dHqI%3D&disable-base64=1&duid=MTczNTkwMTQxOTg3NzMwMDQ4NQ%3D%3D&"
		"imp-id=2163&ecma-version=es2017&charset=utf-8&partner-stat-id=195&skip-token=yabs.NzIwNTc2MTA3NDQzMDkyMDIKNzIwNTc2MTAwODQ2MDg0MDQKNzIwNTc2MTA2MTI1NTgyMTk%3D&test-tag=7696581394434&tga-with-creatives=1&top-ancestor=https%3A%2F%2Fmail.yandex.ru&top-ancestor-undetermined=0&uid=2064807418&layout-config="
		"%7B%22win_width%22%3A1241%2C%22win_height%22%3A1281%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A4.8%2C%22isInIframe%22%3Afalse%2C%22w%22%3A163%2C%22h%22%3A0%2C%22width%22%3A163%2C%22height%22%3A1279%2C%22visible%22%3A1%2C%22fullscreenHeaderHeight%22%3A80%2C%22left%22%3A1065%2C%22top%22%3A102%2C%22ad_no%22%3A4%2C%22darkTheme%22%3Afalse%2C%22safeArea%22%3A%7B%22top%22%3A0%2C%22bottom%22%3A0%2C%22left%22%3A0%2C%22right%22%3A0%7D%2C%22req_no%22%3A3%7D&grab-orig-len=48&grab="
		"eyJncmFiX3ZlcnNpb24iOjIsImZvcmJpZGRlbiI6MX0KrP__&uniformat=true&callback=Ya%5B4016445176120%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("click_24", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t168.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;"
		"943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2163%22%2C%22statId%22%3A195%2C%22lifetime%22%3A108558%2C%22trigger%22%3A%22compose-expanded%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901678748,-type=string,-name=adShow/cts=1735901678748/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("event_confirmation_7", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t169.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072003610808420176\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072003610965182288\",\"ImpID\":\"2163\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"container_in_viewport_after_response\"}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_23", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135438%3Aet%3A1735901679%3Ac%3A1%3Arn%3A1039204538%3Arqn%3A4%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Ads%3A%2C%2C%2C%2C%2C%2C%2C%2C%2C15958%2C15958%2C1%2C%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901679&t=gdpr(13-0)mc(p-3-h-1)clc(0-0-0)rqnt(4)aw(1)rcm(0)yu"
		"(9903672511735901413)cdl(na)eco(100104)dss(1)ti(0)&force-urlencoded=1&site-info=%5B%7B%22Left%20column%22%3A%7B%222pane%22%3A%7B%22Tabs%20list%22%3A%22Compose%20click%22%7D%7D%7D%2C%7B%22Letter%20writing%20(new)%22%3A%7B%22in%20header%22%3A%22focus%20on%20%5C%22To%5C%22%22%7D%7D%2C%7B%22version%22%3A%22191.1.0%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t170.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("v1_4", 
		"URL=https://mail.yandex.ru/web-api/journal/v1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"messages\":\"[{\\\"action\\\":\\\"render\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":198,\\\"lifetime\\\":108150,\\\"trigger\\\":\\\"compose-expanded\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"render\\\",\\\"block\\\":\\\"right-col-rtb-1\\\",\\\"id\\\":\\\"R-I-92550-2163\\\",\\\"statId\\\":195,\\\"lifetime\\\":108558,\\\"trigger\\\":\\\"compose-expanded\\\",\\\""
		"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"}]\",\"model\":\"do-client-log\",\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901679167,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,"
		"0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,"
		"-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0"
		",76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_24", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3DAAAAAAAAAAAAAAAAAAAAA17AAA2AAA1AA2%26i%3Dcompose-field-1%26c%3D238996298&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135439%3Aet%3A1735901680%3Ac%3A1%3Arn%3A55886470%3Arqn%3A4%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b18"
		"37d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901680&t=mc(p-4-h-1)clc(0-0-0)rqnt(4)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fid(80)fip(1)ti(0)&force-urlencoded=1&site-info="
		"%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t172.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_20", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=abook-suggest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t173.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"abook-suggest\",\"params\":{\"alternateOrder\":\"\",\"climit\":\"5\",\"glimit\":\"5\",\"popular\":\"true\",\"reqid\":\"17359016795722064807418\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901679572,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126"
		",0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242"
		",0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;"
		"1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("click_25", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t174.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,"
		"12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=Performance_suggestRecepient,207.2154=109381.9,207.1428=109464.9,2877=83,-cdn=mskstoredata/cts=1735901679655/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_21", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=recipients", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"recipients\",\"params\":{\"recipientsIds\":[\"\\\"belkatestit@yandex.ru\\\" <belkatestit@yandex.ru>\"]},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901679750,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,"
		"-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp"
		"\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,"
		"33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_25", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3DAA1AAAA2AAAAAAAA17AAA2AAA1AA2%26c%3D2095389233&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135440%3Aet%3A1735901681%3Ac%3A1%3Arn%3A294845108%3Arqn%3A5%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1"
		"837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901681&t=mc(p-4-h-1)clc(0-0-0)rqnt(5)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fip(1)ti(0)&force-urlencoded=1&site-info="
		"%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t176.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_22", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=abook-suggest-report", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t177.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"abook-suggest-report\",\"params\":{\"id\":\"1\",\"q\":\"\",\"section\":\"email\",\"title\":\"belkatestit@yandex.ru\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901680780,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,"
		"-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0"
		",5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,"
		"43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_23", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=abook-contact", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"abook-contact\",\"params\":{\"email\":\"belkatestit@yandex.ru\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901680779,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,"
		"-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1"
		";814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15"
		";1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_26", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3DAAAAAA1A1A2AAAAAAAAAAA17AAA2AAA1AA2&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135441%3Aet%3A1735901682%3Ac%3A1%3Arn%3A812336762%3Arqn%3A6%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1"
		"837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901682&t=mc(p-4-h-1)clc(0-0-0)rqnt(6)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fip(1)ti(0)&force-urlencoded=1&site-info="
		"%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t179.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_27", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135441%3Aet%3A1735901682%3Ac%3A1%3Arn%3A632843381%3Arqn%3A5%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901682&t=gdpr(13-0)"
		"mc(p-4-h-1)clc(0-0-0)rqnt(5)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(1)ti(0)&force-urlencoded=1&site-info=%5B%7B%22Letter%20writing%20(new)%22%3A%7B%22in%20header%22%3A%7B%22in%20suggest%22%3A%22click%20on%20%5C%22self%5C%22%20contact%22%7D%7D%7D%2C%7B%22Letter%20writing%20(new)%22%3A%7B%22in%20wysiwig%22%3A%22focus%20on%20%5C%22Body%5C%22%22%7D%7D%2C%7B%22version%22%3A%22191.1.0%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t180.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_custom_request("WOeejI_zOoVX2Laa0UKB05CKJXv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9Ka47rn18F1YSgu62N7RuCTF2wC09uisMERHfzc4qPREDLAfLAPOQbayqE_qJxfUzDxYw95nlTDxbYc3OaJ6Vpmi5C00Tn01ku6iPoS4-q6lQcdDgLLiFMrv2VD5gQ9aFZMGOyNiRlRO4CLKeuWGFWqW5eVG3P07H_nc3saOdTB3oUx5JY", 
		"URL=https://yandex.ru/an/count/"
		"WOeejI_zOoVX2Laa0UKB05CKJXv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9Ka47rn18F1YSgu62N7RuCTF2wC09uisMERHfzc4qPREDLAfLAPOQbayqE_qJxfUzDxYw95nlTDxbYc3OaJ6Vpmi5C00Tn01ku6iPoS4-q6lQcdDgLLiFMrv2VD5gQ9aFZMGOyNiRlRO4CLKeuWGFWqW5eVG3P07H_nc3saOdTB3oUx5JY2ro_unldveGgxyaK2ri7T5sV8JTb6fND19BSAAgPAPKm5Z1Wvpm0WqpP4afcIq2YJ1O6IqQVG27hAUYqhklO634D8wwWrNKORoGVMTPF36F1ZgCgQ2BudKrfwYtBchl_ZPwiwxgEfSrDGyKkNNGZ1YrqLcPiAbSgbKePDeemslIEyaCLEJ900XbyW1Jy89ji-3QZFj8AWOVx-ELnpxDTVbmcVIcBOOug4mzAQZ9z8eiQfRkedmLFzd"
		"NlGDBTwXXy_1hTi46MJXu6aqLf~2="
		"WVOejI_zOoVX2Lbh0KKF05FRQasvmYP61BmL4D1Dw5nWWWA5AF81NOh2jXZmPOBuXY0b1GGN19CNOgHnyam6LClRQMHQxPJzTuUyr7V6qETpkRDd-vqxRxZpLJOJI7AZg6QcLC9Om82Tym0CEeuDX74Fk-Y0UR1S37Ne6I6Jqzbwl2Q5Nr1BgcHXONAuKfeB0O8mkGAq48J55Q2580ok02q4Mza2j11iGHMWXM3hgG0j15jE1MWzL1Zh2fTk4x1n0La8W3Z9-PeWuv10wmL1OKvNwQjB3nDBkZriRIhK1lZoKtv9qkoUS65hkjatcEBzVlXnzZska9MOi-JWdcWrx4qvjIkjXYq7gJsnFYGw79zek9vcUvO1ZvVnUri0Wgsd0BOEw5PWHPv_JZDR-egciFKKT9W9PGjVh5eCEGPAnp9ZT9Xl91zPrayCOm5CTrdMv6u0FFB58joM_B1FWqBaWpS0vltl1i2yx_KWA_Qr54Y5_Qn_OvRffR"
		"Uvt6LeC4wZ4o6zupGw4T9RNqTepl9cEi-NFP_V5jUJVT_WazsF4R0wL-t-coFFxuXadjyHHw_ruKWat2i-wsaQN7xiTm4H_1UWiy-swoba9kW3ZjRkpDgCjW8ZWdRTr2NFGkB6QmPrkS39u1glm8aOUd9I9dWZjDkjEMMEP0i1~2?stat-id=195&test-tag=29&rnd=9103427151117&confirmRatio=921238&ctime=1735901681161&banner-sizes=eyI3MjA1NzYxMDc3NDE1NjM1MCI6IjE2M3g0MzkiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc1NDk5NDU1MyI6IjE2M3gzODIifQ%3D%3D&partner-stat-id=195&confirmTime=2100000&width=163&height=1276&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDc1NDk5NDU1MyI6IjI4MTUwMDc0NjYyOTEzOCJ9&constructor-rendered-assets=eyI3MjA1NzYxMDc1NDk5NDU1MyI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDc1NDk5NDU1MyI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t181.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOeejI_zOoVX2Laa0UKB05CKJXv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9Ka47rn18F1YSgu62N7RuCTF2wC09uisMERHfzc4qPREDLAfLAPOQbayqE_qJxfUzDxYw95nlTDxbYc3OaJ6Vpmi5C00Tn01ku6iPoS4-q6lQcdDgLLiFMrv2VD5gQ9aFZMGOyNiRlRO4CLKeuWGFWqW5eVG3P07H_nc3saOdTB3oUx5JY_2", 
		"URL=https://yandex.ru/an/count/"
		"WOeejI_zOoVX2Laa0UKB05CKJXv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9Ka47rn18F1YSgu62N7RuCTF2wC09uisMERHfzc4qPREDLAfLAPOQbayqE_qJxfUzDxYw95nlTDxbYc3OaJ6Vpmi5C00Tn01ku6iPoS4-q6lQcdDgLLiFMrv2VD5gQ9aFZMGOyNiRlRO4CLKeuWGFWqW5eVG3P07H_nc3saOdTB3oUx5JY2ro_unldveGgxyaK2ri7T5sV8JTb6fND19BSAAgPAPKm5Z1Wvpm0WqpP4afcIq2YJ1O6IqQVG27hAUYqhklO634D8wwWrNKORoGVMTPF36F1ZgCgQ2BudKrfwYtBchl_ZPwiwxgEfSrDGyKkNNGZ1YrqLcPiAbSgbKePDeemslIEyaCLEJ900XbyW1Jy89ji-3QZFj8AWOVx-ELnpxDTVbmcVIcBOOug4mzAQZ9z8eiQfRkedmLFzd"
		"NlGDBTwXXy_1hTi46MJXu6aqLf~2="
		"WVWejI_zOoVX2Lbm0LKF00FSR4svmYP61BmL4D1Da5Z4uDbaWCm1NOh2jXZmPOBuXY0b1GGN19CNOgHnyam6LClRQMHQxPJzTuUyr7V6qETpkRDd-vqxRxZpLJOJI7AZg6QcLC9Om82Tym0CEeuDdCLnwtJ0C8dYAkU-ggitdQq7CZRmswXc5uJ9uKffBWG8mkGAq48G5bU05e8mk0Aq46nb2z12i0LLW1Q2hQS2j11iEHMWzL1Xh2jSkat0nWLa_n-NIixNn5ajg082O3zokafdO3aJIxezR6qgr0RuOa775EJ2VJxVC8s0qr5bOoPXXzQbyIi7zqHExSf_jULLgH77w7gDpa5gJwmFYGx79ngkfzcUPS3ZPVpU5e1Wwoc0hGEwjWXJSsx9v18CsUUVqyoMlg8fR8jqwSQGOw1qx1sJdesB4JDZT9Xl91zPrayCOm5CTrdMv6vuE_B55NZO_J29li0Ftl2MzxyRtlA-jmChiQ_5uAlhPs"
		"aZp3AzzChGO9ecnpzwxy3u1QEtlewmyUlDD9WlUxDn7gCd-xv79Lb-Z80FhMxOVtEC7yMIValhkYuvVXHBUgtNis9q8iLdFNsqH6xkHH3yLg6pBxVhENmcQBcqrsoMbeC53yu6wKIAsr8WiQxMn0l_nq0umH_fby0yNVjpIY4xd080~2?stat-id=195&test-tag=29&rnd=9103427151117&confirmRatio=921238&ctime=1735901681161&banner-sizes=eyI3MjA1NzYxMDc3NDE1NjM1MCI6IjE2M3g0MzkiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc1NDk5NDU1MyI6IjE2M3gzODIifQ%3D%3D&partner-stat-id=195&confirmTime=2100000&width=163&height=1276&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDc3NDE1NjM1MCI6IjI4MTQ4MzU2Njc1OTk1MiJ9&constructor-rendered-assets=eyI3MjA1NzYxMDc3NDE1NjM1MCI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDc3NDE1NjM1MCI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t182.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1TUYKhxx0N0200000000U9nJVBhcOk7QbmMTXW7i6hSxbf_vPVdkO7aw0n1umaH2lRXDP6FRCXaPKXc1ufa1x1SkWiHBYpaO66gl0eLQ6K7aJCOSFP021eQ5Z2M7m0o6bN3MHf3K1cOWiPVnmXmvXgDWcREC8E6hOF8k8uEC0iDVnbbC30npcK0YIvaM0CcrJ150aRDC_u7WAjDXeCWh9W4DW_qs0UmC3AlNlv8whSN6y9U92-GGPbOWsSki22Id", 
		"URL=https://yandex.ru/an/rtbcount/"
		"1TUYKhxx0N0200000000U9nJVBhcOk7QbmMTXW7i6hSxbf_vPVdkO7aw0n1umaH2lRXDP6FRCXaPKXc1ufa1x1SkWiHBYpaO66gl0eLQ6K7aJCOSFP021eQ5Z2M7m0o6bN3MHf3K1cOWiPVnmXmvXgDWcREC8E6hOF8k8uEC0iDVnbbC30npcK0YIvaM0CcrJ150aRDC_u7WAjDXeCWh9W4DW_qs0UmC3AlNlv8whSN6y9U92-GGPbOWsSki22IdCeECcCji3d86o5uEi3EO8m9DI_E39xITP8Rv_IfOvLqm-PFPmOaVuWcM-lz7mFvPmVBc3iiE5gO3BFzXWF4aY_MsYzoCLX5hBh2qVce_Vcx9gMw9comGltwmVmXdlMK1-NC1g-19rXPc8R3W1TQ61ewRh33hlxA2JEnWQs2PmFRqvh6-wrjtxUXadC5svN3m0hPfxzuytx7lwQRWbMmm4m-msPnWOtx4nkCSQbNgd1BX7rvMRluJBZ"
		"sH7SQQnSvkQ6XXR6vgiO6TQGSxymbsyGVitI_FVNopz-Vlg1_iF1qSLHCu61Tm0BstWkDB2_C64B63W_4M1qRuBk1iO5x1kODn0-SabXESp1SucJvmClxWP5p01TBCTU2Fw4TG130q-BrmQEI6iJh1h0FFFZbSu6vfQ5hX201xHT3i?test-tag=29&rnd=8404677371151&confirmRatio=921238&ctime=1735901680962&banner-sizes=eyI3MjA1NzYxMDc3NDE1NjM1MCI6IjE2M3g0MzkiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc1NDk5NDU1MyI6IjE2M3gzODIifQ%3D%3D&partner-stat-id=195&confirmTime=2102000&width=163&height=1276&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&banner-test-tags=eyI3MjA1NzYxMDc3NDE1NjM1MCI6IjI4MTQ4MzU2Njc1OTk1MiIsIjcyMDU3NjEwNjEyNTU4MjE5IjoiMjgxNDgzNTY2NzU5OTUzIiwiNzIwNTc2MTA3NTQ5OTQ1NTMiOiIyODE1MDA3NDY2MjkxMzgifQ%3D%3D&constructor-rendered-assets=eyI3MjA1NzYxMDc3NDE1NjM1MCI6MjU4OTcsIjcyMDU3NjEwNjEyNTU4MjE5IjoyNTg5NywiNzIwNTc2MTA3NTQ5OTQ1NTMiOjI1ODk3fQ&rendered-direct-assets=eyI3MjA1NzYxMDc3NDE1NjM1MCI6MTc3LCI3MjA1NzYxMDYxMjU1ODIxOSI6MTc3LCI3MjA1NzYxMDc1NDk5NDU1MyI6MTc3fQ", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t183.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOeejI_zOoVX2Laa0UKB05CKJXv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9Ka47rn18F1YSgu62N7RuCTF2wC09uisMERHfzc4qPREDLAfLAPOQbayqE_qJxfUzDxYw95nlTDxbYc3OaJ6Vpmi5C00Tn01ku6iPoS4-q6lQcdDgLLiFMrv2VD5gQ9aFZMGOyNiRlRO4CLKeuWGFWqW5eVG3P07H_nc3saOdTB3oUx5JY_3", 
		"URL=https://yandex.ru/an/count/"
		"WOeejI_zOoVX2Laa0UKB05CKJXv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9Ka47rn18F1YSgu62N7RuCTF2wC09uisMERHfzc4qPREDLAfLAPOQbayqE_qJxfUzDxYw95nlTDxbYc3OaJ6Vpmi5C00Tn01ku6iPoS4-q6lQcdDgLLiFMrv2VD5gQ9aFZMGOyNiRlRO4CLKeuWGFWqW5eVG3P07H_nc3saOdTB3oUx5JY2ro_unldveGgxyaK2ri7T5sV8JTb6fND19BSAAgPAPKm5Z1Wvpm0WqpP4afcIq2YJ1O6IqQVG27hAUYqhklO634D8wwWrNKORoGVMTPF36F1ZgCgQ2BudKrfwYtBchl_ZPwiwxgEfSrDGyKkNNGZ1YrqLcPiAbSgbKePDeemslIEyaCLEJ900XbyW1Jy89ji-3QZFj8AWOVx-ELnpxDTVbmcVIcBOOug4mzAQZ9z8eiQfRkedmLFzd"
		"NlGDBTwXXy_1hTi46MJXu6aqLf~2="
		"WVOejI_zOoVX2Lbl0KKF0DDRR4svmYP61BmL4D1D9B0yuAeXY_M0BaLXMmpuCa5yGv2I0e8BWiaBCT8uUIO3gkNjD3AjTih-kqDUwZjZRxZpLJOJI7AZg6QcLC9Om82Tym0CEeub2eTSIUc0FNpfI4FJxejITBOpk81WyQjIBkjHZh53L1cX2GHXSWLe8GYBAq0BGHXS0Le8jh85Q27OWYf02y7MKm5Q2BQS2j1wg33M5IxT9c3Z0h8G076IypKX1QYfvoy8CgURLDUZXuabtHwsDXLg0toLE4B5HwM8ePMpctsdMWOZ1Otp-OPfWAUTpCPiXnU3S4cKWtkYrR0tvTIkj1gsERg-wpKw1waziJuaEXoVQBYUPdkM0O-NyNjR08Ajfm2s3kXMUv7ddzFCbhwgK6PJmYI670EbwtTCUZOkHioCqIFvoB9-OXWBOBhBiYOtkf-_s0Cy7ZzCOt44--3eb_w_qI_zUtqJD_rh_Gwzyy_wdLccbr"
		"xcSkSmXMkCtZbCuHgZjxwEa4kYDtihN_PhWTuoJ_PATAiqFpxWl9qR-oy9TObZNkeInxAyrkSXCjcHzTactjUfRqlVMPWsQcvnRGWF_0oX-yEI_XC1DNNBTsZ1PjaEM1gvLG0-wTLFe4tMdoolITveYOWBxa05j9mZGaufvDL2~2?stat-id=195&test-tag=29&rnd=9103427151117&confirmRatio=921238&ctime=1735901681161&banner-sizes=eyI3MjA1NzYxMDc3NDE1NjM1MCI6IjE2M3g0MzkiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc1NDk5NDU1MyI6IjE2M3gzODIifQ%3D%3D&partner-stat-id=195&confirmTime=2100000&width=163&height=1276&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjI4MTQ4MzU2Njc1OTk1MyJ9&constructor-rendered-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t184.inf", 
		"EncType=", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_24", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=compose-autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t185.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"compose-autocomplete\",\"params\":{\"allow_pers_data\":\"on\",\"id\":\"editor10\",\"message_id\":\"<389121735901678@mail.yandex.ru>\",\"text\":\"6\",\"text_limit\":\"4096\",\"thread_id\":\"\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901683454,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,"
		"0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,"
		"33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607"
		",0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_25", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=compose-autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"compose-autocomplete\",\"params\":{\"allow_pers_data\":\"on\",\"id\":\"editor10\",\"message_id\":\"<389121735901678@mail.yandex.ru>\",\"text\":\"66\",\"text_limit\":\"4096\",\"thread_id\":\"\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901683642,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434"
		",0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0"
		",33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;"
		"762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_26", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=compose-autocomplete", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"compose-autocomplete\",\"params\":{\"allow_pers_data\":\"on\",\"id\":\"editor10\",\"message_id\":\"<389121735901678@mail.yandex.ru>\",\"text\":\"666\",\"text_limit\":\"4096\",\"thread_id\":\"\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901683808,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\""
		"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;"
		"188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,"
		"52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("WYGejI_zOoVX2LcH0RKG0FCUTnKGq2k427iGZHv46GIJ5sAaSV9C1bJBssbaMksK_NU7lDHtnWsSnN7hTC1d0iGKSiWvL7hdjWtpuK_f32pt8Um_UAM7Y4a-x1u48psC_LUF8qKahJJ5qNaG-m6u9fPqUzZQLAWDy5N203fE5QcD6Z4goA1wOea7WnCLSB3Bcw-D7YGvLnMs21bLX8EP00xY1Vw8R1WleSGRn2JiqBfe6FiQSbFExqrSC_PVRNbL", 
		"URL=https://yandex.ru/an/tracking/"
		"WYGejI_zOoVX2LcH0RKG0FCUTnKGq2k427iGZHv46GIJ5sAaSV9C1bJBssbaMksK_NU7lDHtnWsSnN7hTC1d0iGKSiWvL7hdjWtpuK_f32pt8Um_UAM7Y4a-x1u48psC_LUF8qKahJJ5qNaG-m6u9fPqUzZQLAWDy5N203fE5QcD6Z4goA1wOea7WnCLSB3Bcw-D7YGvLnMs21bLX8EP00xY1Vw8R1WleSGRn2JiqBfe6FiQSbFExqrSC_PVRNbLQiGoDU4EhCHgk36wNgEVPS3ZPVpU5iXG1OAjfm2s3kZQ8apIGyGa67GVcTZDmkF9JYM-mDtHGhQm-ntVE3SdL7bFfZYWw_eCkIdJg6mcaEH6KSrCgOInW04xvm4OPCe8I9J9mc39w2REQa4L403xGQ48JM7hAUWm4yenK3hsZadFniM8cJ6w1XZnrs6-aNnaMJynZ0KxZggWYU1tDgMfvx4-kG8FknycqHVumHlUylvtmrlUzsvuo_"
		"jS7AglltTW9VQr67nr_Mm7Lc9CCss4MVPaNTTrB6sMeS4qJOv_zDw1yGj6RxtPE8_HattVev8iFqR0XrOtxByvnezYIR-bTLsN73-A9RtMwranEf7Yizxhp1anSo38Z4tbIgLIASD64KQRxg7yL0oG8gXKAfK14FnXsxxfvGzQCvsCdDo7Q6r8dYVTeZLr8s8xltuXKt5t4QS5WXqKASWNwklmgiHMLph3OjBK_m00~2?action-id=25&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("1_28", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3DAAA2AAAAAAAAAAAAAAA17AAA2AAA1AA2&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135444%3Aet%3A1735901685%3Ac%3A1%3Arn%3A87155452%3Arqn%3A7%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b18"
		"37d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901685&t=mc(p-5-h-1)clc(0-0-0)rqnt(7)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fip(1)ti(0)&force-urlencoded=1&site-info="
		"%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t189.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_29", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135445%3Aet%3A1735901686%3Ac%3A1%3Arn%3A785084754%3Arqn%3A6%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901686&t=gdpr(13-0)"
		"mc(p-5-h-1)clc(0-0-0)rqnt(6)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(1)ti(0)&force-urlencoded=1&site-info=%5B%7B%22Letter%20writing%20(new)%22%3A%7B%22in%20header%22%3A%22focus%20on%20%5C%22Theme%5C%22%22%7D%7D%2C%7B%22version%22%3A%22191.1.0%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t190.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("liza1_27", 
		"URL=https://mail.yandex.ru/web-api/do-send/liza1?_save=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"Body=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=&doit=&fid=&from_mailbox=belkatestit%40yandex.ru&from_name=%D0%9A%D0%BB%D0%BE%D1%83%D0%BD%20%D0%A6%D0%B8%D1%80%D0%BA%D0%BE%D0%B2%D0%BE%D0%B9&get_abook=&html=&idcs=&&ign_overwrite=&initial_cc=&initial_to=&inreplyto=&&mark_as=&&disk_att=&nosave=&nosend=yes&notify_on_send=no&overwrite=&&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send=%3Cdiv%3E666%3C%2Fdiv%3E&send_time=&store_fid=&"
		"store_name=&strict_charset=&style=&subj=666&to=%22belkatestit%40yandex.ru%22%20%3Cbelkatestit%40yandex.ru%3E&ttype=html&withUpdatedUndoAndDelayedErrorHandling=yes&_connection_id=LIZA-12390077-1735901572153&_ckey=Vu05nPdFShhOH4Hy5umCi7F%2FmlU%3D!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4%3D!3&_uid=2064807418&_eexp="
		"539434%2C0%2C-1%3B500420%2C0%2C-1%3B722413%2C0%2C-1%3B814988%2C0%2C-1%3B877126%2C0%2C-1%3B924339%2C0%2C-1%3B1030704%2C0%2C-1%3B1103680%2C0%2C-1%3B1104225%2C0%2C-1%3B1105295%2C0%2C-1%3B1151124%2C0%2C-1%3B1162876%2C0%2C-1%3B1163247%2C0%2C-1%3B1170089%2C0%2C-1%3B1174879%2C0%2C-1%3B610121%2C0%2C-1%3B848713%2C0%2C-1%3B944321%2C0%2C-1%3B985006%2C0%2C-1%3B1024668%2C0%2C-1%3B1030455%2C0%2C-1%3B1075392%2C0%2C-1%3B1104478%2C0%2C-1%3B1142331%2C0%2C-1%3B1152849%2C0%2C-1%3B1150928%2C0%2C-1%3B1158907%2C0%2C-1%3"
		"B1179603%2C0%2C-1%3B1104704%2C0%2C-1%3B1140931%2C0%2C-1%3B985890%2C0%2C13%3B715756%2C0%2C52%3B762607%2C0%2C8%3B705044%2C0%2C99%3B943630%2C0%2C12%3B1160418%2C0%2C48%3B1086206%2C0%2C3%3B261659%2C0%2C59%3B134421%2C0%2C43%3B188836%2C0%2C33%3B1117098%2C0%2C61%3B1183344%2C0%2C8%3B1180242%2C0%2C15%3B1180238%2C0%2C76%3B1180240%2C0%2C5&_mailboxUid=&message_id=%3C389121735901678%40mail.yandex.ru%3E&current_time=&captcha_token=&parts_json=&mailboxUid=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_28", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=folders,labels", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t192.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"folders\",\"params\":{},\"meta\":{\"requestAttempt\":1}},{\"name\":\"labels\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901688230,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,"
		"-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,"
		"-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,"
		"61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_29", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"storedComposeStates\\\":\\\""
		"%5B%7B%22params%22%3A%7B%22ids%22%3A%22188306759419428879%22%2C%22mailboxUid%22%3Anull%7D%2C%22miniData%22%3A%7B%22avatar%22%3A%7B%22url%22%3A%22%2F%2Favatars.mds.yandex.net%2Fget-yapic%2F36777%2F0r-6%2Fislands-200%22%2C%22color%22%3A%22%2356bf68%22%2C%22monogram%22%3A%22BE%22%2C%22valid%22%3Atrue%7D%2C%22subject%22%3A%22666%22%2C%22lastSaved%22%3A1735901688359%2C%22recipients%22%3A1%7D%2C%22mailboxUid%22%3Anull%7D%2C%7B%22params%22%3A%7B%22ids%22%3A%22188306759419428865%22%2C%22mailboxUid%22%3Anu"
		"ll%7D%2C%22miniData%22%3A%7B%22avatar%22%3A%7B%22url%22%3A%22%22%2C%22color%22%3A%22%23b8c1d9%22%2C%22monogram%22%3A%22NO%22%2C%22valid%22%3Atrue%7D%2C%22subject%22%3A%22%22%2C%22lastSaved%22%3A1735406272376%2C%22recipients%22%3A1%7D%2C%22mailboxUid%22%3Anull%7D%5D\\\"}\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"settings\",\"params\":{\"actual\":\"true\",\"list\":\"storedComposeStates\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p"
		"!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901688235,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1"
		";1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;"
		"944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_30", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t194.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"storedComposeStates\\\":\\\""
		"%5B%7B%22params%22%3A%7B%22ids%22%3A%22188306759419428865%22%2C%22mailboxUid%22%3Anull%7D%2C%22miniData%22%3A%7B%22avatar%22%3A%7B%22url%22%3A%22%22%2C%22color%22%3A%22%23b8c1d9%22%2C%22monogram%22%3A%22NO%22%2C%22valid%22%3Atrue%7D%2C%22subject%22%3A%22%22%2C%22lastSaved%22%3A1735406272376%2C%22recipients%22%3A1%7D%2C%22mailboxUid%22%3Anull%7D%2C%7B%22params%22%3A%7B%22ids%22%3A%22188306759419428879%22%2C%22mailboxUid%22%3Anull%7D%2C%22miniData%22%3A%7B%22avatar%22%3Anull%2C%22subject%22%3A%22%22"
		"%2C%22lastSaved%22%3A0%2C%22recipients%22%3A0%7D%2C%22mailboxUid%22%3Anull%7D%5D\\\"}\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"settings\",\"params\":{\"actual\":\"true\",\"list\":\"storedComposeStates\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901688231,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,"
		"0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0"
		",61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,"
		"0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_custom_request("liza1_31", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t195.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"settings\",\"params\":{\"actual\":\"true\",\"list\":\"storedComposeStates\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901688490,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1"
		";1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;"
		"722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;"
		"1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("WYGejI_zOoVX2LcH0RKG0FCUTnKGq2k427iGZHv46GIJ5sAaSV9C1bJBssbaMksK_NU7lDHtnWsSnN7hTC1d0iGKSiWvL7hdjWtpuK_f32pt8Um_UAM7Y4a-x1u48psC_LUF8qKahJJ5qNaG-m6u9fPqUzZQLAWDy5N203fE5QcD6Z4goA1wOea7WnCLSB3Bcw-D7YGvLnMs21bLX8EP00xY1Vw8R1WleSGRn2JiqBfe6FiQSbFExqrSC_PVRNbL_2", 
		"URL=https://yandex.ru/an/tracking/"
		"WYGejI_zOoVX2LcH0RKG0FCUTnKGq2k427iGZHv46GIJ5sAaSV9C1bJBssbaMksK_NU7lDHtnWsSnN7hTC1d0iGKSiWvL7hdjWtpuK_f32pt8Um_UAM7Y4a-x1u48psC_LUF8qKahJJ5qNaG-m6u9fPqUzZQLAWDy5N203fE5QcD6Z4goA1wOea7WnCLSB3Bcw-D7YGvLnMs21bLX8EP00xY1Vw8R1WleSGRn2JiqBfe6FiQSbFExqrSC_PVRNbLQiGoDU4EhCHgk36wNgEVPS3ZPVpU5iXG1OAjfm2s3kZQ8apIGyGa67GVcTZDmkF9JYM-mDtHGhQm-ntVE3SdL7bFfZYWw_eCkIdJg6mcaEH6KSrCgOInW04xvm4OPCe8I9J9mc39w2REQa4L403xGQ48JM7hAUWm4yenK3hsZadFniM8cJ6w1XZnrs6-aNnaMJynZ0KxZggWYU1tDgMfvx4-kG8FknycqHVumHlUylvtmrlUzsvuo_"
		"jS7AglltTW9VQr67nr_Mm7Lc9CCss4MVPaNTTrB6sMeS4qJOv_zDw1yGj6RxtPE8_HattVev8iFqR0XrOtxByvnezYIR-bTLsN73-A9RtMwranEf7Yizxhp1anSo38Z4tbIgLIASD64KQRxg7yL0oG8gXKAfK14FnXsxxfvGzQCvsCdDo7Q6r8dYVTeZLr8s8xltuXKt5t4QS5WXqKASWNwklmgiHMLph3OjBK_m00~2?action-id=26&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("1_30", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3D%253FAAAA1AAAAAAAAA17AAA2AAA1AA2%26c%3D2005410710&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135450%3Aet%3A1735901690%3Ac%3A1%3Arn%3A392013295%3Arqn%3A8%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1"
		"837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901690&t=mc(p-6-h-1)clc(0-0-0)rqnt(8)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fip(1)ti(0)&force-urlencoded=1&site-info="
		"%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t197.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("liza1_32", 
		"URL=https://mail.yandex.ru/web-api/do-send/liza1?_send=true", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"Body=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=6&doit=&fid=&from_mailbox=belkatestit%40yandex.ru&from_name=%D0%9A%D0%BB%D0%BE%D1%83%D0%BD%20%D0%A6%D0%B8%D1%80%D0%BA%D0%BE%D0%B2%D0%BE%D0%B9&get_abook=&html=&idcs=&&ign_overwrite=no&initial_cc=&initial_to=&inreplyto=&&mark_as=&&disk_att=&nosave=&nosend=&notify_on_send=no&overwrite=188306759419428879&&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send=%3Cdiv%3E666%3C%2Fdiv%3E&"
		"send_time=&store_fid=&store_name=&strict_charset=&style=&subj=666&to=%22belkatestit%40yandex.ru%22%20%3Cbelkatestit%40yandex.ru%3E&ttype=html&withUpdatedUndoAndDelayedErrorHandling=yes&_connection_id=LIZA-12390077-1735901572153&_ckey=Vu05nPdFShhOH4Hy5umCi7F%2FmlU%3D!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4%3D!3&_uid=2064807418&_eexp="
		"539434%2C0%2C-1%3B500420%2C0%2C-1%3B722413%2C0%2C-1%3B814988%2C0%2C-1%3B877126%2C0%2C-1%3B924339%2C0%2C-1%3B1030704%2C0%2C-1%3B1103680%2C0%2C-1%3B1104225%2C0%2C-1%3B1105295%2C0%2C-1%3B1151124%2C0%2C-1%3B1162876%2C0%2C-1%3B1163247%2C0%2C-1%3B1170089%2C0%2C-1%3B1174879%2C0%2C-1%3B610121%2C0%2C-1%3B848713%2C0%2C-1%3B944321%2C0%2C-1%3B985006%2C0%2C-1%3B1024668%2C0%2C-1%3B1030455%2C0%2C-1%3B1075392%2C0%2C-1%3B1104478%2C0%2C-1%3B1142331%2C0%2C-1%3B1152849%2C0%2C-1%3B1150928%2C0%2C-1%3B1158907%2C0%2C-1%3"
		"B1179603%2C0%2C-1%3B1104704%2C0%2C-1%3B1140931%2C0%2C-1%3B985890%2C0%2C13%3B715756%2C0%2C52%3B762607%2C0%2C8%3B705044%2C0%2C99%3B943630%2C0%2C12%3B1160418%2C0%2C48%3B1086206%2C0%2C3%3B261659%2C0%2C59%3B134421%2C0%2C43%3B188836%2C0%2C33%3B1117098%2C0%2C61%3B1183344%2C0%2C8%3B1180242%2C0%2C15%3B1180238%2C0%2C76%3B1180240%2C0%2C5&_mailboxUid=&message_id=%3C389121735901678%40mail.yandex.ru%3E&current_time=&captcha_token=&parts_json=&mailboxUid=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("40081755_2", 
		"URL=https://mc.yandex.ru/watch/40081755?page-url=goal%3A%2F%2Fmail.yandex.ru%2FSEND&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135450%3Aet%3A1735901691%3Ac%3A1%3Arn%3A809765588%3Arqn%3A7%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b18"
		"37d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901691&t=gdpr(13-0)mc(p-6-h-1)clc(0-0-0)rqnt(7)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(1)fip(1)ti(0)&force-urlencoded=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t199.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("event_confirmation_8", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t200.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072003520130451280\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072003520269911888\",\"ImpID\":\"2165\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"bs_response\"}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("trace_2", 
		"URL=https://yandex.ru/ads/trace?pcodever=1183758", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t201.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"data\":{\"bannerId\":\"72057610612558219\",\"impId\":\"2165\",\"pageId\":\"92550\",\"productType\":\"direct\"},\"version\":\"1183758\",\"name\":\"BANNER_PARTS_IN_VIEW\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("event_confirmation_9", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t202.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072003520130451280\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072003520269911888\",\"ImpID\":\"2165\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"container_in_viewport_after_response\"}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_33", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=folders,labels", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t203.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"folders\",\"params\":{},\"meta\":{\"requestAttempt\":1}},{\"name\":\"labels\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901690652,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,"
		"-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,"
		"-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,"
		"61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("click_26", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t204.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,"
		"12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=Performance_sendMessage,207.2154=120153.4,207.1428=120475.4,2877=322,-cdn=mskstoredata/cts=1735901690666/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;"
		"1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,"
		"-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A70%2C%22trigger%22%3A%22compose-collapsed%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901690677,-type=string,-name=adRequest/cts=1735901690677/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0"
		",-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0"
		",8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2161%22%2C%22statId%22%3A65%2C%22trigger%22%3A%22compose-collapsed%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901690678,-type=string,-name=adRequest/cts=1735901690678/*\r\n/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0"
		",-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0"
		",8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22messages-direct%22%2C%22blockId%22%3A%22R-I-92550-2165%22%2C%22statId%22%3A70%2C%22lifetime%22%3A120496%2C%22trigger%22%3A%22compose-collapsed%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901690686,-type=string,-name=adShow/cts=1735901690686/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_34", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-settings,settings", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t205.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-settings\",\"params\":{\"params\":\"{\\\"storedComposeStates\\\":\\\"%5B%7B%22params%22%3A%7B%22ids%22%3A%22188306759419428865%22%2C%22mailboxUid%22%3Anull%7D%2C%22miniData%22%3A%7B%22avatar%22%3A%7B%22url%22%3A%22%22%2C%22color%22%3A%22%23b8c1d9%22%2C%22monogram%22%3A%22NO%22%2C%22valid%22%3Atrue%7D%2C%22subject%22%3A%22%22%2C%22lastSaved%22%3A1735406272376%2C%22recipients%22%3A1%7D%2C%22mailboxUid%22%3Anull%7D%5D\\\"}\"},\"meta\":{\"requestAttempt\":1}},{\"name\""
		":\"settings\",\"params\":{\"actual\":\"true\",\"list\":\"storedComposeStates\"},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901690667,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;"
		"1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;"
		"877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76"
		";1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("event_confirmation_10", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t206.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072003520130451280\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072003520269911888\",\"ImpID\":\"2165\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"container_in_viewport_after_response\"}]}]}", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("92550_7", 
		"URL=https://yandex.ru/ads/meta/92550?target-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&page-ref=https%3A%2F%2Fsso.ya.ru%2F&pcode-version=1183758&pcodever=1183758&comboblock-unencoded-vast=1&ad-session-id=9696341735901581656&target-id=55223853&pcode-test-ids="
		"1111484%2C0%2C72%3B1173005%2C0%2C38%3B1135992%2C0%2C20%3B1179650%2C0%2C62%3B1184115%2C0%2C7%3B1170777%2C0%2C23%3B1183716%2C0%2C29%3B1139808%2C0%2C34%3B1164347%2C0%2C50%3B1175802%2C0%2C9%3B1175871%2C0%2C8%3B1180617%2C0%2C27%3B1178013%2C0%2C26%3B1183758%2C0%2C6%3B912288%2C0%2C77&pcode-flags-map="
		"eJylWF1znLgS%2FS88G68EiI%2B8aaBhVAMSkcTYzlZKhT141xvbs9cf2d2k8t9vCfBkwM5MtvbJBqaPWq3u06f11VlTZQpJF6YEXuil8%2B7Xr87n9va5c945Hgpi58R56h6f2MZ558QoRlHgfPt40pudSVqbkikNHKRZXBjBU5gAaNnAPgDGfhASb4egGrmGC8O40hJoZSqRgeQmA8UKPkF6vGpvO3Pf%2FTWFI56H4x1co8CsmZaMU6PX5n0D8sLUVNJqgtX9%2FecMJfQSMqCwDIRh3OiCGpX1iINvjBemgoxRk7MS1ATwevtg2tvbGWgSR7gH1YUwI3DBhQSj2Ac47FEcIIx6YykNSJYZLcyaKn3MDPvR9%2BhquijBrEEqJqbhxDj2Y%2BTPrQNv8LhqSs0WlNtzbTjLGWSGcQ0yp%2BlBz0kSe9HggQ3dYtXvVZlcSLOLbSqqhTiEEkZJgKKX7XM4MxJ0I7mhuQZp0pKlK6OXUj"
		"TF8mC%2BRRijIOmBVEWltinRgIHz2ixKmq767N1H%2BNW5a29uTx%2BenRPnn%2FZ%2B0%2F19%2BvD8y81d%2B1v3OHn1W3vXv9l86e6Hn7efb562w793p3sPm%2Fub8a1F3iE4J85D%2B%2BV2%2B%2BX38fOXh%2BHv80N7et%2F99fjqB3%2B027ub0XT7yf79ONkqib0hZgq0ySCnTalNTQswvKkWIA9FPCLYj4aEu6BKU81SkwNkZlGKdGVYZs6WTMMb8ZIuc70gwR4KXOycTJ692bM%2Few76Z%2Bp6BCMUeaM9dUkcByF2Md69CCNMIrvAxwkdJSEOe6dzZUohapOz80PbjInvY7%2B3sFlV1NqoVLL6YFnFke8lA%2BtlTPUlNWRgKnjOZEX1vLpmAIlH%2FHhYNfsAfCCVFZSgj9nh2Esm7LakPCvtMfDV6IStLJrphh%2Bsy8SPPDIQpaIVmAvKMzg3magoO%2BxDhKIwmW"
		"xe1MClXphaQm0q0NQsmnJ1ECQhwcgKoGlhlkCzw%2FmIEYpJOJARVRc8HSp33%2BSr89g92Qzc%2B26sXxnV1JSCZs7J9BvwDGywZu%2FHD7O3tif%2BCOCHSzDOtBle0CwX57PPFWjJVtSkorFkOvuaCrFiYCqq06XtNm%2F%2FqpaiYgpeLdwXut3%2B6GXPtrNfTRnYCN47bGvq9%2B3j06MNpm1jH79NTgLHUTJyqKr7JjQ2wjOml6LRRkLGJKTaCF5eHO9SyItQPHBNrs1LVtG6LsWaccOEMsCzlMrsCEziIbKrjh2OUqD3G04qgWq2tsdH02XvtP1xWlJWHUtCL%2FH3tp6zc3POqKiYkfC%2BAaXVYXPfIxHZmaeN0qIypSgMy%2BmURQPSte0lDt2ka6%2FdIGp99zIKN257fRkGSdeSDbFkGpE2DkOfuFebMHGDJL52k00Suxhdtbjd4Pays5SZguf5YYBdb0ECN0A%2BcRdk"
		"kbielxCCATLIcufESUgX%2B5u4dUnQBW6w8T23jXDg4su2vYyjK0ySjV0U%2FCDwvdgNwsh3A4KpuwjDwF34IeRengY5Sia8jJEfJHH81sZrkCnwSX6gU4TIz1mneTFlgARHGEeJ57zDJ46PUBJ7AcLOO%2FztB4C2Zl8E0VCoh08wiMJRGaZKjoKyYFV1WL6hIPHCcGamQK5BuoplR4wJ8sautqu3vhX%2FqAOHfoKCyCezMyB%2B4A2u9zq9svqtkLQ0lKuzY4lPEoK9nQ%2B1pSSjJU1XINV0dR9hzwtDQhx7AjgMAo%2FMXYmDeNyRrExe0uJI3cRJFI9SpoZ0kJ8NZ%2B8t0WV9advuXZc0hWqWTa%2FBEhKOcShAm%2FXKZFCJUdcsLoymBcumWYUJQcTOHI9%2F%2FmKB3M83m27rfv7kdpub%2B203PJ%2F%2B8bi9d6aJloQIf5%2BPaJYN04ey6r1v140s96hJFwdlMLaAoy"
		"oTtWYV%2BwAmXUK6MllTlyylGn4inBgj7H%2F3CnjPk3oJFRioan1haGoljKkph%2FJfSnWMPWwHiYmPVhRkqj5iF5IxVju7oheulRijdsQ%2BSsJhXTjXIDktTaZqm6Vc1UJqc7S6cYCCURTBed0H0q6shlFPL8W0Ad15M2svib%2BHNW%2FKUqUSgL%2BItHRJeQFGSAZcHxWJGIdBTMId3pqlJgVW9qlDy9QsgRXLI%2FNfGPqet5d%2FuTg3dhqoGP85%2BygJolctNS2FneUarQU3%2BZFjiQhGeAchGj2O9qVd3WonS8Ez%2Brl6ms3OkY%2F2Wruto1RCBlwzWg69%2Fc0GfL19cNvbW%2Feh%2B99zZwXN9OqBJMmrqwdJeSYqcwZlKioYxqVUlOIVP7qP3W139dRtZp4mIUE7UC7MGSwqq6w0s1I%2FPjqv4%2B%2F7VEvRlMOdQ1qnpqbpSi2FHiR%2Bo18uEQaxdeSeJULR"
		"qLgHrTaIHwm5BLU0ilV1eewKwo9G0n4LYRjIbXr8FxRbp7O6QKfJvwCo6Pmgkyde3Nxf%2F4wXQxR2WJpVIJoJUogQQj%2Flzks0DqH5%2Fw3NNFyzcvy6j4sP4Nq8klVtgEr1RmJfPT8%2Bbe%2FMpn34NCuWJEbxvGcsbLUMY29xjMv8kUhs8aq6ZNoSGc1o3WvxtXeEAEiMhloFpYCn8OKCWkrGDw6bvfF48zYUjHVa6CXIcW5ZCsk%2BCK5padb%2BYT9iFOLxIgqGW8lBixW0PsaDMRpvGupUZLCeUV5%2FRiR%2BlaZ9P%2Fr2f%2Fa8OtQ%3D&pcode-icookie=KN4YJN2fwz%2B4oUc0YnlO7ehmT5iRutE882mLt2mZpKsas2F0jd69R08CC3ZSOhRkdrtDAZv7ejGiR9ZeW8vuJB3dHqI%3D&disable-base64=1&duid=MTczNTkwMTQxOTg3NzMwMDQ4NQ%3D%3D&"
		"imp-id=2161&refresh-type=6&ecma-version=es2017&charset=utf-8&partner-stat-id=65&skip-token=yabs.NzIwNTc2MTA3NzQxNTYzNTAKNzIwNTc2MTA2MTI1NTgyMTkKNzIwNTc2MTA3NTQ5OTQ1NTM%3D&test-tag=7696581394434&tga-with-creatives=1&top-ancestor=https%3A%2F%2Fmail.yandex.ru&top-ancestor-undetermined=0&uid=2064807418&layout-config="
		"%7B%22win_width%22%3A1241%2C%22win_height%22%3A1281%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A4.8%2C%22isInIframe%22%3Afalse%2C%22w%22%3A163%2C%22h%22%3A0%2C%22width%22%3A163%2C%22height%22%3A1276%2C%22visible%22%3A1%2C%22fullscreenHeaderHeight%22%3A80%2C%22left%22%3A1065%2C%22top%22%3A102%2C%22ad_no%22%3A4%2C%22darkTheme%22%3Afalse%2C%22safeArea%22%3A%7B%22top%22%3A0%2C%22bottom%22%3A0%2C%22left%22%3A0%2C%22right%22%3A0%7D%2C%22req_no%22%3A4%7D&grab-orig-len=48&grab="
		"eyJncmFiX3ZlcnNpb24iOjIsImZvcmJpZGRlbiI6MX0KrP__&uniformat=true&callback=Ya%5B8636156907014%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("event_confirmation_11", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072006838164916048\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072006838322988880\",\"ImpID\":\"2161\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"bs_response\"}]}]}", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("trace_3", 
		"URL=https://yandex.ru/ads/trace?pcodever=1183758", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"data\":{\"bannerId\":\"72057610612558219\",\"impId\":\"2163\",\"pageId\":\"92550\",\"productType\":\"direct\"},\"version\":\"1183758\",\"name\":\"BANNER_PARTS_IN_VIEW\"}", 
		LAST);

	web_custom_request("click_27", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t210.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/table=rum_events/path=690.32/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;"
		"943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=-env=production,-project=liza,-service=ads,-platform=desktop,-experiments="
		"save-to-disk-button%3Breact-client-setup-collectors%3Bpartly-disable-adv%3Breact-layout%3Badv-exist%3Bweb_promo_onboarding_subscription%3Bweb_promo_onboarding_beautiful_email%3Bpdd-restrict%3Bweb_payment_problem_exp%3Bweb-tuning-kz%3Bholiday_settings%3Bextended_timezones_list2%3Bextended_timezones_list%3Breply_message_with_info%3Bextended_timezones_list3%3Bcalendar_new_timezones%3Bcalendar_module_federation%3Bcalendar_more_grid_event_info%3Bopt-in-popup-promo%3Bux-feedback-prevent-reruns%3Bweb-dis"
		"able-backup-creation%3Bweb-hide-backup%3Bweb-remove-backup%3Bgmail-app-passwords%3Bweb-editor-sort-attributes%3Bweb-new-user-block%3Bweb_mail_b2b_outer_contacts%3Bweb_mail_b2b_outer_contacts_for_all%3Bweb-outdated-browser%3Bweb-ckeditor-xss-fix%3Bweb_ai_mail_opt_out%3Bweb-allow-copy-recipients%3Bweb-support-chat%3Bweb_ads%3Bweb-right-column-ads%3Bweb-ads-render-upgrade%3Bweb-right-column-ads-compose%3Bweb-shared-mailboxes-permissions%3Bcalendar_copy_event_attendees%3Btest_exp%3Bspeedup,-version="
		"191.1.0,-yandexuid=9903672511735901413,-referrer=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant,-additional=%7B%22uid%22%3A%222064807418%22%2C%22blockName%22%3A%22right-col-rtb-1%22%2C%22blockId%22%3A%22R-I-92550-2161%22%2C%22statId%22%3A65%2C%22lifetime%22%3A120911%2C%22trigger%22%3A%22compose-collapsed%22%2C%22pageName%22%3A%22messages%22%7D,-ts=1735901691101,-type=string,-name=adShow/cts=1735901691101/*", 
		LAST);

	web_custom_request("click_28", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t211.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=mc.yandex.ru-!10!0;mail.yandex.ru-!19!12095;yandex.ru-!15!120022;an.yandex.ru-!7!2240;avatars.mds.yandex.net-!7!0;favicon.yandex.net-!1!0;favicon.yandex.net-ru!2!0;clck.yandex.ru-!1!0;favicon.yandex.net-com!1!0;,t=120960,-cdn=mskstoredata/cts=1735901691150/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("trace_4", 
		"URL=https://yandex.ru/ads/trace?pcodever=1183758", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t212.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"data\":{\"imageAreaPortion\":0.9055555555555556,\"imageContainerHeight\":180,\"imageContainerWidth\":163,\"renderedImageWidth\":180,\"renderedImageHeight\":180,\"imageRatio\":1,\"imageContainerRatio\":0.9055555555555556},\"name\":\"NATIVE_IMAGE_DATA\",\"version\":\"1183758\",\"is_ssr\":false,\"unixtime\":1735901691}\n", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_custom_request("event_confirmation_12", 
		"URL=https://an.yandex.ru/event_confirmation", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t213.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"Events\":[{\"CommonData\":{\"PassportUID\":\"2064807418\",\"PageID\":\"92550\",\"UniqID\":\"9903672511735901413\",\"UniqIDSource\":\"YANDEXUID_COOKIE\",\"HitLogID\":\"18072006838164916048\",\"Duid\":\"1735901419877300485\",\"RtbBidReqID\":\"18072006838322988880\",\"ImpID\":\"2161\",\"CryptaIDv2\":\"12418739748641814075\"},\"VariedData\":[{\"ConfirmationType\":\"container_in_viewport_after_response\"}]}]}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("v1_5", 
		"URL=https://mail.yandex.ru/web-api/journal/v1?_m=do-client-log", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t214.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"messages\":\"[{\\\"scenario\\\":{\\\"id\\\":\\\"LIZA-12390077-1735901572153_1\\\",\\\"type\\\":\\\"compose-react-scenario\\\",\\\"startTime\\\":1735901678037,\\\"finishTime\\\":1735901690784},\\\"params\\\":{\\\"sessionLifetime\\\":120153,\\\"step\\\":\\\"sending-has-been-triggered\\\",\\\"usedSmall\\\":false},\\\"reason\\\":\\\"scenario\\\"},{\\\"scenario\\\":{\\\"id\\\":\\\"LIZA-12390077-1735901572153_1\\\",\\\"type\\\":\\\"compose-react-scenario\\\",\\\"startTime\\\":1735901678037,\\\""
		"finishTime\\\":1735901690784},\\\"params\\\":{\\\"sessionLifetime\\\":120461,\\\"step\\\":\\\"finish\\\",\\\"finalizer\\\":\\\"successful-sending\\\",\\\"bodyLength\\\":3,\\\"initialBodyLength\\\":0,\\\"hasDelayedSending\\\":false,\\\"hasReplyNotification\\\":false,\\\"hasDeliveryNotification\\\":false,\\\"hasLabels\\\":false,\\\"hasAttachments\\\":false,\\\"fileAttachmentsCount\\\":0,\\\"fileAttachmentsSize\\\":0,\\\"diskAttachmentsCount\\\":0,\\\"diskAttachmentsSize\\\":0,\\\""
		"forwardedMailsAttachmentsCount\\\":0,\\\"relatedMailIds\\\":[],\\\"autocomplete\\\":true,\\\"smartComposeShows\\\":0,\\\"smartComposeUses\\\":0,\\\"smartComposeLettersTotal\\\":0,\\\"subjectInsertCount\\\":3,\\\"subjectDeleteCount\\\":0,\\\"bodyInsertCount\\\":3,\\\"bodyDeleteCount\\\":0,\\\"wasSSUsed\\\":false,\\\"smartSubjectMode\\\":\\\"line|popup\\\",\\\"subjectLength\\\":3,\\\"sSSuccessRate\\\":0,\\\"sSAbstractSuccessRate\\\":null,\\\"signatureWasChanged\\\":false,\\\"usedSmall\\\":false},\\"
		"\"reason\\\":\\\"scenario\\\"},{\\\"reason\\\":\\\"performance\\\",\\\"type\\\":\\\"fps\\\",\\\"area\\\":\\\"compose-react\\\",\\\"total\\\":1502,\\\"freeze\\\":0,\\\"slow\\\":0},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":70,\\\"trigger\\\":\\\"compose-collapsed\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"requested\\\",\\\"block\\\":\\\""
		"right-col-rtb-1\\\",\\\"id\\\":\\\"R-I-92550-2161\\\",\\\"statId\\\":65,\\\"trigger\\\":\\\"compose-collapsed\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\":\\\"render\\\",\\\"block\\\":\\\"messages-direct\\\",\\\"id\\\":\\\"R-I-92550-2165\\\",\\\"statId\\\":70,\\\"lifetime\\\":120496,\\\"trigger\\\":\\\"compose-collapsed\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"},{\\\"action\\\""
		":\\\"render\\\",\\\"block\\\":\\\"right-col-rtb-1\\\",\\\"id\\\":\\\"R-I-92550-2161\\\",\\\"statId\\\":65,\\\"lifetime\\\":120911,\\\"trigger\\\":\\\"compose-collapsed\\\",\\\"pageName\\\":\\\"messages\\\",\\\"flow\\\":\\\"ads\\\",\\\"reason\\\":\\\"workflow\\\"}]\",\"model\":\"do-client-log\",\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901691334,\"_product\":\"RUS\",\"_connection_id\":\""
		"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,"
		"48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,"
		"0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_31", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135451%3Aet%3A1735901691%3Ac%3A1%3Arn%3A368657009%3Arqn%3A8%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901691&t=gdpr(13-0)"
		"mc(p-6-h-1-g-1)clc(0-0-0)rqnt(8)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(1)ti(0)&force-urlencoded=1&site-info=%5B%7B%22Letter%20writing%20(new)%22%3A%7B%22in%20footer%22%3A%22click%20on%20%5C%22Send%5C%22%22%7D%7D%2C%7B%22Notifications%22%3A%7B%22MessageSent%22%3A%22Show%22%7D%7D%2C%7B%22Notifications%22%3A%7B%22MessageSent%22%3A%22Show%22%7D%7D%2C%7B%22version%22%3A%22191.1.0%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t215.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_custom_request("1LLp8jhn0MK200000000U9nJVBhcOk7QbmMTXW7iFdkBbv_vPVdkO7aw0n1umaH2itV-zezjosHaI6K4YcS6iF_P0X8lBULWOAYz2XHgPGIHCnbR_uCKC30iP0nAXB1MmbaRGTG6PY2nbt6Agnp3KR3CMKQGy5KmUPUHGKQHuI_ZB2O6XhbC896pJF-1u2hJCI3x5PF07OqTEG7i30mnEK-bJcknCVnbuW9PpimA97kP5O7aL6QGjhdCvY2hGNPn", 
		"URL=https://yandex.ru/an/rtbcount/"
		"1LLp8jhn0MK200000000U9nJVBhcOk7QbmMTXW7iFdkBbv_vPVdkO7aw0n1umaH2itV-zezjosHaI6K4YcS6iF_P0X8lBULWOAYz2XHgPGIHCnbR_uCKC30iP0nAXB1MmbaRGTG6PY2nbt6Agnp3KR3CMKQGy5KmUPUHGKQHuI_ZB2O6XhbC896pJF-1u2hJCI3x5PF07OqTEG7i30mnEK-bJcknCVnbuW9PpimA97kP5O7aL6QGjhdCvY2hGNPnWArcZWWqBSqFdj1saXdctwjWbNV1v4zc1oT-YCDPclyV0Rjt1KlhV_OTB4m7MFx30ED95kjj5xaPhIBMN61f_TH-_DoIKzqIDrd0EXa-s3-4izwoWFosW5Nm96iBin1Oy09hmuA61eMRh307V6K5cTd1ri0oWUtfpMDzrxVksj79E8Fjok7W1MpJthrvlcFVqqt1AzbWPXvWipd1nlo8ZSSvr2hBnIdSFxoitFmdN7eYEumrYvtTqD"
		"32sDpKOWCxqmvsnXFiuW_OLrxxFUVZijxZHZ_OUJeugYPmC2xW07fm1SUbGwmRGCGE3iPR71WXl82pWNa5vqp63PpQ9pWPBt0oVU1a_C79k80Bf9Vhm1_HZw0OO50G_URGo0rZTO9P0J_-ErpWRcbeMk480DLkpAq0?test-tag=29&rnd=2628690152969&confirmRatio=1000000&ctime=1735901692904&banner-sizes=eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjY5N3gzMiJ9&partner-stat-id=70&confirmTime=2100000&width=697&height=32&top-screen-block-area=22304&top-screen-block-area-portion=0.01403&banner-test-tags=eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjI4MTQ5MjE1Njg5OTM0NCJ9&"
		"constructor-rendered-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6NTM2ODc5OTE5fQ&rendered-direct-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MTA0ODYzN30", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t216.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WOaejI_zOoVX2LaZ0TqB04FKJHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcVtELawHozX01sdYjH6ZHWLnF114G8F1YSgu62N7RuCTF2wC09uittQDFupcpBOngjKAfNA34idcnt-YVPBtvlSNH8lDhflSiKmRKYOpkQ5Wva03k80Dd0rZENWdcWrx4qvjIkjXgsl8Jzfj3HDXiQp37YyZD_R0Xcgb7021y2b0z3w0B81wFwCmUmZ4xkCSefUAl45", 
		"URL=https://yandex.ru/an/count/"
		"WOaejI_zOoVX2LaZ0TqB04FKJHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcVtELawHozX01sdYjH6ZHWLnF114G8F1YSgu62N7RuCTF2wC09uittQDFupcpBOngjKAfNA34idcnt-YVPBtvlSNH8lDhflSiKmRKYOpkQ5Wva03k80Dd0rZENWdcWrx4qvjIkjXgsl8Jzfj3HDXiQp37YyZD_R0Xcgb7021y2b0z3w0B81wFwCmUmZ4xkCSefUAl45hj_nZNDpGfNtP8g5hGEwhi-GcpADocO2IMwc37MWLC9OCFGzO123JDboIcPBWA9CrZVAw9v2rbFGQLtNiJ5Y6aPSGQlhCDv8FhAaDaaO2tOSLK4JmUziIbDlMTRS_M_qP5tNTInjRXegTkcY6p5ieRCoOrEvKgbKoh1HXD6cTPIV0ELH4HfmNYe85FmWcrpuDfy-KWg1XzluvKtFirr-N2PzAOjXZYeJ3qfgCdqYYngbkwYV1K_sTU"
		"z0qjtg67py6jsmGPPE7WQJHMa0~2="
		"WVuejI_zOoVX2Lbi0OKF0AGROdSmjMm2_fEajVZhg-WYY06AYTFanW6G0PQcvhxxfkQ-UxW1sBoO_oZO0QwIWCq1u06giDQn0UW1aW7u0URtthu1c0Acc-KOe0Acc-KOi0C2w0JL1OW5ijki0P05yVBJ0R05q-yrk0NJxpN01QBoxmB81Ot4NT05qkyrg0Qg0wa7K0Vyj7EdpFg020JG2Bg8W872W8262E08qysow0oJ0fWDvuWsmQ2IW42O4OMQI3ksqGi1EbYic1C1g1E5yeV7pgJAYnY0582WW80Wc1QGaw-x1g0MaDcvk-Rtd-p8CVWPfw257O4Q__z7JfMP6OAW6gphuS7dp8x5FQ4TiZ0nReLlq3-HaRvpgI1ac_kiG3_ZFxWWrvr8Y2BOejMfz-sKo8O1a2A4caYG8eMQI90YXff8a2A8caYG8hcZI90YkgD8a2AxeqZLUEacCGZeaQhewT7ldPjec2FZxA2GhQw7eHx08ukJiz"
		"yzyYCGt2YuR507001SREKQooe60BWauG7O9803u2IP0UWaA_0ang_KuF_-yCEb0O4bg2MTmeq1k2K2k2VresxvAE3VZfz0n4G_W2aCi2dkWz-x1W_y2w3xjvB-4w4qTJkcRQbcoQvNY2HLz8tqqcVHzcgTp2vBVcY3oDhjL0Mq7292JYc4nq80~2?stat-id=70&test-tag=29&rnd=4203140672946&confirmRatio=1000000&ctime=1735901693106&banner-sizes=eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjY5N3gzMiJ9&partner-stat-id=70&confirmTime=2111000&width=697&height=32&top-screen-block-area=22304&top-screen-block-area-portion=0.01403&wmode=0&banner-test-tags="
		"eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjI4MTQ5MjE1Njg5OTM0NCJ9&constructor-rendered-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6NTM2ODc5OTE5fQ&rendered-direct-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MTA0ODYzN30&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t217.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1SzwUh3t0Mi200000000U9nJVBhcOk7QbmMTXW7iQpmgLftvPVdhO7aw0n1umaH2ENczv6BRCXaPKXc1ufa1x0xs8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aF1LC7cNaK56WU4luomc1eQvJ22HfKmBWEHQfWYWo5cc_q1mbSaHAFAAIU3A_qNV0zWP65RqBPC-hSN6y9U92-GGPf03UfaLWUHK", 
		"URL=https://yandex.ru/an/rtbcount/"
		"1SzwUh3t0Mi200000000U9nJVBhcOk7QbmMTXW7iQpmgLftvPVdhO7aw0n1umaH2ENczv6BRCXaPKXc1ufa1x0xs8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aF1LC7cNaK56WU4luomc1eQvJ22HfKmBWEHQfWYWo5cc_q1mbSaHAFAAIU3A_qNV0zWP65RqBPC-hSN6y9U92-GGPf03UfaLWUHKPf0HSvdDGSu0sSi1TWPpHA1fQNxmXBQJp32_NmMhl0icVp8xEF53FC5I_Vy8I8XX1Skz0wexM9WEiFo70SQJBDRRBd8pMaMikS3I-gdz-BabfxebRaAyol31_Y6SzPO5vCy5h88dMLkOXS22DrbXDdzb1HdMmTR0Ce7jwSrZVTUtxjhHoJY3xShXu0LiqzwzURvZtzDDmIlPO8OTO7C_mSRyY8t7ETGghSB3Bo2yhDpy9rnw8ZkCDO"
		"kTtT3GmjZSr683EzCETkOJxE8FsBjVdlluPk_Ftr4_s7awEAecS30ku3ZmHtG5nuxpGXj0n0uEnbiS646xWBE1UGNd3iODd9DOJd0oN-1a-i39-8EJSG4NC5XMS05D-0WAUuO7yuGS6xbXh4umY-6dgEC5xfQ6fXME07ytpqi0?test-tag=29&rnd=1999051415512&confirmRatio=919077&ctime=1735901693312&banner-sizes=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2107000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&banner-test-tags=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6IjI4MTUwMDc0NjYyOTEzNiIsIjcyMDU3NjEwNjEyNTU4MjE5IjoiMjgxNDgzNTY2NzU5OTUzIiwiNzIwNTc2MTA3NDQzMDkyMDIiOiIyODE1MDA3NDY2MjkxMzgifQ%3D%3D&constructor-rendered-assets=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6MjU4OTcsIjcyMDU3NjEwNjEyNTU4MjE5IjoyNTg5NywiNzIwNTc2MTA3NDQzMDkyMDIiOjI1ODk3fQ&rendered-direct-assets=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6MTc3LCI3MjA1NzYxMDYxMjU1ODIxOSI6MTc3LCI3MjA1NzYxMDc0NDMwOTIwMiI6MTc3fQ", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t218.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WPCejI_zOoVX2Laa0IqC01CLKHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9OG0448rnvC3XH0GUxxF1ze8FNXH70corpRDFemspAO1klKgbKAZCidMns-2VQBtrlSdT9lDZeliaLmxGXOJgR5mvc0ZY80zZ0rJ2MWtkYrR0tvTIkj1gsleRyfD7ID1aQppBWyJ9-Rmjag5B22Hm0bmv0wmF81g3xCmQp7xjrguYjw7ZJ", 
		"URL=https://yandex.ru/an/count/"
		"WPCejI_zOoVX2Laa0IqC01CLKHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9OG0448rnvC3XH0GUxxF1ze8FNXH70corpRDFemspAO1klKgbKAZCidMns-2VQBtrlSdT9lDZeliaLmxGXOJgR5mvc0ZY80zZ0rJ2MWtkYrR0tvTIkj1gsleRyfD7ID1aQppBWyJ9-Rmjag5B22Hm0bmv0wmF81g3xCmQp7xjrguYjw7ZJmw3raObbIvoEUAd45xX-npVEpGbLtfCf5hOEwBe-GsxAD2gR2IJfC4R5LIfXBE02TWR485FciJ9R0Wvbiiqi6Nq2XQodeDEwhcDZn3ICk89Mrs6yaNnb8vXm0CQ27KTLq4JmEvlIr5kMDNV_6prPrtKTIvkRXefTkkX635dehCpOLAvKAfKoR1I9jEaTvUUPMfIRC2E1XnFy89ji-3QZFj8AWOVx-ELnpxDTVbmcVIcBOOug4mzAQZ"
		"9z8eiQfRkedmLFzdNlG9vqDzNxNb7LoSDA4pKA~2="
		"WUqejI_zOoVX2LbV0VqE04ERQasvmgP81BmL4D1DG631RqNGsdv05oO8S0Y8JI2y89Yy42EDasSoe5hUJYFJQgVilplafRupXZwVovqzs-_SUSEThxAPG98EOrHSfHB60YvWPq0CEeuBIDcBKgK3zbZgkX8Lqxgsk7IsBeW4CGD2MeafONAuKfeB0O8mkGAq48J55Q2580ok02q4Mza2j11iGHMWXM3hgG0j15jE1MWzL1Zh2fTk4x1n0La8W3Z9-Ph8KZJ1agGVTqvNXAmghGzX_y7hFN1D-A5emCY841u3V8M0w442q1_dymrJ3UM7cutv6LQJWtiYftRbiPBiuDQ8EKZjYVKXqU7uHCFrDDkp37YyZD_R0X1iFGMmTK3NUekSa2moiwMlQ0fRJq67cL2sS4N4B8OS0wLZcJ4wp3UIhsm44mx0M03JNPOrkJHlNbyS00yaFtn2RFzWchSW_qlp5kHxMGpf-jeLOsm_6_E4MQQNNXaQZ3"
		"F664ZlE6ECWVJMrn5-EVDc6ioNlPsJ9sLFzaZAPxCV7p1NTkBwhmqaFkAy_9RMTPqB4XznNbxhw_B6KNQVzVHFZQGHx0_yLvxRroIz9ocPm6PMNTQAD8SkzjrltuAsgvggjR9ncUd7OA9MuFiaC4zsVavfKufJ~2?stat-id=65&test-tag=29&rnd=1915648613790&confirmRatio=919077&ctime=1735901693514&banner-sizes=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2110000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6IjI4MTUwMDc0NjYyOTEzNiJ9&constructor-rendered-assets=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t219.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WPCejI_zOoVX2Laa0IqC01CLKHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9OG0448rnvC3XH0GUxxF1ze8FNXH70corpRDFemspAO1klKgbKAZCidMns-2VQBtrlSdT9lDZeliaLmxGXOJgR5mvc0ZY80zZ0rJ2MWtkYrR0tvTIkj1gsleRyfD7ID1aQppBWyJ9-Rmjag5B22Hm0bmv0wmF81g3xCmQp7xjrguYjw7ZJ_2", 
		"URL=https://yandex.ru/an/count/"
		"WPCejI_zOoVX2Laa0IqC01CLKHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9OG0448rnvC3XH0GUxxF1ze8FNXH70corpRDFemspAO1klKgbKAZCidMns-2VQBtrlSdT9lDZeliaLmxGXOJgR5mvc0ZY80zZ0rJ2MWtkYrR0tvTIkj1gsleRyfD7ID1aQppBWyJ9-Rmjag5B22Hm0bmv0wmF81g3xCmQp7xjrguYjw7ZJmw3raObbIvoEUAd45xX-npVEpGbLtfCf5hOEwBe-GsxAD2gR2IJfC4R5LIfXBE02TWR485FciJ9R0Wvbiiqi6Nq2XQodeDEwhcDZn3ICk89Mrs6yaNnb8vXm0CQ27KTLq4JmEvlIr5kMDNV_6prPrtKTIvkRXefTkkX635dehCpOLAvKAfKoR1I9jEaTvUUPMfIRC2E1XnFy89ji-3QZFj8AWOVx-ELnpxDTVbmcVIcBOOug4mzAQZ"
		"9z8eiQfRkedmLFzdNlG9vqDzNxNb7LoSDA4pKA~2="
		"WVmejI_zOoVX2Lbs0NKF0BDRR4svmgP81BmL4D1D9100uW0wWX0Sq8K90Xm2OXC8BmWcByH8u-IP3AYMjzF8jDef--yEUQdlZA7Fvt9dp_OxTzvmvwji9f2amnWLLwc4iO0Bs1aGWuvZ0rvTIVvqm9vA6nUq98DWMgXqjfx74R39ArfMas0cXokbkH0W29ChG0j1M5m1MWZ2u0hGGh2LBK0BmHPK0Le8jfuAq4AmvLI0raE5iQvmwJO16nUGXG28avol2KQRGJR2jd1ELsdhKSw47ue6Z8m8uJ705uWmGoQ8vBX3j9lznmmACJUCdCytJ3XrMqzip2FswBwCYSd1FT5gs9joQbTQ3Li7T7tNQtGEKdjYVKXqE3xHS3tDzYm37Y_ZzxO015jF0MmTqAt0YfoGB3ApfQygb6NAP4ynv1WePemUoLSsWWa7O2o0wIxBcbmFX85VdBE7ziDUlrhxO0-4JlxN0w6JxntXiUrhXxPMVlPpCSlqqj"
		"jSxXl4VL7qla7S5qLlVHtXc9Wt-oXVzcBXBYjFzdrAc1Rz684UOIzt_fjZ3kw7cD_IkgvBpi7z4FDQ7qxqCURoMHfGYPUkGNDsG3OH_1Yaix-twocW9kXzZjQEpTeMiE141W4SkEjdYLpMsjwyVAtHnjs4xiu6xZuCuWOo1JXEAgS4Ke8w~2?stat-id=65&test-tag=29&rnd=1915648613790&confirmRatio=919077&ctime=1735901693514&banner-sizes=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2110000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDc0NDMwOTIwMiI6IjI4MTUwMDc0NjYyOTEzOCJ9&constructor-rendered-assets=eyI3MjA1NzYxMDc0NDMwOTIwMiI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDc0NDMwOTIwMiI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t220.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WPCejI_zOoVX2Laa0IqC01CLKHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9OG0448rnvC3XH0GUxxF1ze8FNXH70corpRDFemspAO1klKgbKAZCidMns-2VQBtrlSdT9lDZeliaLmxGXOJgR5mvc0ZY80zZ0rJ2MWtkYrR0tvTIkj1gsleRyfD7ID1aQppBWyJ9-Rmjag5B22Hm0bmv0wmF81g3xCmQp7xjrguYjw7ZJ_3", 
		"URL=https://yandex.ru/an/count/"
		"WPCejI_zOoVX2Laa0IqC01CLKHv4emTH1i7aTxpUS8VhTx8wZbx7wtMuNcTVvcJf7Bs40NISAb8RDM9OG0448rnvC3XH0GUxxF1ze8FNXH70corpRDFemspAO1klKgbKAZCidMns-2VQBtrlSdT9lDZeliaLmxGXOJgR5mvc0ZY80zZ0rJ2MWtkYrR0tvTIkj1gsleRyfD7ID1aQppBWyJ9-Rmjag5B22Hm0bmv0wmF81g3xCmQp7xjrguYjw7ZJmw3raObbIvoEUAd45xX-npVEpGbLtfCf5hOEwBe-GsxAD2gR2IJfC4R5LIfXBE02TWR485FciJ9R0Wvbiiqi6Nq2XQodeDEwhcDZn3ICk89Mrs6yaNnb8vXm0CQ27KTLq4JmEvlIr5kMDNV_6prPrtKTIvkRXefTkkX635dehCpOLAvKAfKoR1I9jEaTvUUPMfIRC2E1XnFy89ji-3QZFj8AWOVx-ELnpxDTVbmcVIcBOOug4mzAQZ"
		"9z8eiQfRkedmLFzdNlG9vqDzNxNb7LoSDA4pKA~2="
		"WVmejI_zOoVX2Lbg0NKF08GRHai-2Me2WxZenhIepO4-Y06NYTFanW6G0PQcvhxxfkQ-UxW1sBoO_oZO0QwIWCq1u06giDQn0UW1aW7u0URtthu1c0Acc-KOe0Acc-KOe0C4i0C2w0Jg0OW5wDQ-0v05tvp20x05iBjok0MmktB01QBoxmB81Ot4NT05hhjog0Qg0wa7K0T0FtYgpFg020JG2Bg8W872W8262E08qysow0oJ0fWDmVn3mQ2IW42O4OMQI3ksqGi1EbYic1C1g1E5yeV7pgJAYnY0582WW80Wc1QGaw-x1g0MaDcvk-Rtd-p8CVWPfw257O4Q__-7JfY_5i6W6gphuS7dp8x5FQ4TZQN3Rpv4qJ-HaRvpgI3OwNsIY7BqFxWWrvr8Y2BOejMfz-sKo8O1a2A4caYG8eMQI90YXff8a2A8caYG8hcZI90YkgD8a2AxeqZLUEacCGZeaQhewT7ldPjec2FZxA2GhQw7eHx08u"
		"kJizyzyYCGrF-Yzr07002eZgORooe60BWauG7O9803u2Iu0UWaaWJm9CQlrE3__l33fG619R0bW-Hgm2K4-IZrd_Fjn38mFu0f3B0f-eFVkmOF_0oX-yEI_XC1DNNBTsZ1PjaEM1gvLG0-wTLFe4tMBzbm9M-qGSG5Tw82MiuG8QSKmcCX~2?stat-id=65&test-tag=29&rnd=1915648613790&confirmRatio=919077&ctime=1735901693514&banner-sizes=eyI3MjA1NzYxMDA4NDQ2MjIyMyI6IjE2M3gzODUiLCI3MjA1NzYxMDYxMjU1ODIxOSI6IjE2M3g0MzkiLCI3MjA1NzYxMDc0NDMwOTIwMiI6IjE2M3g0MzkifQ%3D%3D&partner-stat-id=65&confirmTime=2110000&width=163&height=1279&top-screen-block-area=191606.5&"
		"top-screen-block-area-portion=0.12053&wmode=0&banner-test-tags=eyI3MjA1NzYxMDYxMjU1ODIxOSI6IjI4MTQ4MzU2Njc1OTk1MyJ9&constructor-rendered-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MjU4OTd9&rendered-direct-assets=eyI3MjA1NzYxMDYxMjU1ODIxOSI6MTc3fQ&actual-format=23", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t221.inf", 
		"EncType=", 
		LAST);

	web_custom_request("WZeejI_zOoVX2Lci0MKH06DWV1KGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKO5TifUQuUyr7V69Gg7N4dfWCy4Y9ivP3fdpw7IExTjc0z_INKzUdm8-m_UQ1d9Zm-x1y583sFln7NpypfB1Ibx4Fi1k2R4Haz5jfDjWAyI1j1ngaXjr8XHGGmV527mO72Y0WxMttnjz239kQgmHSYe8XpC170GD-6uOV86CWySseRn4agyGMo75uFuiLktYjYAZZSz", 
		"URL=https://yandex.ru/an/tracking/"
		"WZeejI_zOoVX2Lci0MKH06DWV1KGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKO5TifUQuUyr7V69Gg7N4dfWCy4Y9ivP3fdpw7IExTjc0z_INKzUdm8-m_UQ1d9Zm-x1y583sFln7NpypfB1Ibx4Fi1k2R4Haz5jfDjWAyI1j1ngaXjr8XHGGmV527mO72Y0WxMttnjz239kQgmHSYe8XpC170GD-6uOV86CWySseRn4agyGMo75uFuiLktYjYAZZSz3MDVGsxAlK4vh1dFr8XbQi8nNxjuN0FsJ1opr71pT7tNQ_Ip37YyZD_R0XcgGB3r5C3M0TrgBn8j8_c1GVUHYLr6EKKlbVW2juGJsCBkTtpZt9nGvJsPue2kwpFafaoZifb0afifGnqebJ0M37qF6CGWKqQ0eapMDyhe9gIOSE3C2rULGX5FGOUPK8w1qlKx9ZqR5oCEm4g9OeoM6QD7yf4bjKd2MB3Zg0gQ27vdKvgxn_fa3_1u_3"
		"2DnH7iWw5OcFml50kJxuLYOVAv3lmX_jqpSSpojVuC2jlFUYQEMPZctuHPzcHTrtKiRUOmXMkCtZbCuHgZjtujq5lcoLw9RfNcnmUSjtDZ_oMXBd7CIrtYM9RN-Zn49ZkYVBQ0ifaLivlOrQJNcJDYva2G6PlAbKgbKeQD8emsVQRy0YoXu8LIgLG64FnOs_RfvL5OCq0vSZ9HekKzUHRh5WVer8Mdfe9aEyxeXhp7Zy0lock4UOdbrLI6IZ-ovRZSyX40~2?action-id=25&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t222.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("WYKejI_zOoVX2LcP0RqG0BCUTXKGq7q8iGyHzY0QFOWo22Oln4ZZv9aCg9QtqyYqsYdxxmvvgU-C5v2o5wLA1tmcGEnpo7JEdaEbTsxRC1_-HCYgqleGzX-yUDSNoG-x1y583sFVw5Ve0v79tvOj7iH-0Au9FnGD61aHmcE0hn86q76gI6tKY6411H2CSEN1u4G57EpovckZ1qdELOKjGaOLuM0cW8FOH9-M3UCbb7Y3-1bMGw9Xx6l8pRWlFSQQ", 
		"URL=https://yandex.ru/an/tracking/"
		"WYKejI_zOoVX2LcP0RqG0BCUTXKGq7q8iGyHzY0QFOWo22Oln4ZZv9aCg9QtqyYqsYdxxmvvgU-C5v2o5wLA1tmcGEnpo7JEdaEbTsxRC1_-HCYgqleGzX-yUDSNoG-x1y583sFVw5Ve0v79tvOj7iH-0Au9FnGD61aHmcE0hn86q76gI6tKY6411H2CSEN1u4G57EpovckZ1qdELOKjGaOLuM0cW8FOH9-M3UCbb7Y3-1bMGw9Xx6l8pRWlFSQQiSTAieDR8_urOTf9bwlNW5aCwQhXdcN0usNytXR8K0M2hQS0jWxeMcyHlEkB90RTHoQMBN4wugKIN-2MS09RsFsERvoR4wgy9rCSq7LzXjoKQLGs4qZIOOoAgrJ2MC05x0o8GQQCW4EPR3DBHZUHfMY29Ka_RWf5Q0fRJq67cL2EWTAnp1WTvXl9LpQ22GTWBDXnL0LD1B-pAKqzZ_N90V10yiCdnFOFfdaByhyqRq6-b-OjoETk8B"
		"FxEuiXNL-xOepjPraCwMAQOvumovwiwxgEfSqoD1XdZ36Gtd7660FfhRTpygJioHv9-MpsumFcoavS_xM1n4USbz_IkgvpGU8ZpijhVLtUEChkizxhp1anSo38Z4tbIgLIASD6aKYRrb9-7nw829LAfJ8H_67RoEdb6LepW3DoCYMYvI5v5dLBsDGDMTtvTOTCnLr7d1O8Tb2qv0i9_WN-Yf_SsIenxafdM6Ja-Hy0~2?action-id=25&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t223.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_think_time(4);

	web_custom_request("WZeejI_zOoVX2Lci0MKH06DWV1KGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKO5TifUQuUyr7V69Gg7N4dfWCy4Y9ivP3fdpw7IExTjc0z_INKzUdm8-m_UQ1d9Zm-x1y583sFln7NpypfB1Ibx4Fi1k2R4Haz5jfDjWAyI1j1ngaXjr8XHGGmV527mO72Y0WxMttnjz239kQgmHSYe8XpC170GD-6uOV86CWySseRn4agyGMo75uFuiLktYjYAZZSz_2", 
		"URL=https://yandex.ru/an/tracking/"
		"WZeejI_zOoVX2Lci0MKH06DWV1KGq7q8iGVHw46KGJ1v8KOQ9yzaGBMydKO5TifUQuUyr7V69Gg7N4dfWCy4Y9ivP3fdpw7IExTjc0z_INKzUdm8-m_UQ1d9Zm-x1y583sFln7NpypfB1Ibx4Fi1k2R4Haz5jfDjWAyI1j1ngaXjr8XHGGmV527mO72Y0WxMttnjz239kQgmHSYe8XpC170GD-6uOV86CWySseRn4agyGMo75uFuiLktYjYAZZSz3MDVGsxAlK4vh1dFr8XbQi8nNxjuN0FsJ1opr71pT7tNQ_Ip37YyZD_R0XcgGB3r5C3M0TrgBn8j8_c1GVUHYLr6EKKlbVW2juGJsCBkTtpZt9nGvJsPue2kwpFafaoZifb0afifGnqebJ0M37qF6CGWKqQ0eapMDyhe9gIOSE3C2rULGX5FGOUPK8w1qlKx9ZqR5oCEm4g9OeoM6QD7yf4bjKd2MB3Zg0gQ27vdKvgxn_fa3_1u_3"
		"2DnH7iWw5OcFml50kJxuLYOVAv3lmX_jqpSSpojVuC2jlFUYQEMPZctuHPzcHTrtKiRUOmXMkCtZbCuHgZjtujq5lcoLw9RfNcnmUSjtDZ_oMXBd7CIrtYM9RN-Zn49ZkYVBQ0ifaLivlOrQJNcJDYva2G6PlAbKgbKeQD8emsVQRy0YoXu8LIgLG64FnOs_RfvL5OCq0vSZ9HekKzUHRh5WVer8Mdfe9aEyxeXhp7Zy0lock4UOdbrLI6IZ-ovRZSyX40~2?action-id=26&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t224.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("WYKejI_zOoVX2LcP0RqG0BCUTXKGq7q8iGyHzY0QFOWo22Oln4ZZv9aCg9QtqyYqsYdxxmvvgU-C5v2o5wLA1tmcGEnpo7JEdaEbTsxRC1_-HCYgqleGzX-yUDSNoG-x1y583sFVw5Ve0v79tvOj7iH-0Au9FnGD61aHmcE0hn86q76gI6tKY6411H2CSEN1u4G57EpovckZ1qdELOKjGaOLuM0cW8FOH9-M3UCbb7Y3-1bMGw9Xx6l8pRWlFSQQ_2", 
		"URL=https://yandex.ru/an/tracking/"
		"WYKejI_zOoVX2LcP0RqG0BCUTXKGq7q8iGyHzY0QFOWo22Oln4ZZv9aCg9QtqyYqsYdxxmvvgU-C5v2o5wLA1tmcGEnpo7JEdaEbTsxRC1_-HCYgqleGzX-yUDSNoG-x1y583sFVw5Ve0v79tvOj7iH-0Au9FnGD61aHmcE0hn86q76gI6tKY6411H2CSEN1u4G57EpovckZ1qdELOKjGaOLuM0cW8FOH9-M3UCbb7Y3-1bMGw9Xx6l8pRWlFSQQiSTAieDR8_urOTf9bwlNW5aCwQhXdcN0usNytXR8K0M2hQS0jWxeMcyHlEkB90RTHoQMBN4wugKIN-2MS09RsFsERvoR4wgy9rCSq7LzXjoKQLGs4qZIOOoAgrJ2MC05x0o8GQQCW4EPR3DBHZUHfMY29Ka_RWf5Q0fRJq67cL2EWTAnp1WTvXl9LpQ22GTWBDXnL0LD1B-pAKqzZ_N90V10yiCdnFOFfdaByhyqRq6-b-OjoETk8B"
		"FxEuiXNL-xOepjPraCwMAQOvumovwiwxgEfSqoD1XdZ36Gtd7660FfhRTpygJioHv9-MpsumFcoavS_xM1n4USbz_IkgvpGU8ZpijhVLtUEChkizxhp1anSo38Z4tbIgLIASD6aKYRrb9-7nw829LAfJ8H_67RoEdb6LepW3DoCYMYvI5v5dLBsDGDMTtvTOTCnLr7d1O8Tb2qv0i9_WN-Yf_SsIenxafdM6Ja-Hy0~2?action-id=26&viewability-undetermined=0", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t225.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	lr_think_time(4);

	web_custom_request("click_29", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t226.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=avatars.mds.yandex.net-!1!0;yandex.ru-!12!3730;an.yandex.ru-!1!320;mail.yandex.ru-!1!315;mc.yandex.ru-!1!0;,t=135964.2,-cdn=mskstoredata/cts=1735901706155/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	lr_think_time(14);

	web_websocket_connect("ID=5", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB5", 
		"OnMessageCB=OnMessageCB5", 
		"OnErrorCB=OnErrorCB5", 
		"OnCloseCB=OnCloseCB5", 
		LAST);

	/*Connection ID 5 received buffer WebSocketReceive5*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_35", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get_user_activity", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t228.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get_user_activity\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901720456,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("click_30", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t229.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=mail.yandex.ru-!1!523;,t=150962.4,-cdn=mskstoredata/cts=1735901721153/*", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	lr_think_time(46);

	web_websocket_connect("ID=6", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB6", 
		"OnMessageCB=OnMessageCB6", 
		"OnErrorCB=OnErrorCB6", 
		"OnCloseCB=OnCloseCB6", 
		LAST);

	/*Connection ID 6 received buffer WebSocketReceive6*/

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("liza1_36", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=get_user_activity", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t231.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"get_user_activity\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901767584,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;"
		"1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;"
		"924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,"
		"5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_add_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	lr_think_time(13);

	web_custom_request("click_31", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t232.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12"
		";1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=mail.yandex.ru-!1!523;,t=210960.7,-cdn=mskstoredata/cts=1735901781152/*", 
		LAST);

	lr_end_transaction("3_sendMessage",LR_AUTO);

	lr_think_time(16);

	lr_start_transaction("4_logOut");

	web_custom_request("1_32", 
		"URL=https://mc.yandex.ru/watch/92550/1?page-url=btn%3A%2F%2Fmail.yandex.ru%2F%3Fp%3D%253FAAA2AAA2%26c%3D4291026205&page-ref=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&cnt-class=1&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901584_30b20b6a9149af970a4f1d13cb9367291c9ab81b262615a8b47e14b3523f634f&browser-info="
		"ar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1074219354469%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135637%3Aet%3A1735901798%3Ac%3A1%3Arn%3A177120303%3Arqn%3A9%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3App%3A3629563401%3Apu%3A38685305281735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3Ad9cbf386f9f7c432e0c235ea131acb69-1cc4db1a3d7b1"
		"837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901798&t=mc(p-7-h-1-g-1)clc(0-0-0)rqnt(9)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(566336)dss(1)fip(1)ti(0)&force-urlencoded=1&site-info="
		"%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t233.inf", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("liza1_37", 
		"URL=https://mail.yandex.ru/web-api/models/liza1?_m=do-mail-reset-recent-counter", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t234.inf", 
		"Mode=HTML", 
		"EncType=application/json; encoding=utf-8", 
		"Body={\"models\":[{\"name\":\"do-mail-reset-recent-counter\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"Vu05nPdFShhOH4Hy5umCi7F/mlU=!m5i2f04p!wP2kNmwKS9YaZ7w3dLL35ER4VX4=!3\",\"_uid\":\"2064807418\",\"_locale\":\"ru\",\"_timestamp\":1735901797697,\"_product\":\"RUS\",\"_connection_id\":\"LIZA-12390077-1735901572153\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;"
		"1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;"
		"877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76"
		";1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_websocket_connect("ID=7", 
		"URI=wss://push.yandex.ru/v1/subscribe/?uid=2064807418&service=mail%2Ccalendar%2Cdisk-json&client=u2709&session=LIZA-12390077-1735901572153", 
		"Origin=https://mail.yandex.ru", 
		"OnOpenCB=OnOpenCB7", 
		"OnMessageCB=OnMessageCB7", 
		"OnErrorCB=OnErrorCB7", 
		"OnCloseCB=OnCloseCB7", 
		LAST);

	/*Connection ID 7 received buffer WebSocketReceive7*/

	web_revert_auto_header("Origin");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("PreferAnonymous", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("user-id", 
		"URL=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/metrika/tag.js", "Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("3_7", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t237.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"7762e233-9212-4bf7-92fe-bb6b0c2792cb\",\"onlineIdTicket\":\"t=GwAmAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAELPqwQNxs/57rbUIhaGLtLHwACG/hjh8DnQsX93wmv7YDY9u3tYT2p0wlwStA17vauuyvqO7+NSej9tQpMvFkixXp8TjTMlxxmcQaynrDLN+qP+zBGy7Elr/"
		"vRCSCYBBwj0juzXBD87J1DGVc7IFfgU4rhLdApSuicUtwd68gj5KsEvLTOmFNhCa1+hxOj8ky5QuPUlHQvtb7VitT9hzxne4fb4S5vtoTOhGYO2N7aTQBC2OU5kkiKMuJJFI9RFz6X6lXubhkU93aHUeevVSvZNogv01M7QhhTGUZ95tf/FMXxhUUpDa7FYB+sOzNne5r3Vb3NqiLZK/H/pdy+rc4110ix4B&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4602.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":"
		"\"131.0.2903.112 (Official build) \"},\"client\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\""
		":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1\",\"ip\":null},\"referrer\":{\"uri\":\"https://mail.yandex.ru/\",\"ip\":null},\"type\":\"frame\",\"forceServiceDetermination\":false,\"correlationId\":\"25553507-06b4-4bb2-9bda-510441863f87\",\"synchronous\""
		":false}", 
		EXTRARES, 
		"Url=https://yastatic.net/s3/home/fonts/ys/1/text-regular.woff2", "Referer=https://yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/s3/home/fonts/ys/1/text-light.woff2", "Referer=https://yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/s3/home/fonts/ys/1/text-bold.woff2", "Referer=https://yandex.ru/", ENDITEM, 
		"Url=https://yastatic.net/s3/home/fonts/ys/1/text-medium.woff2", "Referer=https://yandex.ru/", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_custom_request("1_33", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135638%3Aet%3A1735901799%3Ac%3A1%3Arn%3A984094281%3Arqn%3A9%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901799&t=gdpr(13-0)"
		"mc(p-7-h-1-g-1)clc(0-0-0)rqnt(9)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(1)ti(0)&force-urlencoded=1&site-info=%5B%7B%22Yandex%20header%20PRO%22%3A%7B%22Login%20header.Right%20part%22%3A%7B%22Menu%20behind%20login%22%3A%22Click%22%7D%7D%7D%2C%7B%22version%22%3A%22191.1.0%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t238.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Origin", 
		"https://yandex.ru");

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("table=user_id", 
		"URL=https://yandex.ru/clck/click/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/slots=1111484,0,72/puid=2064807418/icookie=9903672511735901413/table=user_id", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t239.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/events="
		"%5B%7B%22event%22%3A%22show%22%2C%22tree%22%3A%7B%22id%22%3A%221xp90%22%2C%22name%22%3A%22%24page%22%2C%22attrs%22%3A%7B%22schema-ver%22%3A0%2C%22service%22%3A%22user-id%22%2C%22page%22%3A%22app%22%2C%22ui%22%3A%22desktop%22%7D%2C%22children%22%3A%5B%7B%22id%22%3A%221xp91%22%2C%22name%22%3A%22%24auth%22%2C%22children%22%3A%5B%7B%22id%22%3A%221xp92%22%2C%22name%22%3A%22%24header%22%2C%22children%22%3A%5B%7B%22id%22%3A%221xp93%22%2C%22name%22%3A%22close%22%2C%22attrs%22%3A%7B%22type%22%3A%22button%2"
		"2%7D%7D%2C%7B%22id%22%3A%221xp94%22%2C%22name%22%3A%22avatar%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%5D%7D%2C%7B%22id%22%3A%221xp95%22%2C%22name%22%3A%22organizations-menu%22%7D%2C%7B%22id%22%3A%221xp96%22%2C%22name%22%3A%22%24menu%22%2C%22children%22%3A%5B%7B%22id%22%3A%221xp97%22%2C%22name%22%3A%22get-premium360%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%2C%7B%22id%22%3A%221xp98%22%2C%22name%22%3A%22disk%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%2C%7B%22id%22%3A%22"
		"1xp99%22%2C%22name%22%3A%22information%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%2C%7B%22id%22%3A%221xp9a%22%2C%22name%22%3A%22help%22%2C%22attrs%22%3A%7B%22type%22%3A%22button%22%7D%7D%5D%7D%2C%7B%22id%22%3A%221xp9b%22%2C%22name%22%3A%22%24user-list%22%2C%22children%22%3A%5B%7B%22id%22%3A%221xp9c%22%2C%22name%22%3A%22add-account%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%2C%7B%22id%22%3A%221xp9d%22%2C%22name%22%3A%22show-logout-page%22%2C%22attrs%22%3A%7B%22type%22%3A%22button%"
		"22%7D%7D%5D%7D%5D%7D%5D%7D%2C%22cts%22%3A1735901798843%2C%22trigger-event-id%22%3Anull%2C%22trigger-event-trusted%22%3Afalse%7D%5D/*//", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("click_32", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t240.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2854/slots=1111484,0,72/vars=-msg=ResizeObserver%20loop%20completed%20with%20undelivered%20notifications.,-externalCustom=message~1,-project=user-id,-platform=desktop,-referrer="
		"https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1,-additional=%7B%22consumer%22%3A%22yandex360%22%7D,-ua=Mozilla%2F5.0%20(Windows%20NT%2010.0%3B%20Win64%3B%20x64)%20AppleWebKit%2F537.36%20(KHTML%2C%20like%20Gecko)"
		"%20Chrome%2F131.0.0.0%20Safari%2F537.36%20Edg%2F131.0.0.0,-silent=no,-ts=1735901798850,-init-ts=1735901797962/cts=1735901798850/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=2616.2876.1928,207=353.1,-cdn=unknown/cts=1735901798860/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/"
		"path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=3036,207=1154.1,-cdn=unknown/cts=1735901798860/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.1033/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,2129=1735901797692,1036=1,1037=0,1038=0,1039=172,1040=131,1040.906=303,1310.2084=4,1310.2085=994,1310.1309=0,1310.1007="
		"994,3140=8,3141=20,2116=1,2114=1,2131=1167,2123=1167,2770=1167,2769=177,2113=1,2112=1,2111=1,2117=2,2120=304,2119=173,1484=1,2437=2771,2870=4g,rtt=50,dwl=4.75,-cdn=unknown/cts=1735901798860/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.2877/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=userid_ready,207.2154=10.3,207.1428=1172,2877=1161.7,2924=yandex360,2925=0,689.2322"
		"=1140.9,-cdn=unknown/cts=1735901798864/*", 
		LAST);

	web_custom_request("click_33", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t241.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=1926.2793,207=1205,-cdn=unknown/cts=1735901798914/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,"
		"1701=1926.2794,207=1205,-cdn=unknown/cts=1735901798914/*", 
		LAST);

	web_custom_request("table=user_id_2", 
		"URL=https://yandex.ru/clck/click/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/slots=1111484,0,72/puid=2064807418/icookie=9903672511735901413/table=user_id", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t242.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/events=%5B%7B%22event%22%3A%22visibility%22%2C%22type%22%3A%22hide%22%2C%22block-id%22%3A%221xp9c%22%2C%22cts%22%3A1735901798862%2C%22trigger-event-id%22%3Anull%2C%22trigger-event-trusted%22%3Afalse%7D%5D/*//\r\n/events=%5B%7B%22event%22%3A%22visibility%22%2C%22type%22%3A%22hide%22%2C%22block-id%22%3A%221xp9e%22%2C%22cts%22%3A1735901798865%2C%22trigger-event-id%22%3Anull%2C%22trigger-event-trusted%22%3Afalse%7D%5D/*//\r\n/events="
		"%5B%7B%22event%22%3A%22append%22%2C%22tree%22%3A%7B%22id%22%3A%221xp9f%22%2C%22name%22%3A%22%24subresult%22%2C%22attrs%22%3A%7B%22schema-ver%22%3A0%2C%22ui%22%3A%22desktop%22%2C%22parent-id%22%3A%221xp9b%22%2C%22trigger-event-trusted%22%3Afalse%2C%22main-search%22%3Afalse%7D%2C%22children%22%3A%5B%7B%22id%22%3A%221xp9e%22%2C%22name%22%3A%22add-account%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%2C%7B%22id%22%3A%221xp9g%22%2C%22name%22%3A%22add-account%22%2C%22attrs%22%3A%7B%22type%22%3A%22"
		"link%22%7D%7D%5D%7D%2C%22cts%22%3A1735901798865%2C%22trigger-event-id%22%3Anull%2C%22trigger-event-trusted%22%3Afalse%7D%5D/*//", 
		LAST);

	web_custom_request("click_34", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t243.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=1724,207=1524.6,-cdn=unknown/cts=1735901799216/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.2892/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,2116=1.6,2114=1.6,2886="
		"62667,2124=1524.4,2131=1167.6,2123=1167.4,2770=1167.3,2113=1.6,2112=1.6,2136=0,2887=23239,2888=navigation,2111=1.6,2889=navigation,2126=0,2125=1524.5,2890=http%2F1.1,1385=0,2110=0,2109=0,2117=2.2,2120=303.7,2119=173.3,2115=1.6,2322=0,2323=23539,76=navigate,2128=0,2127=0,2137=0,2437=2771,2870=4g,rtt=50,dwl=4.75,-cdn=unknown/cts=1735901799217/*\r\n/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project="
		"user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=largest-loading-elem-paint,207=1205,-cdn=unknown/cts=1735901799217/*", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_url("784657_4", 
		"URL=https://mc.yandex.ru/watch/784657?wmode=7&page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pv%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A0%3Als%3A1019780636070%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135641%3Aet%3A1735901801%3Ac%3A1%3Arn%3A295533295%3Arqn%3A1%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Afp%3A1205%3Awv%3A2%3Ads%3A0%2C0%2C171%2C131%2C2%2C0%2C%2C863%2C1%2C1524%2C1525%2C0%2C1167%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Apu%3A3785792127"
		"1735901419877300485%3Azzlc%3Ana%3Afip%3Af6ff0621820b3188969a4cc11b238801-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901801%3At%3AUser-ID&t=gdpr(13-0)mc(p-2-up-2)clc(0-0-0)rqnt(1)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)fip(1)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t244.inf", 
		"Mode=HTML", 
		LAST);

	web_url("40081755_3", 
		"URL=https://mc.yandex.ru/watch/40081755?wmode=7&page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&page-ref=https%3A%2F%2Fmail.yandex.ru%2F&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&browser-info="
		"pv%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A466305747413%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135641%3Aet%3A1735901801%3Ac%3A1%3Arn%3A755621018%3Arqn%3A1%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Afp%3A1205%3Awv%3A2%3Ads%3A0%2C0%2C171%2C131%2C2%2C0%2C%2C863%2C1%2C1524%2C1525%2C0%2C1167%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Apu%3A37857921271"
		"735901419877300485%3Azzlc%3Ana%3Afip%3Af6ff0621820b3188969a4cc11b238801-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901801%3At%3AUser-ID&t=gdpr(13-0)mc(p-2-up-2)clc(0-0-0)rqnt(1)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)fip(1)ti(1)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t245.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=40081755?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fpassport%3Forigin%3Dmail360%26mode%3Dlogout%26yu%3D9903672511735901413%26retpath%3Dhttps%253A%252F%252Fmail.yandex.ru%252F%253Fncrnd%253D77275&page-ref="
		"https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_10a8cb3cb12b933966bc486c8564df1399c9b3dad8946aa013c24f348cc5bf56&browser-info="
		"ite%3A1%3Aln%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A466305747413%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135643%3Aet%3A1735901804%3Ac%3A1%3Arn%3A34727974%3Arqn%3A5%3Au%3A1735901419877300485%3Aw%3A320x328%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3App%3A3629563401%3Apu%3A37857921271735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600"
		"%3Afip%3Af6ff0621820b3188969a4cc11b238801-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901804%3At%3A%D0%92%D1%8B%D0%B9%D1%82%D0%B8&t=gdpr(13-0)mc(p-6-up-2)clc(0-0-0)rqnt(5)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)dss(1)fid(60)fip(1)ti(1)", "Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("1_34", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_48c83206e3db6c4704b60a7d6ca32f732ad67a73e4880f4aa5bafc858850983d&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1019780636070%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135641%3Aet%3A1735901801%3Ac%3A1%3Arn%3A939593570%3Arqn%3A2%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901801&t=gdpr(13-0)mc(p-2-up-2)clc(0-0-0)rqnt(2)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)ti(0)&force-urlencoded=1&site-info=%7B%22__ymu%22%3A%7B%22plus%22%3A0%2C%22bank%22%3A0%2C%22pro%22%3A0%2C%22primaryPhone%22%3A1%2C%22split%22%3A0%2C%22webauthn%22%3A0%2C%22avatar%22%3A1%2C%22child%22%3A0%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t246.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_35", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_10a8cb3cb12b933966bc486c8564df1399c9b3dad8946aa013c24f348cc5bf56&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A466305747413%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135641%3Aet%3A1735901801%3Ac%3A1%3Arn%3A834629005%3Arqn%3A2%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901801&t=gdpr(13-0)mc(p-2-up-2)clc(0-0-0)rqnt(2)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)dss(2)ti(0)&force-urlencoded=1&site-info=%7B%22__ymu%22%3A%7B%22plus%22%3A0%2C%22bank%22%3A0%2C%22pro%22%3A0%2C%22primaryPhone%22%3A1%2C%22split%22%3A0%2C%22webauthn%22%3A0%2C%22avatar%22%3A1%2C%22child%22%3A0%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t247.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("PreferAnonymous", 
		"1");

	web_custom_request("click_35", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t248.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=2795,207=1168.6,2796.2797=s-271-352,689.2322=1168.6,-cdn=unknown/cts=1735901801876/*", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_36", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_48c83206e3db6c4704b60a7d6ca32f732ad67a73e4880f4aa5bafc858850983d&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1019780636070%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135642%3Aet%3A1735901802%3Ac%3A1%3Arn%3A386664966%3Arqn%3A4%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901802&t=gdpr(13-0)mc(p-3-up-2)clc(0-0-0)rqnt(4)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)dss(1)ti(0)&force-urlencoded=1&site-info=%7B%22user-id%22%3A%7B%22%24page.%24auth.%24user-list.show-logout-page%22%3A%7B%22additional%22%3A%7B%22type%22%3A%22button%22%2C%22project%22%3A%22yandex360%22%2C%22platform%22%3A%22desktop%22%7D%7D%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t249.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_37", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fyandex.ru%2F%3Fp%3DA1AA3AAAAA%26c%3D739074043&page-ref=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_48c83206e3db6c4704b60a7d6ca32f732ad67a73e4880f4aa5bafc858850983d&browser-info="
		"ar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1019780636070%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135642%3Aet%3A1735901802%3Ac%3A1%3Arn%3A842920410%3Arqn%3A3%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3App%3A3629563401%3Apu%3A37857921271735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3"
		"Af6ff0621820b3188969a4cc11b238801-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901802%3At%3AUser-ID&t=gdpr(13-0)mc(p-2-up-2)clc(0-0-0)rqnt(3)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(66304)dss"
		"(1)fip(1)ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t250.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_38", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_10a8cb3cb12b933966bc486c8564df1399c9b3dad8946aa013c24f348cc5bf56&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A466305747413%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135642%3Aet%3A1735901802%3Ac%3A1%3Arn%3A793258069%3Arqn%3A3%3Au%3A1735901419877300485%3Aw%3A320x499%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901802&t=gdpr(13-0)mc(p-2-up-2)clc(0-0-0)rqnt(3)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)dss(1)ti(0)&force-urlencoded=1&site-info=%7B%22user-id%22%3A%7B%22%24page.%24auth.%24user-list.show-logout-page%22%3A%7B%22additional%22%3A%7B%22type%22%3A%22button%22%2C%22project%22%3A%22yandex360%22%2C%22platform%22%3A%22desktop%22%7D%7D%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t251.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("click_36", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t252.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.2877/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=first-input,207.2154=4808,207.1428=4808.6,2877=0.6,-cdn=unknown/cts=1735901802500/*", 
		LAST);

	web_custom_request("table=user_id_3", 
		"URL=https://yandex.ru/clck/click/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/slots=1111484,0,72/puid=2064807418/icookie=9903672511735901413/table=user_id", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t253.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/events=%5B%7B%22event%22%3A%22click%22%2C%22service%22%3A%22user-id%22%2C%22event-id%22%3A%22m5gn434w0%22%2C%22id%22%3A%221xp9d%22%2C%22cts%22%3A1735901802464%7D%5D/*//\r\n/events=%5B%7B%22event%22%3A%22visibility%22%2C%22type%22%3A%22hide%22%2C%22block-id%22%3A%221xp91%22%2C%22cts%22%3A1735901802468%2C%22trigger-event-id%22%3A%22m5gn434w0%22%2C%22trigger-event-trusted%22%3Atrue%7D%5D/*//\r\n/events="
		"%5B%7B%22event%22%3A%22append%22%2C%22tree%22%3A%7B%22id%22%3A%221xp9i%22%2C%22name%22%3A%22%24subresult%22%2C%22attrs%22%3A%7B%22schema-ver%22%3A0%2C%22ui%22%3A%22desktop%22%2C%22parent-id%22%3A%221xp90%22%2C%22trigger-event-id%22%3A%22m5gn434w0%22%2C%22trigger-event-trusted%22%3Atrue%2C%22main-search%22%3Afalse%7D%2C%22children%22%3A%5B%7B%22id%22%3A%221xp9h%22%2C%22name%22%3A%22%24logout%22%2C%22children%22%3A%5B%7B%22id%22%3A%221xp9j%22%2C%22name%22%3A%22%24header%22%2C%22children%22%3A%5B%7B%"
		"22id%22%3A%221xp9k%22%2C%22name%22%3A%22back%22%2C%22attrs%22%3A%7B%22type%22%3A%22button%22%7D%7D%2C%7B%22id%22%3A%221xp9l%22%2C%22name%22%3A%22close%22%2C%22attrs%22%3A%7B%22type%22%3A%22button%22%7D%7D%5D%7D%2C%7B%22id%22%3A%221xp9m%22%2C%22name%22%3A%22%24user-list%22%2C%22children%22%3A%5B%7B%22id%22%3A%221xp9n%22%2C%22name%22%3A%22user-item-default%22%7D%2C%7B%22id%22%3A%221xp9o%22%2C%22name%22%3A%22add-account%22%2C%22attrs%22%3A%7B%22type%22%3A%22link%22%7D%7D%5D%7D%2C%7B%22id%22%3A%221xp9"
		"p%22%2C%22name%22%3A%22logout%22%2C%22attrs%22%3A%7B%22type%22%3A%22button%22%7D%7D%5D%7D%5D%7D%2C%22cts%22%3A1735901802474%2C%22trigger-event-id%22%3A%22m5gn434w0%22%2C%22trigger-event-trusted%22%3Afalse%7D%5D/*//", 
		LAST);

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_custom_request("1_39", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fmail.yandex.ru%2F%3Fuid%3D2064807418%23tabs%2Frelevant&charset=utf-8&ut=noindex&uah=chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&"
		"hittoken=1735901581_07db3b714427c5157be4d7d6ee59bd5ce794c2ca253dc4b354bf61c67fbd9ef0&browser-info=pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A200798953576%3Ahid%3A752493145%3Az%3A180%3Ai%3A20250103135643%3Aet%3A1735901803%3Ac%3A1%3Arn%3A220030004%3Arqn%3A10%3Au%3A1735901419877300485%3Aw%3A1241x1281%3As%3A2560x1440x24%3Ask%3A1%3Aco%3A0%3Acpf%3A1%3Aeu%3A0%3Ans%3A1735901570190%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901803&t=gdpr(13-0"
		")mc(p-8-h-1-g-1)clc(0-0-0)rqnt(10)aw(1)rcm(0)yu(9903672511735901413)cdl(na)eco(100104)dss(1)ti(0)&force-urlencoded=1&site-info=%5B%7B%22Yandex%20header%20PRO%22%3A%7B%22Login%20header.Right%20part%22%3A%7B%22Menu%20behind%20login%22%3A%7B%22No%20new%20messages%22%3A%7B%22fake-logout%22%3A%22Click%22%7D%7D%7D%7D%7D%2C%7B%22version%22%3A%22191.1.0%22%7D%5D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t254.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Origin", 
		"https://yandex.ru");

	web_custom_request("1_40", 
		"URL=https://mc.yandex.ru/watch/40081755/1?page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_10a8cb3cb12b933966bc486c8564df1399c9b3dad8946aa013c24f348cc5bf56&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A1%3Adp%3A1%3Als%3A466305747413%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135643%3Aet%3A1735901804%3Ac%3A1%3Arn%3A7695598%3Arqn%3A4%3Au%3A1735901419877300485%3Aw%3A320x328%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901804&t=gdpr(13-0)mc(p-4-up-2)clc(0-0-0)rqnt(4)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)dss(1)ti(0)&force-urlencoded=1&site-info=%7B%22user-id%22%3A%7B%22%24page.%24logout.logout%22%3A%7B%22additional%22%3A%7B%22type%22%3A%22button%22%2C%22project%22%3A%22yandex360%22%2C%22platform%22%3A%22desktop%22%7D%7D%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t255.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_41", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_48c83206e3db6c4704b60a7d6ca32f732ad67a73e4880f4aa5bafc858850983d&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1019780636070%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135643%3Aet%3A1735901804%3Ac%3A1%3Arn%3A452398813%3Arqn%3A5%3Au%3A1735901419877300485%3Aw%3A320x328%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901804&t=gdpr(13-0)mc(p-5-up-2)clc(0-0-0)rqnt(5)aw(1)rcm(1)yu"
		"(9903672511735901413)cdl(na)eco(66304)dss(1)ti(0)&force-urlencoded=1&site-info=%7B%22user-id%22%3A%7B%22%24page.%24logout.logout%22%3A%7B%22additional%22%3A%7B%22type%22%3A%22button%22%2C%22project%22%3A%22yandex360%22%2C%22platform%22%3A%22desktop%22%7D%7D%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t256.inf", 
		"EncType=", 
		LAST);

	web_custom_request("1_42", 
		"URL=https://mc.yandex.ru/watch/784657/1?page-url=btn%3A%2F%2Fyandex.ru%2F%3Fp%3D%253BA3AAAAA%26h%3D1018408975%26c%3D739074043&page-ref=https%3A%2F%2Fyandex.ru%2Fuser-id%3Fretpath%3Dhttps%25253A%25252F%25252Fmail.yandex.ru%26colorScheme%3Dlight%26l10n%3Dru%26project%3Dyandex360%26env%3Dprod%26dir%3Dltr%26from%3DMail%26uid%3D2064807418%26yandex360.tuningOrigin%3Dhttps%253A%252F%252F360.yandex.ru%26yandex360.customSupportClick%3D1&charset=utf-8&ut=noindex&uah="
		"chu%0A%22Microsoft%20Edge%22%3Bv%3D%22131%22%2C%22Chromium%22%3Bv%3D%22131%22%2C%22Not_A%20Brand%22%3Bv%3D%2224%22%0Acha%0Ax86%0Achb%0A64%0Achf%0A131.0.2903.112%0Achl%0A%22Microsoft%20Edge%22%3Bv%3D%22131.0.2903.112%22%2C%22Chromium%22%3Bv%3D%22131.0.6778.205%22%2C%22Not_A%20Brand%22%3Bv%3D%2224.0.0.0%22%0Achm%0A%3F0%0Achp%0AWindows%0Achv%0A15.0.0&hittoken=1735901801_48c83206e3db6c4704b60a7d6ca32f732ad67a73e4880f4aa5bafc858850983d&browser-info="
		"ar%3A1%3Avf%3A14pwap7gbnncs44tf8xglmzmdcdb%3Afu%3A3%3Aen%3Autf-8%3Ala%3Aru%3Av%3A1551%3Acn%3A2%3Adp%3A1%3Als%3A1019780636070%3Ahid%3A997275602%3Aphid%3A752493145%3Az%3A180%3Ai%3A20250103135643%3Aet%3A1735901804%3Ac%3A1%3Arn%3A754073130%3Arqn%3A7%3Au%3A1735901419877300485%3Aw%3A320x328%3As%3A2560x1440x24%3Ask%3A1%3Aifr%3A1%3Awv%3A2%3Aco%3A0%3Acpf%3A1%3Antf%3A1%3Aeu%3A0%3Ans%3A1735901797692%3Aadb%3A2%3App%3A3629563401%3Apu%3A37857921271735901419877300485%3Azzlc%3Ana%3Acc%3A550455401735901600%3Afip%3"
		"Af6ff0621820b3188969a4cc11b238801-1cc4db1a3d7b1837d6538ca6cabed338-a81f3b9bcdd80a361c14af38dc09b309-7950ec0297c12322859860922e071362-9adf115a84ff26f41e9d720bd31c1ffc-302b69dcd760e8f8bb21f7ed039faf50-f029f500589792a0d5a0f159f332406e-e79b403913638ea670ff22954470651a-a81f3b9bcdd80a361c14af38dc09b309-36b0156d67e224248dccbff13c841137-7a502a49c3fd5ac8d1b845c2031ede1c%3Arqnl%3A1%3Ast%3A1735901804%3At%3AUser-ID&t=gdpr(13-0)mc(p-6-up-2)clc(0-0-0)rqnt(7)aw(1)rcm(1)yu(9903672511735901413)cdl(na)eco(66304)dss"
		"(1)fip(1)ti(0)&force-urlencoded=1&site-info=%7B%22__ym%22%3A%7B%22ite%22%3A1%7D%7D", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t257.inf", 
		"EncType=", 
		LAST);

	web_add_auto_header("Origin", 
		"https://mail.yandex.ru");

	web_add_auto_header("PreferAnonymous", 
		"1");

	web_custom_request("click_37", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.yandex.ru/", 
		"Snapshot=t258.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=LIZA-12390077-1735901572153/path=690.2096.2877/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,"
		"12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=inp,207.2154=107705.8,207.1428=107793.8,2877=88,entriesCount=3,interactionsCount=1,name=click,js=45.700000047683716,processTime=45.5,target=a.Button2.Button2_type_link.Button2_view_action.Button2_size_m.ComposeButton-m__containerContent--sPX6v,-cdn=mskstoredata/cts="
		"1735901803807/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.361/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,"
		"99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,d=mc.yandex.ru-!3!0;mail.yandex.ru-!1!526;yandex.ru-!1!0;,t=233616.2,-cdn=mskstoredata/cts=1735901803807/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.4004/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;"
		"1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,"
		"-platform=desktop,-version=191.1.0,s=0.233097,target=,-cdn=mskstoredata/cts=1735901803807/*\r\n/reqid=LIZA-12390077-1735901572153/path=690.2096.207/slots=539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603"
		",0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5/vars=143=28.176.2048,287=213,-project=liza,-platform=desktop,-version=191.1.0,143.2129=1735901570190,1701=largest-contentful-paint,207=15920,-cdn=mskstoredata/cts=1735901803807/*", 
		LAST);

	web_add_auto_header("Origin", 
		"https://yandex.ru");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("click_38", 
		"URL=https://yandex.ru/clck/click", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t259.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.361/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,d=yandex.ru-!2!47078;yastatic.net-css!1!10729;mc.yandex.ru-js!1!91394;avatars.mds.yandex.net-!1!0;yastatic.net-js!3!222439;mc.yandex.ru-html!1!0;yastatic.net-!4!179220;mc.yandex.ru-!7!0;mc.yandex.md-!1!0;,t=6115.9,-cdn=unknown/cts=1735901803808/*\r\n/reqid="
		"1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/path=690.2096.207/slots=1111484,0,72/vars=rum_id=ru.user-id,-project=user-id,-env=production,-platform=desktop,143.2129=1735901797692,1701=largest-contentful-paint,207=1205,-cdn=unknown/cts=1735901803808/*", 
		LAST);

	web_custom_request("table=user_id_4", 
		"URL=https://yandex.ru/clck/click/reqid=1735901797878608-15476405479886952973-balancer-l7leveler-kubr-yp-klg-131-BAL/slots=1111484,0,72/puid=2064807418/icookie=9903672511735901413/table=user_id", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://yandex.ru/user-id?retpath=https%253A%252F%252Fmail.yandex.ru&colorScheme=light&l10n=ru&project=yandex360&env=prod&dir=ltr&from=Mail&uid=2064807418&yandex360.tuningOrigin=https%3A%2F%2F360.yandex.ru&yandex360.customSupportClick=1", 
		"Snapshot=t260.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=/events=%5B%7B%22event%22%3A%22click%22%2C%22service%22%3A%22user-id%22%2C%22event-id%22%3A%22m5gn445z1%22%2C%22id%22%3A%221xp9p%22%2C%22cts%22%3A1735901803799%7D%5D/*//", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("PreferAnonymous");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-site");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-prefers-color-scheme", 
		"dark");

	web_url("passport", 
		"URL=https://passport.yandex.ru/passport?origin=mail360&mode=logout&yu=9903672511735901413&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://yandex.ru/", 
		"Snapshot=t261.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Origin", 
		"https://sso.passport.yandex.ru");

	web_submit_data("sync_2", 
		"Action=https://sso.ya.ru/sync?uuid=037bbae1-f3d2-4e7f-8f4e-c99865120144&finish=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://sso.passport.yandex.ru/", 
		"Snapshot=t262.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=goal", "Value=https://ya.ru/", ENDITEM, 
		"Name=container", "Value="
		"1735901864.10151408.U3cjipVEtjocWtIY.lhfknm2eqx-kfvAc2UcrgkK2bj-4d6hxlAVq8Cxi4qLq3kT3EZ1heZCCDrkSuMfdClAlj-DA719l0GhDHEdVzQIaNjkyFpz9_7JJq-Jt9TcJkoPFZc8cMKkhL1GlusPBjRFLjWxZ38tfrTWH9mpD0vwYvGWvj5ilPodQRaGVc6eQZmCvQfpp4hstlYV0SFTW5YI2sbNdZG9ie6OMc8Mw6iOtZT9t5D-aKMJiUj2sK-qb28pdPzvv960IvdWwY9WD-nITsBmrL_HDwkCMDVuoN_U9Gj_r1kIGb3Rar-zsBmqKJI-Qd2G-jOQN750hSN8AL7NDByh57R7rDuyfhT8DFUdknID9VTAYj6IHsN-GlgiWsLeh6B80HO8BF9kewFdTYOaI3f9B5o7pFNZHdjoNdOhfD9GSvyi0YVcmTpEcQllDVsUCYcwu0cfGq944WPChOYN8pio0I0W9UmnuP"
		"RjgkncMkUBVYHKehB4XSi5ex1Rll5JpuxMJ7pZ06fBDoIyNmVpqDsI5nLVmEzMzgSyCFtxlALKvGYMgZVjBLkpAezslgracpt8tA8UJGz06YXzatT7tQaKbfN4GaBanyHzsEGGLN5jv5It79SCqqx3BibEKJPyfq1wz1xhi_ccqLU49VHjMvLtbowkRZuUCKXfFg6XaZbz4LMVIWCnVVqtWRv6-X0RukSwsC3RhSNvGPdH067zuX0YdZdzKucqsL7aPfDX90M8Jaiua8YFR6U5Zwop6wWmtP7DGBKy2L4uCXi4XB_YRL2eL2huEyQcQhiyGXKwLXcL2C3J1QJ1ScWhWUjO0J8Xd8X5_jC1Gkj00N3HhvAz1zf_26WQdl3QdtdTFkyzaNxumdRGyWRm6LYF2tdBWH4HZp0aN-k807OWQGtIKdDTiDvFdYpHww-WIUKAlmYonakfANftpvteZ0-2spF0405ztCwUFDZhNDwxe0k89Yr760Tz"
		"yCq3W3sWLEBPyDCA9KeG0Loac1U_MNhFxNL7B8F417NnuL-aWOAC1KijLZyqfzMMzM2mQruNZ8RoMaoAfvSHEvYpxv9BCyfM67KbXLmFbNo5tG0_Nn0y_q6xhQLw6qr2Tv7vljqwUBjWqZljq6B3ltjOtZTiFEuzG4bX3ukqPR0nDwEZ0Pna86Du0mT5AS0V4InL0h0v9IWtxzgeekJFpb_f6bWQfjGtkmBg4S3___zeNAyqhHbWu1k7KaLAwa8ijPqtQ8oIHfZtfD1EYOeYl8xbHlhrOG9Gplaf1cRmgHdZPn43pVdtFRWCxlQuPNaZP6ZbmXmGfUX80cb9hOMGs_aT8ayYTddsJUDXDCSTmJPGNbOrSSTJ4R9txACAvb65zxOaqqsUjhoDVS_OhAEb1tZ_W3Ze4VEdtc54Pr_C39EC-kEtxKazQKWg6uaMQgZO5qN5nHGdB-4TjlWC6KbVyxPmGYNC0NJGCvaPp0T5yI7TkfbEJVg2eW"
		"38Z2ApiLIb0-5wlDmAqpy9Yfya1VTlxl-Z2sjbLYQTB5kB9AxK1dDo6VmRGg8kJQY99QtkUFY-US8q_uPWN-Ky6xwPvRnr806nqYOJSGp4Hv7AV7SgliLpYLL1hYxJbzIUjfDeYPUj8V8OOO7wrUbgzQalcylSA-0DACFHS0Mu5dOjJqS9yUaQ4fJi7XefvIkEr4XSCiqM66WaGarZIdt_DrnMdXQ.0wZaG9EHcBxZG11XSCeZVg", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("3_8", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t263.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"redirectChain\":[{\"uri\":\"https://sso.ya.ru/sync?uuid=037bbae1-f3d2-4e7f-8f4e-c99865120144&finish=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275\",\"type\":0},{\"uri\":\"https://mail.yandex.ru/?ncrnd=77275\",\"type\":0}],\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\"customId\":\"871401a9-235e-49b8-8125-f24345ab16da\",\""
		"onlineIdTicket\":\"t=GwAmAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAELPqwQNxs/57rbUIhaGLtLHwACG/hjh8DnQsX93wmv7YDY9u3tYT2p0wlwStA17vauuyvqO7+NSej9tQpMvFkixXp8TjTMlxxmcQaynrDLN+qP+zBGy7Elr/vRCSCYBBwj0juzXBD87J1DGVc7IFfgU4rhLdApSuicUtwd68gj5KsEvLTOmFNhCa1+hxOj8ky5QuPUlHQvtb7VitT9hzxne4fb4S5vtoTOhGYO2N7aTQBC2OU5kkiKMuJJFI9RFz6X6lXubhkU93aHUeevVSvZNogv01M7QhhTGUZ95tf/FMXxhUUpDa7FYB+sOzNne5r3Vb3NqiLZK/H/pdy+rc4110ix4B&p=\",\"family\":3,\"locale\":\"ru-RU\",\"osVersion\":\"10.0.22631.4602.ni_release\",\""
		"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"131.0.2903.112 (Official build) \"},\"client\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}}"
		",\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://360.yandex.ru/mail\",\"ip\":null},\"referrer\":{\"uri\":\"https://sso.ya.ru/sync?uuid=037bbae1-f3d2-4e7f-8f4e-c99865120144&finish=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\""
		"correlationId\":\"55078056-387b-4612-9204-b5474731a690\",\"synchronous\":false}", 
		LAST);

	web_custom_request("3_9", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t264.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/131.0.0.0 Safari/537.36 Edg/131.0.0.0\",\"redirectChain\":[{\"uri\":\"https://sso.ya.ru/sync?uuid=037bbae1-f3d2-4e7f-8f4e-c99865120144&finish=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275\",\"type\":0},{\"uri\":\"https://mail.yandex.ru/?ncrnd=77275\",\"type\":0},{\"uri\":\"https://360.yandex.ru/mail\",\"type\":0}],\"identity\":{\"user\":{\"locale\":\"ru-RU\"},\"device\":{\"id\":null,\""
		"customId\":\"d2c00120-d54a-4a7e-9368-8dc3691614ee\",\"onlineIdTicket\":\"t=GwAmAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAELPqwQNxs/57rbUIhaGLtLHwACG/hjh8DnQsX93wmv7YDY9u3tYT2p0wlwStA17vauuyvqO7+NSej9tQpMvFkixXp8TjTMlxxmcQaynrDLN+qP+zBGy7Elr/vRCSCYBBwj0juzXBD87J1DGVc7IFfgU4rhLdApSuicUtwd68gj5KsEvLTOmFNhCa1+hxOj8ky5QuPUlHQvtb7VitT9hzxne4fb4S5vtoTOhGYO2N7aTQBC2OU5kkiKMuJJFI9RFz6X6lXubhkU93aHUeevVSvZNogv01M7QhhTGUZ95tf/FMXxhUUpDa7FYB+sOzNne5r3Vb3NqiLZK/H/pdy+rc4110ix4B&p=\",\"family\":3,\"locale\":\""
		"ru-RU\",\"osVersion\":\"10.0.22631.4602.ni_release\",\"browser\":{\"internetExplorer\":\"9.11.22621.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"ru-RU\",\"name\":\"\",\"version\":\"131.0.2903.112 (Official build) \"},\"client\":{\"version\":\"281483724587008\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\""
		"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://360.yandex.ru/mail/\",\"ip\":null},\"referrer\":{\"uri\":\"https://sso.ya.ru/sync?uuid=037bbae1-f3d2-4e7f-8f4e-c99865120144&finish=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275\",\"ip\":null},\"type"
		"\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"b57242d6-25b8-405f-b610-81eca3fb8f78\",\"synchronous\":false}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Microsoft Edge\";v=\"131\", \"Chromium\";v=\"131\", \"Not_A Brand\";v=\"24\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("mail.yandex.ru_2", 
		"URL=https://mail.yandex.ru/?ncrnd=77275", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://mc.yandex.ru/metrika/advert.gif", "Referer=https://360.yandex.ru/mail/", ENDITEM, 
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Origin", 
		"https://360.yandex.ru");

	web_url("3_10", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2F360.yandex.ru%2Fmail%2F&page-ref=&charset=utf-8&ut=noindex&browser-info=pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A630674262073%3Ahid%3A578266504%3Az%3A180%3Ai%3A20250103135646%3Aet%3A1735901807%3Ac%3A1%3Arn%3A140411625%3Arqn%3A2%3Au%3A1735901807725633187%3Aw%3A1241x1258%3As%3A2560x1440x24%3Ask%3A1%3Aj%3A1%3Aco%3A0%3Ans%3A1735901806518%3Ast%3A1735901807&t=mc(p-1)clc"
		"(0-0-0)rqnt(2)aw(1)rcm(0)yu(1719458771735901806)cdl(na)eco(32768)ti(2)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://360.yandex.ru/mail/", 
		"Snapshot=t266.inf", 
		"Mode=HTML", 
		LAST);

	web_url("3_11", 
		"URL=https://mc.yandex.ru/watch/3?wmode=7&page-url=https%3A%2F%2F360.yandex.ru%2Fmail%2F&page-ref=&charset=utf-8&ut=noindex&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A1551%3Acn%3A1%3Adp%3A0%3Als%3A630674262073%3Ahid%3A578266504%3Az%3A180%3Ai%3A20250103135646%3Aet%3A1735901807%3Ac%3A1%3Arn%3A541558616%3Arqn%3A1%3Au%3A1735901807725633187%3Aw%3A1241x1258%3As%3A2560x1440x24%3Ask%3A1%3Aj%3A1%3Ads%3A0%2C0%2C0%2C23%2C0%2C0%2C%2C0%2C0%2C84%2C84%2C0%2C23%3Aco%3A0%3Ans%3A1735901806518%3Ast%3A1735901807&t=mc(p-1)clc(0-0-0)rqnt(1)aw(1)rcm(0)yu(1719458771735901806)cdl(na)eco(32768)ti(2)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://360.yandex.ru/mail/", 
		"Snapshot=t267.inf", 
		"Mode=HTML", 
		LAST);

	web_url("61779775", 
		"URL=https://mc.yandex.ru/watch/61779775?wmode=7&page-url=https%3A%2F%2F360.yandex.ru%2Fmail%2F&charset=utf-8&ut=noindex&uah=che%0A0&browser-info="
		"pv%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A1551%3Acn%3A2%3Adp%3A0%3Als%3A996789796808%3Ahid%3A578266504%3Az%3A180%3Ai%3A20250103135646%3Aet%3A1735901807%3Ac%3A1%3Arn%3A476319565%3Arqn%3A1%3Au%3A1735901807725633187%3Aw%3A1241x1236%3As%3A2560x1440x24%3Ask%3A1%3Aj%3A1%3Apri%3A1%3Ads%3A0%2C0%2C0%2C23%2C0%2C0%2C%2C0%2C0%2C84%2C84%2C0%2C23%3Aco%3A0%3Ans%3A1735901806518%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901807%3At%3A%D0%9E%D0%B1%D0%BD%D0%BE%D0%B2%D0%B8%D1%82%D0%B5%20"
		"%D0%B1%D1%80%D0%B0%D1%83%D0%B7%D0%B5%D1%80&t=gdpr(8-0)mc(p-1)clc(0-0-0)rqnt(1)aw(1)rcm(0)yu(1719458771735901806)cdl(na)eco(32768)ti(2)", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://360.yandex.ru/mail/", 
		"Snapshot=t268.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1_43", 
		"URL=https://mc.yandex.ru/watch/61779775/1?page-url=https%3A%2F%2F360.yandex.ru%2Fmail%2F&charset=utf-8&ut=noindex&uah=che%0A0&hittoken=1735901807_97fa2d0c150a3fc550d0a9a45bd1e2cdc00946b56bf15b576cf14dc8448509f7&browser-info="
		"pa%3A1%3Aar%3A1%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A1551%3Acn%3A2%3Adp%3A0%3Als%3A996789796808%3Ahid%3A578266504%3Az%3A180%3Ai%3A20250103135646%3Aet%3A1735901807%3Ac%3A1%3Arn%3A113541552%3Arqn%3A2%3Au%3A1735901807725633187%3Aw%3A1241x1236%3As%3A2560x1440x24%3Ask%3A1%3Aj%3A1%3Apri%3A1%3Aco%3A0%3Ans%3A1735901806518%3Aadb%3A2%3Arqnl%3A1%3Ast%3A1735901807&t=gdpr(8-0)mc(p-1)clc(0-0-0)rqnt(2)aw(1)rcm(0)yu(1719458771735901806)cdl(na)eco(32768)ti(2)", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://360.yandex.ru/mail/", 
		"Snapshot=t269.inf", 
		"Body=site-info=%7B%22upgrade%20page%22%3A%7B%22error%22%3A%22unsupported%20browser%22%7D%7D", 
		LAST);

	lr_end_transaction("4_logOut",LR_AUTO);

	return 0;
}