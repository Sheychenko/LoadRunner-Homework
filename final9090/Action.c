Action()
{
	
	int i, iterations;
	char transactionName[100];
	
	web_set_sockets_option("SSL_VERSION", "AUTO");


	lr_start_transaction("1_loginPage");

/*Correlation comment: Automatic rules - Do not change!  
Original value='9903672511735901413' 
Name ='yu' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=yu",
		"RegExp=yandexuid=(.*?);",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=All",
		"Text=passp-button passp-sign-in-button",
		LAST);

	web_url("auth", 
		"URL=https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);
		
/*Correlation comment: Automatic rules - Do not change!  
Original value='338f85e52662d6a3b4de05cda97cb62748674a4c:1735901414107' 
Name ='csrf_token' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='csrf_token_1'*/
	web_reg_save_param_regexp(
		"ParamName=csrf_token",
		"RegExp=\"csrf\":\"(.*?)\"",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='9d957ab5-6983-44a3-9dd0-d1e3dc323ed7' 
Name ='uuid' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='uuid_sync'*/
	web_reg_save_param_regexp(
		"ParamName=uuid",
		"RegExp=uuid=(.*?)&",
		LAST);

/*Correlation comment - Do not change!  Original value='3508d530-5f42-4d5e-ac56-ef253bd9d78e' Name ='process_uuid' Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=process_uuid",
		"RegExp=process_uuid=(.*?)",
		LAST);

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

	web_convert_param("csrf_token_URL2",
		"SourceString={csrf_token}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		LAST);

	lr_end_transaction("1_loginPage",LR_AUTO);

	lr_start_transaction("2_login");

/*Correlation comment: Automatic rules - Do not change!  
Original value='2408773c043c1053bdd004fb8b5fd69c9b' 
Name ='track_id' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='track_id'*/
	web_reg_save_param_json(
		"ParamName=track_id",
		"QueryString=$.track_id",
		LAST);

	web_reg_find("Fail=NotFound",
		//"Search=All",
		"Text/IC=\"status\":\"ok\"",
		LAST);

	web_submit_data("start",
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/start",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t55.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token}", ENDITEM,
		"Name=login", "Value={login}", ENDITEM,
		"Name=process_uuid", "Value={process_uuid}", ENDITEM,
		"Name=retpath", "Value=https://sso.passport.yandex.ru/prepare?uuid={uuid}&goal=https%3A%2F%2Fya.ru%2F&finish=https%3A%2F%2Fmail.yandex.ru", ENDITEM,
		"Name=origin", "Value=mail360", ENDITEM,
		"Name=check_for_xtokens_for_pictures", "Value=1", ENDITEM,
		"Name=can_send_push_code", "Value=1", ENDITEM,
		EXTRARES,
		"URL=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A634299593%3Ax%3A-97673%3Ay%3A-461086%3At%3A794%3Ap%3APWAA1A1AFAAA2A1AAA1A1AA%3AX%3A0%3AY%3A0&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901499&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-yapic/0/0-0/islands-200", "Referer=https://passport.yandex.ru/", ENDITEM,
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='2064807418' 
Name ='uid' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='X_default_uid'*/
	web_reg_save_param_regexp(
		"ParamName=uid",
		"RegExp=X-Default-UID:\\ (.*?)\\\r\\\n",
		LAST);

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
		"Body=csrf_token={csrf_token_URL2}&track_id={track_id}&password={passwd}&retpath=https%3A%2F%2Fsso.passport.yandex.ru%2Fprepare%3Fuuid%3D{uuid}%26goal%3Dhttps%253A%252F%252Fya.ru%252F%26finish%3Dhttps%253A%252F%252Fmail.yandex.ru&lang=ru",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='907d5793893481413593f6076353efe971c151ff:1735901568039' 
Name ='csrf_token_1' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='csrf_token_1'*/
	web_reg_save_param_regexp(
		"ParamName=csrf_token_1",
		"RegExp=\"csrf\":\"(.*?)\"",
		LAST);

	web_submit_data("accounts",
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t70.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token}", ENDITEM,
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
		"Name=csrf_token", "Value={csrf_token_1}", ENDITEM,
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
		"Name=csrf_token", "Value={csrf_token_1}", ENDITEM,
		"Name=origin", "Value=mail360", ENDITEM,
		"Name=track_id", "Value=6997e7f593b7201f87c11e4cc8c706c19b", ENDITEM,
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='85e08fc1097d92d812c94921aed72d0f1b364268:1735901568840' 
Name ='csrf_token_2' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='csrf_token_1'*/
	web_reg_save_param_regexp(
		"ParamName=csrf_token_2",
		"RegExp=\"csrf\":\"(.*?)\"",
		LAST);

	web_submit_data("accounts_2",
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t74.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=csrf_token", "Value={csrf_token_1}", ENDITEM,
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
		"Name=csrf_token", "Value={csrf_token_2}", ENDITEM,
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
		"Name=csrf_token", "Value={csrf_token_2}", ENDITEM,
		"Name=origin", "Value=mail360", ENDITEM,
		"Name=track_id", "Value=595e2be08cf63215b0f3420752935ca69c", ENDITEM,
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='LIZA-12390077-1735901572153' 
Name ='_connection_id' 
Type ='Rule' 
AppName ='yandex_mail' 
RuleName ='reqid_connectionId'*/
	web_reg_save_param_regexp(
		"ParamName=_connection_id",
		"RegExp=reqid=(.*?);",
		LAST);

/*Correlation comment - Do not change!  Original value='Vu05nPdFShhOH4Hy5umCi7F' Name ='_ckey' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=_ckey",
		"LB=\"ckey\":\"",
		"RB=\"",
		LAST);

	web_url("mail.yandex.ru",
		"URL=https://mail.yandex.ru/",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://sso.ya.ru/",
		"Snapshot=t81.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-bold.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/nanoislands-1d307024c5c4eafdedcf4b2d100910f1.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/mail-5043479c8ea725e7c0c29249ddd24bad.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/messages-dc005d1b737aa54db39c11c4b13287eb.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/old-efaed7dac6ac2faffcb3c69846860c25.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/left-c796292c8c308d22dce7ffccfe1d0b2c.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/ab69671de1bd8502995d-10.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/6ec4cffcd1bb52fe092a-4.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/d4f5c9f46269a0b41948-2.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/e922bb3520ef9b524448-5.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-medium.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/fa906c9a0907a40b7db6-1.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-regular.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/fe972e381147ac026547-0.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/69c0d32fabe3fe06d0c6-28.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/60f648208e391de5ef2f-24.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/5bd45b6f976a30645a5a-33.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/2213e97c1da3c0868b22-45.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/1-402d650168a8a0489ae8.css", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/notification-center-e5e7baf05bcd505dc256.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/4fe266d1d78fb42a3cf9-42.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/8326df3e30cb5766128d-18.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/651118b267db18ec503b-3.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/0-73b72689fec0c6f7a381.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/ab8c88ef58beec999165-25.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/dc505ad8d19c8b93a518-22.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/d5cb5aa499ab6129d944-37.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/1-402d650168a8a0489ae8.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/53c0969e540074ad5d96-20.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/0-73b72689fec0c6f7a381.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/0ccaea0b251e53ff09b6-40.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/16903286c5ab61bac01b-39.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/4b09d1c5e2e20dc18262-47.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/direct-9d8a6c1e3300a69d56c1.js", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/notification-center-e5e7baf05bcd505dc256.js", ENDITEM,
		"URL=https://yandex.ru/ads/system/context.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/d2541605b31d1683480b-46.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/subscriptions-1372a635e5b01ce24a3cb0bb1e245692.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/editor-949639c56475b1cfb2b674c25029378a.css", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-yapic/36777/0r-6/islands-200", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/compose-react-ed4a1667c03624783e34d592089e379b.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/compose-manager-eafaa0995b55e546ca1d30747b45ff9e.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/e29b2885ec8908c035a2-27.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/message-95c5b1c60e3a8b6d85722f2795e7f426.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/compose-9c6c4b23ec3d017d28037682092d8518.css", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/09166b971d68524f129f-23.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/dc22b778f507cf99af5f1fbaa09283ad-message.ogg", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/63d9be1e7c3864195c07-34.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/c0d191884b98355c8e4a-38.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/65301c385a1ae5aaff9b-36.js", ENDITEM,
		"URL=https://yastatic.net/s3/liza/_/promo-7b50c08b4adcf927a62cda7964f60341.css", ENDITEM,
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/react-tracing-460746e7d66b2fcf379e.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/5956674fd0fdd7c45be0.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/57bcfd9e2482bf6eab12.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/28c60da322306eea85f3.js", ENDITEM,
		"URL=https://yastatic.net/s3/home/fonts/ys/3/text-variable-full.woff2", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/cc3eb7227602aea2a356.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/454b3fa45c64f15c3946.js", ENDITEM,
		"URL=https://yastatic.net/safeframe-bundles/0.83/host.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/739a3f1b20a135fc8afd.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/0a36daf5e89dd66b60ce.js", ENDITEM,
		"URL=https://yastatic.net/partner-code-bundles/1183758/b005959240c3440cc8c6.js", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5235281/ktLhRxtt8g7ddvNKc1viUw/wx150", ENDITEM,
		"URL=https://yandex.ru/an/rtbcount/1VvVyZtp0Ma200000000U9nJVBhcOk7QbmMTXW7iBMMT4yxyikmxM9xE00IUC97GQL7XmR5jcOmCgOn0ySm0zWsP8F7IKWu6XjghGA5MHX0vap7cBqW10yD2Hf4s26ibdBKHH6rW1X9x6QUuoZ4S1SkSPGI9N6K4ITvbP91HPFZBE8k9WM4k4qZaBDD_8BZAv0Pals8IwEgE_nF0pi3mzuQMw6ajDeQ_J5mWovbPWMGlioAGdCeCqZQNsHnaDSXa3h3Lp161fgNvmHFQJZB3_7iLhF8kcFp9xE343t4uI_F_8s3thc2vyujz1mlJ0PR_CC1uaiLwsqLkHgk8DHTOMZ-r7p-tv5Itn4qMi4w63_OFuQotB22_BM0LFCdQmYm45hp0sW02Z3TPOIxuoWeoj8EjWMK2szERn_gkRzsrevDn1jkLmy4BsAQzU_Dynxwdcu9Nii4CFS3cVeAD-H4RZtEebLDsYO5dU5cv-K-uz4Hs66iMExkXeOMnkQd51dQc7UoC9zZ57x2llFPxpiTblSUDVh3pT71KJU1WNC01zE4AZYazR1j0n0uEnbiS646yWBE1UGNdJCODdDedE1alS3Azu6JymCduWvDn0HT8EzU1Fw8VGR70u93umw6H6yRg1BCENFtlS86xfQ5fXIC0GTNDMG00?", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5217787/WN3SgwtlkfmhkvjtUGwWlA/wx150", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/4936745/YYAB0graWta4Gxu3fJVPSw/y90", ENDITEM,
		"URL=https://yandex.ru/an/rtbcount/1PeIe7i20dG200000000U9nJVBhcOk7QbmMTXW7iALqC4y_yifnmi3oT0GWyOIAXzQ5QZB5jcOmCgOn0ySm0zYDD8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aCXLHf3aNKO66GM6luopc1WOvZA1H9OoBG2IQvaYW29dcVu3mLKcHw38AoO1vXdtTGBO6HXEplSGFQt5nl2NYGla46QG0tgP5O7aL6QG4NEPpK7E0Dd20NO6SqIWQMb-y8Isaymmlry5gxmB9dyoEpZnGpp1Klt_24Y8OGNBXFlgErYO3h3yXm76aopMsovoCrf5hBd0qlgf_VYv9QUw9Mv2lChmmVuXdFMM1UJF1Qo29rbRc8N0WXTO6nOqD3ZSP8Kvu2ihoCmEjWQM2MnFRnxhkxvrruvEnXbiLmu7Bs2RzkxDyntxdcuANia6C_C0c_i9DkP7R3pEeLQvlgQMdk5bvUO_uT8JsM6iMUpiXeOMnkQc5XlOcNQmCvzW5t_0tltotCStUt_-Zlh1pjF1KJM1Wt41nu4_eYiuTfmNsW0YTd0mtkB02E45d0tCApXtC6xWP3h1oNo1a-a59-C7JiOVd8mBk83Xiu8BQCP7K2GmF9WdvDZ83MDrWbaCFqKTBt2tD3IjS0G0d0JDOW00?", ENDITEM,
		"URL=https://favicon.yandex.net/favicon/bargipsy.com?size=32&stub=2", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5217787/WN3SgwtlkfmhkvjtUGwWlA/wy300", ENDITEM,
		"URL=https://favicon.yandex.net/favicon/yandex.ru?size=32&stub=2", ENDITEM,
		"URL=https://favicon.yandex.net/favicon/nuum.ru?size=32&stub=2", ENDITEM,
		"URL=https://favicon.yandex.net/favicon/practicum.yandex.ru?size=32&stub=2", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5426325/U_BSGhSUoy3TfBxI1VDVIQ/x90", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5426325/U_BSGhSUoy3TfBxI1VDVIQ/y180", ENDITEM,
		"URL=/u2709/favicon/png/main-favicon/32/0.png", ENDITEM,
		"URL=https://static-mon.yandex.net/static/main.js?pid=yandex_mail", ENDITEM,
		"URL=https://yastatic.net/daas/atom.js", ENDITEM,
		"URL=https://yandex.ru/an/rtbcount/1TGNDIBo0MK200000000U9nJVBhcOk7QbmMTXW7iFdkBbv_vPVdkO7aw0n1umaH2itV-zezjosHaI6K4YcS6iF_P0X8lBULWOAYz2XHgPGIHCnbR_uCKC30iP0nAXB1MmbaRGTG6PY2nbt6Agnp3KR3CMKQGo5L6aEHTHWOPHOQ_ZBEO61ZcCe54pZBz1uAhJCU0x5TC0dSqTkG4i3CmnEGybJgjnSRmbuaBP3apAv3iPLO4abEPGThcCfk3h0QPp06scZaYqBGqFtX2sqbcc7-lWbNU1PC_cHsS-24EPsd-VmJitXKihV_PTx0m7M3v3mEC9rcijrtaPhIAM7E1fVLJ-_5pIqvrIzna0Uja-63_4CvwomBosm9MmPEiBSn2OC4Bh0qB6XeKRhB27F2L5MHc1ri3omIsfpUFzLtVkcj79-CCjYk7WnUmJNltvlcEVKyt1QzaWvbvWCtc11lp8pOUvr2hB1UdSF_midBpdt3fYUmmrYnsTaD32sDpKuiDx4mxs1bFi8i_O5zvxVUSZyjwZnlzOEVfuAYQmC6uW0FemHKSbmwnRW0HEpWORt5WXF02pWRc5Pmp6JTmQf_WPBp0oVI1a_479-C2Bf1UhWD_H3-2Oe11GVIRGoCtZDK9PWNy-EzmWRkbeMc58m3PDCol?", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5338229/EFowg_WDoaR-GL6LL8wWhQ/x90", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5338229/EFowg_WDoaR-GL6LL8wWhQ/y180", ENDITEM,
		"URL=https://favicon.yandex.net/favicon/contract.gosuslugi.ru?size=32&stub=2", ENDITEM,
		"URL=https://yandex.ru/an/rtbcount/1LOY8XZy0N0200000000U9nJVBhcOk7QbmMTXW7i6hSxbf_vPVdkO7aw0n1umaH2lRXDP6FRCXaPKXc1ufa1x1SkWiHBYpaO66gl0eLQ6K7aJCOSFP021eQ5Z2M7m0o6bN3MHf3K1cOWiPVnmXmvXgDWcREC896hZ239kumCCWeCVnbdCJ4mp6K2YInbMW0arp9504NEClq7WgjCXu4YhvW4D0pssmImCp2iNlzAwhGM6yDV9YwGGvXPWMGlioAGdCeCCc8kipd86I1REC3EO8u8D2tD3vxGTf8PvlUhO9LtmUHFPWSdVeWdMEh_7m7xPmNBcpiiErYO3h3yXm76aopMsovoCrf5hBd0qlgf_VYv9QUw9MwoGFpwmVuXdFMM1UJF1Qo29rbRc8N0WXTO6neuRhB2hF_A2ZAnWws1PGBRqvl7-gvltRMZat46svN3mGlOfhrxytp7lgURWbUomKmym6PpWetv4HkFSwXLgNDAX7zuMRdvJxZqH7OOQnOxkw6XXR6vgSK6TgOTxCmdsCKVi7U_FFVnpTwVlwD-iFDqS5HDu61Sm07qtWgEBotC6q343Wx6MnmOuRk0iu5v1USEnWsSarXES39Vu6JwmCduWvDn0HT8CzU1Fw8VGH70qE3tmg6H6yRg1BCEFFlaS86xfQ5fXIC0Vo7GxW00?", ENDITEM,
		"URL=https://favicon.yandex.net/favicon/xn----9sbdzhj4bie6fq.xn--p1ai?size=32&stub=2", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5161428/oYuGE084W9V1H4RcmSBuRQ/x180", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5161428/oYuGE084W9V1H4RcmSBuRQ/y90", ENDITEM,
		"URL=https://clck.yandex.ru/click/dtype=PS/project=search_mail/action=suggest-compose/product=web/uid={uid}/filed=to/field=to/suggest_used=yes/suggest_show=yes/pos=1/count=1/user_text=/search_text={login}%40yandex.ru/*https://mail.yandex.ru/?uid={uid}", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5332322/h5o2sLPcOrZR4fLznExXxQ/y90", ENDITEM,
		"URL=https://avatars.mds.yandex.net/get-direct/5332322/h5o2sLPcOrZR4fLznExXxQ/x180", ENDITEM,
		"URL=https://yandex.ru/an/rtbcount/1OuG4P7v0Mi200000000U9nJVBhcOk7QbmMTXW7iQpmgLftvPVdhO7aw0n1umaH2ENczv6BRCXaPKXc1ufa1x0xs8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aCXLHf3aNKO66GM6luopc1WOvZA1H9OoBG2IQvaYW29dcVu3mLKcHw38AoQ1A_yNVGzWPs1OqRTC-hGM6yDV9YwGGvX13kXbLWIIKvb1HinbDWSv0sGB1zWPp161fgNvmHFQJZB3_7uLhF8kcFp9xE343_44I_N_8o0XXXKizmwexc1XEi3o7mOOJx9ORxl8pMWLiUO2I-kdzkFdbfpgbhW9yIh31_k7SDPR5f0_5x0AdcHjOHO22zvaXTdybHLaM0TR0yi4jgStZ_LTtxfhHoVZ3BOhXuCNi4rxz-RvZdrFDmMlP8CPTe3D_GGRyoCs7kTGgxGA3x-0yB9oyvzmwOdiCDOiTdP3GmjZSrEB3UnCEzYPJx2BFs3lVddkuvkzFtz7_M3dwU2eci31k83Zm1_H5HmxpWjj014xE1XlSM04xGBE1kOLd3iODt1EOZd1oNo1a-a39-CFJiO5NC1WMS45DE4ZAEmP7imJScpaXh4wmIo6dwAE5xXR6ffME080WmdFJG00?", ENDITEM,
		LAST);

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
		"Body={\"_ckey\":\"{_ckey}\",\"_uid\":\"{uid}\",\"_locale\":\"ru\",\"_timestamp\":1735901574015,\"_product\":\"RUS\",\"_connection_id\":\"{_connection_id}\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,"
		"-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\",\"models\":[{\"name\":\"folders\",\"params\":{},\"meta\":{\"requestAttempt\":1}},{\"name\":\"labels\",\"params\":{},\"meta\":{\"requestAttempt\":1}},{\"name\":\"messages\",\"params\":{\"current_folder\":true,\"with_pins\":\"yes\",\"sort_type\":\"date\",\"threaded\":\"yes\",\"tabId\":\"relevant\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"stickers\",\"params\":{\"type\":\"reply_later\"},\"meta\":{\"requestAttempt\":1}},{\"name\":\"tabs\",\"params\":{},\"meta\":{\"requestAttempt\":1}}]}",
		LAST);

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

	lr_end_transaction("2_login",LR_AUTO);
	
	iterations=atoi(lr_eval_string("{X}"));
	
	for (i=1; i<=iterations; i++){
		sprintf(transactionName, "3_sendMessage_%d", i);
		
		lr_start_transaction(transactionName);
	
		web_reg_save_param_regexp(
			"ParamName=message_id",
			"RegExp=\"messageId\":\"(.*?)",
			LAST);
		
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
			"Body={\"models\":[{\"name\":\"do-init-compose\",\"params\":{},\"meta\":{\"requestAttempt\":1}}],\"_ckey\":\"{_ckey}\",\"_uid\":\"{uid}\",\"_locale\":\"ru\",\"_timestamp\":1735901677911,\"_product\":\"RUS\",\"_connection_id\":\"{_connection_id}\",\"_exp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0,-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;767031,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1127746,0,3;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_eexp\":\"539434,0,-1;500420,0,-1;722413,0,-1;814988,0,-1;877126,0,-1;924339,0,-1;1030704,0,-1;1103680,0,-1;1104225,0,-1;1105295,0"
			",-1;1151124,0,-1;1162876,0,-1;1163247,0,-1;1170089,0,-1;1174879,0,-1;610121,0,-1;848713,0,-1;944321,0,-1;985006,0,-1;1024668,0,-1;1030455,0,-1;1075392,0,-1;1104478,0,-1;1142331,0,-1;1152849,0,-1;1150928,0,-1;1158907,0,-1;1179603,0,-1;1104704,0,-1;1140931,0,-1;985890,0,13;715756,0,52;762607,0,8;705044,0,99;943630,0,12;1160418,0,48;1086206,0,3;261659,0,59;134421,0,43;188836,0,33;1117098,0,61;1183344,0,8;1180242,0,15;1180238,0,76;1180240,0,5\",\"_service\":\"LIZA\",\"_version\":\"191.1.0\",\"_messages_per_page\":\"30\",\"_mailboxUid\":\"\"}",
			LAST);
	
		web_convert_param("message_id",
			"SourceString={message_id}",
			"SourceEncoding=HTML",
			"TargetEncoding=URL",
			LAST);
		
		web_convert_param("name",
			"SourceString={name}",
			"SourceEncoding=HTML",
			"TargetEncoding=URL",
			LAST);
		
		web_reg_find("Fail=NotFound",
			//"Search=All",
			"Text/IC=\"status\":\"ok\"",
			LAST);
	
		web_custom_request("liza1_27",
			"URL=https://mail.yandex.ru/web-api/do-send/liza1?_save=true",
			"Method=POST",
			"TargetFrame=",
			"Resource=0",
			"RecContentType=application/json",
			"Referer=https://mail.yandex.ru/",
			"Snapshot=t191.inf",
			"Mode=HTML",
			"Body=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=&doit=&fid=&from_mailbox={login}%40yandex.ru&from_name={name}&get_abook=&html=&idcs=&&ign_overwrite=&initial_cc=&initial_to=&inreplyto=&&mark_as=&&disk_att=&nosave=&nosend=yes&notify_on_send=no&overwrite=&&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send=%3Cdiv%3E{time}%3C%2Fdiv%3E&send_time=&store_fid=&store_name=&strict_charset=&style=&subj={subject}&to=%22{send_login}%40yandex.ru%22%20%3C{send_login}%40yandex.ru%3E&ttype=html&withUpdatedUndoAndDelayedErrorHandling=yes&_connection_id={_connection_id}&_ckey={_ckey}&_uid={uid}&_eexp=539434%2C0%2C-1%3B500420%2C0%2C-1%3B722413%2C0%2C-1%3B814988%2C0%2C-1%3B877126%2C0%2C-1%3B924339%2C0%2C-1%3B1030704%2C0%2C-1%3B1103680%2C0%2C-1%3B1104225%2C0%2C-1%3B1105295%2C0%2C-1%3B1151124%2C0%2C-1%3B1162876%2C0%2C-1%3B1163247%2C0%2C-1%3B1170"
			"089%2C0%2C-1%3B1174879%2C0%2C-1%3B610121%2C0%2C-1%3B848713%2C0%2C-1%3B944321%2C0%2C-1%3B985006%2C0%2C-1%3B1024668%2C0%2C-1%3B1030455%2C0%2C-1%3B1075392%2C0%2C-1%3B1104478%2C0%2C-1%3B1142331%2C0%2C-1%3B1152849%2C0%2C-1%3B1150928%2C0%2C-1%3B1158907%2C0%2C-1%3B1179603%2C0%2C-1%3B1104704%2C0%2C-1%3B1140931%2C0%2C-1%3B985890%2C0%2C13%3B715756%2C0%2C52%3B762607%2C0%2C8%3B705044%2C0%2C99%3B943630%2C0%2C12%3B1160418%2C0%2C48%3B1086206%2C0%2C3%3B261659%2C0%2C59%3B134421%2C0%2C43%3B188836%2C0%2C33%3B1117098%2C0%2C61%3B1183344%2C0%2C8%3B1180242%2C0%2C15%3B1180238%2C0%2C76%3B1180240%2C0%2C5&_mailboxUid=&message_id={message_id}&current_time=&captcha_token=&parts_json=&mailboxUid=",
			LAST);
	
		web_reg_find("Fail=NotFound",
			//"Search=All",
			"Text/IC=\"status\":\"ok\"",
			LAST);
		
		web_custom_request("liza1_32",
			"URL=https://mail.yandex.ru/web-api/do-send/liza1?_send=true",
			"Method=POST",
			"TargetFrame=",
			"Resource=0",
			"RecContentType=application/json",
			"Referer=https://mail.yandex.ru/",
			"Snapshot=t198.inf",
			"Mode=HTML",
			"Body=&bcc=&captcha_entered=&captcha_key=&cc=&charset=&confirm_limit=&current_folder=6&doit=&fid=&from_mailbox={login}%40yandex.ru&from_name={name}&get_abook=&html=&idcs=&&ign_overwrite=no&initial_cc=&initial_to=&inreplyto=&&mark_as=&&disk_att=&nosave=&nosend=&notify_on_send=no&overwrite=188306759419428879&&phone=&references=&remind_period=&retpath=&returl=&saveDraft=&save_symbol=draft&send=%3Cdiv%3E{time}%3C%2Fdiv%3E&send_time=&store_fid=&store_name=&strict_charset=&style=&subj={subject}&to=%22{send_login}%40yandex.ru%22%20%3C{send_login}%40yandex.ru%3E&ttype=html&withUpdatedUndoAndDelayedErrorHandling=yes&_connection_id={_connection_id}&_ckey={_ckey}&_uid={uid}&_eexp=539434%2C0%2C-1%3B500420%2C0%2C-1%3B722413%2C0%2C-1%3B814988%2C0%2C-1%3B877126%2C0%2C-1%3B924339%2C0%2C-1%3B1030704%2C0%2C-1%3B1103680%2C0%2C-1%3B1104225%2C0%2C-1%3B1105295%2C0%2C-1%3B1151124%2C0%2C-1%3B1162876%2C0%2C-1%3B11632"
			"47%2C0%2C-1%3B1170089%2C0%2C-1%3B1174879%2C0%2C-1%3B610121%2C0%2C-1%3B848713%2C0%2C-1%3B944321%2C0%2C-1%3B985006%2C0%2C-1%3B1024668%2C0%2C-1%3B1030455%2C0%2C-1%3B1075392%2C0%2C-1%3B1104478%2C0%2C-1%3B1142331%2C0%2C-1%3B1152849%2C0%2C-1%3B1150928%2C0%2C-1%3B1158907%2C0%2C-1%3B1179603%2C0%2C-1%3B1104704%2C0%2C-1%3B1140931%2C0%2C-1%3B985890%2C0%2C13%3B715756%2C0%2C52%3B762607%2C0%2C8%3B705044%2C0%2C99%3B943630%2C0%2C12%3B1160418%2C0%2C48%3B1086206%2C0%2C3%3B261659%2C0%2C59%3B134421%2C0%2C43%3B188836%2C0%2C33%3B1117098%2C0%2C61%3B1183344%2C0%2C8%3B1180242%2C0%2C15%3B1180238%2C0%2C76%3B1180240%2C0%2C5&_mailboxUid=&message_id={message_id}&current_time=&captcha_token=&parts_json=&mailboxUid=",
			LAST);

		lr_end_transaction(transactionName,LR_AUTO);
		
		lr_think_time(5);
		}

	lr_think_time(16);

	lr_start_transaction("4_logOut");

	web_url("passport",
		"URL=https://passport.yandex.ru/passport?origin=mail360&mode=logout&yu={yu}&retpath=https%3A%2F%2Fmail.yandex.ru%2F%3Fncrnd%3D77275",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://yandex.ru/",
		"Snapshot=t261.inf",
		"Mode=HTML",
		LAST);

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Redirecting to https://360.yandex.ru/mail",
		LAST);
	
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

	lr_end_transaction("4_logOut",LR_AUTO);

 	return 0;
}