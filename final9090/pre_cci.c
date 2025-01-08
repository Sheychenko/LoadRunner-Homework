# 1 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c"
# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "C:\\Program Files (x86)\\HPE\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB1 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB1 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB1 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB1 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB2 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB2 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB2 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB2 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB3 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB3 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB3 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB3 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB4 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB4 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB4 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB4 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB5 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB5 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB5 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB5 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB6 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB6 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB6 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB6 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

void OnOpenCB7 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB7 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB7 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB7 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "\x111";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 

 

char WebSocketReceive1[] = "\x111";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	 

 

char WebSocketReceive2[] = "\x111";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	 

 

char WebSocketReceive3[] = "\x111";
long WebSocketReceiveLen3   = sizeof(WebSocketReceive3) - 1;	 

 

char WebSocketReceive4[] = "\x111";
long WebSocketReceiveLen4   = sizeof(WebSocketReceive4) - 1;	 

 

char WebSocketReceive5[] = "\x111";
long WebSocketReceiveLen5   = sizeof(WebSocketReceive5) - 1;	 

 

char WebSocketReceive6[] = "\x111";
long WebSocketReceiveLen6   = sizeof(WebSocketReceive6) - 1;	 

 

char WebSocketReceive7[] = "\x111";
long WebSocketReceiveLen7   = sizeof(WebSocketReceive7) - 1;	 


# 10 "globals.h" 2


 
 


# 3 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c" 2

# 1 "Action.c" 1
Action()
{
	
	int i, iterations;
	char transactionName[100];
	
	web_set_sockets_option("SSL_VERSION", "AUTO");


	lr_start_transaction("1_loginPage");

 



	web_reg_save_param_regexp(
		"ParamName=yu",
		"RegExp=yandexuid=(.*?);",
		"LAST");

	web_reg_find("Fail=NotFound",
		"Search=All",
		"Text=passp-button passp-sign-in-button",
		"LAST");

	web_url("auth", 
		"URL=https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"LAST");
		
 





	web_reg_save_param_regexp(
		"ParamName=csrf_token",
		"RegExp=\"csrf\":\"(.*?)\"",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=uuid",
		"RegExp=uuid=(.*?)&",
		"LAST");

 
	web_reg_save_param_regexp(
		"ParamName=process_uuid",
		"RegExp=process_uuid=(.*?)",
		"LAST");

	web_url("auth_2", 
		"URL=https://passport.yandex.ru/auth?retpath=https%3A%2F%2Fmail.yandex.ru&origin=mail360", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://yastatic.net/s3/passport-auth-customs/customs/v1.174.4/passport.auth.customs.css", "Referer=https://passport.yandex.ru/", "ENDITEM", 
		"Url=https://yastatic.net/s3/passport-static/core/v1.188.15/i/authv2/qr-icon-dark.svg", "Referer=https://yastatic.net/s3/passport-static/core/v1.188.15/css/react.authv2.cij.css", "ENDITEM", 
		"Url=https://yastatic.net/s3/passport-static/core/v1.188.15/i/authv2/fingerprint-icon-dark.svg", "Referer=https://yastatic.net/s3/passport-static/core/v1.188.15/css/react.authv2.cij.css", "ENDITEM", 
		"Url=https://yastatic.net/s3/passport-static/core/v1.188.15/i/authv2/all-social-icon-dark.svg", "Referer=https://yastatic.net/s3/passport-static/core/v1.188.15/css/react.authv2.cij.css", "ENDITEM", 
		"LAST");

	web_convert_param("csrf_token_URL2",
		"SourceString={csrf_token}",
		"SourceEncoding=HTML",
		"TargetEncoding=URL",
		"LAST");

	lr_end_transaction("1_loginPage",2);

	lr_start_transaction("2_login");

 





	web_reg_save_param_json(
		"ParamName=track_id",
		"QueryString=$.track_id",
		"LAST");

	web_reg_find("Fail=NotFound",
		 
		"Text/IC=\"status\":\"ok\"",
		"LAST");

	web_submit_data("start",
		"Action=https://passport.yandex.ru/registration-validations/auth/multi_step/start",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t55.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token}", "ENDITEM",
		"Name=login", "Value={login}", "ENDITEM",
		"Name=process_uuid", "Value={process_uuid}", "ENDITEM",
		"Name=retpath", "Value=https://sso.passport.yandex.ru/prepare?uuid={uuid}&goal=https%3A%2F%2Fya.ru%2F&finish=https%3A%2F%2Fmail.yandex.ru", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"Name=check_for_xtokens_for_pictures", "Value=1", "ENDITEM",
		"Name=can_send_push_code", "Value=1", "ENDITEM",
		"EXTRARES",
		"URL=https://mc.yandex.ru/clmap/784657?page-url=https%3A%2F%2Fpassport.yandex.ru%2Fauth%2Fwelcome%3Fretpath%3Dhttps%253A%252F%252Fmail.yandex.ru%26origin%3Dmail360&pointer-click=rn%3A634299593%3Ax%3A-97673%3Ay%3A-461086%3At%3A794%3Ap%3APWAA1A1AFAAA2A1AAA1A1AA%3AX%3A0%3AY%3A0&browser-info=u%3A1735901419877300485%3Av%3A1551%3Avf%3Afqngs4ku2ry4ydu78wzu8osbsm7%3Arqnl%3A1%3Ast%3A1735901499&t=gdpr(8-0)ti(1)", "Referer=https://passport.yandex.ru/", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-yapic/0/0-0/islands-200", "Referer=https://passport.yandex.ru/", "ENDITEM",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=uid",
		"RegExp=X-Default-UID:\\ (.*?)\\\r\\\n",
		"LAST");

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
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=csrf_token_1",
		"RegExp=\"csrf\":\"(.*?)\"",
		"LAST");

	web_submit_data("accounts",
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token}", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"LAST");

	web_submit_data("getCommonTrack",
		"Action=https://passport.yandex.ru/registration-validations/getCommonTrack",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token_1}", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"Name=track_id", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("ask_v2",
		"Action=https://passport.yandex.ru/registration-validations/auth/additional_data/ask_v2",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token_1}", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"Name=track_id", "Value=6997e7f593b7201f87c11e4cc8c706c19b", "ENDITEM",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=csrf_token_2",
		"RegExp=\"csrf\":\"(.*?)\"",
		"LAST");

	web_submit_data("accounts_2",
		"Action=https://passport.yandex.ru/registration-validations/auth/accounts",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t74.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token_1}", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"LAST");

	web_submit_data("getCommonTrack_2",
		"Action=https://passport.yandex.ru/registration-validations/getCommonTrack",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token_2}", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"Name=track_id", "Value=", "ENDITEM",
		"LAST");

	web_submit_data("ask_v2_2",
		"Action=https://passport.yandex.ru/registration-validations/auth/additional_data/ask_v2",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=application/json",
		"Referer=https://passport.yandex.ru/",
		"Snapshot=t76.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=csrf_token", "Value={csrf_token_2}", "ENDITEM",
		"Name=origin", "Value=mail360", "ENDITEM",
		"Name=track_id", "Value=595e2be08cf63215b0f3420752935ca69c", "ENDITEM",
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=_connection_id",
		"RegExp=reqid=(.*?);",
		"LAST");

 
	web_reg_save_param_ex(
		"ParamName=_ckey",
		"LB=\"ckey\":\"",
		"RB=\"",
		"LAST");

	web_url("mail.yandex.ru",
		"URL=https://mail.yandex.ru/",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://sso.ya.ru/",
		"Snapshot=t81.inf",
		"Mode=HTML",
		"EXTRARES",
		"URL=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-bold.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/nanoislands-1d307024c5c4eafdedcf4b2d100910f1.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/mail-5043479c8ea725e7c0c29249ddd24bad.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/messages-dc005d1b737aa54db39c11c4b13287eb.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/old-efaed7dac6ac2faffcb3c69846860c25.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/left-c796292c8c308d22dce7ffccfe1d0b2c.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/ab69671de1bd8502995d-10.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/6ec4cffcd1bb52fe092a-4.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/d4f5c9f46269a0b41948-2.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/e922bb3520ef9b524448-5.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-medium.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/fa906c9a0907a40b7db6-1.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mg-theme/fonts/YS%20Text/text-regular.woff2", "Referer=https://yastatic.net/s3/psf/mail-liza-react-client/App-272b27658bfb99e3914f.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/fe972e381147ac026547-0.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/69c0d32fabe3fe06d0c6-28.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/60f648208e391de5ef2f-24.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/5bd45b6f976a30645a5a-33.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/2213e97c1da3c0868b22-45.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/1-402d650168a8a0489ae8.css", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/notification-center-e5e7baf05bcd505dc256.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/4fe266d1d78fb42a3cf9-42.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/8326df3e30cb5766128d-18.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/651118b267db18ec503b-3.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/0-73b72689fec0c6f7a381.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/ab8c88ef58beec999165-25.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/dc505ad8d19c8b93a518-22.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/d5cb5aa499ab6129d944-37.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/1-402d650168a8a0489ae8.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/53c0969e540074ad5d96-20.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/0-73b72689fec0c6f7a381.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/0ccaea0b251e53ff09b6-40.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/16903286c5ab61bac01b-39.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/4b09d1c5e2e20dc18262-47.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/direct-9d8a6c1e3300a69d56c1.js", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/notification-center-e5e7baf05bcd505dc256.js", "ENDITEM",
		"URL=https://yandex.ru/ads/system/context.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/d2541605b31d1683480b-46.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/subscriptions-1372a635e5b01ce24a3cb0bb1e245692.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/editor-949639c56475b1cfb2b674c25029378a.css", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-yapic/36777/0r-6/islands-200", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/compose-react-ed4a1667c03624783e34d592089e379b.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/compose-manager-eafaa0995b55e546ca1d30747b45ff9e.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/e29b2885ec8908c035a2-27.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/message-95c5b1c60e3a8b6d85722f2795e7f426.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/compose-9c6c4b23ec3d017d28037682092d8518.css", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/09166b971d68524f129f-23.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/dc22b778f507cf99af5f1fbaa09283ad-message.ogg", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/63d9be1e7c3864195c07-34.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/c0d191884b98355c8e4a-38.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/65301c385a1ae5aaff9b-36.js", "ENDITEM",
		"URL=https://yastatic.net/s3/liza/_/promo-7b50c08b4adcf927a62cda7964f60341.css", "ENDITEM",
		"URL=https://yastatic.net/s3/psf/mail-liza-react-client/react-tracing-460746e7d66b2fcf379e.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/5956674fd0fdd7c45be0.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/57bcfd9e2482bf6eab12.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/28c60da322306eea85f3.js", "ENDITEM",
		"URL=https://yastatic.net/s3/home/fonts/ys/3/text-variable-full.woff2", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/cc3eb7227602aea2a356.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/454b3fa45c64f15c3946.js", "ENDITEM",
		"URL=https://yastatic.net/safeframe-bundles/0.83/host.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/739a3f1b20a135fc8afd.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/0a36daf5e89dd66b60ce.js", "ENDITEM",
		"URL=https://yastatic.net/partner-code-bundles/1183758/b005959240c3440cc8c6.js", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5235281/ktLhRxtt8g7ddvNKc1viUw/wx150", "ENDITEM",
		"URL=https://yandex.ru/an/rtbcount/1VvVyZtp0Ma200000000U9nJVBhcOk7QbmMTXW7iBMMT4yxyikmxM9xE00IUC97GQL7XmR5jcOmCgOn0ySm0zWsP8F7IKWu6XjghGA5MHX0vap7cBqW10yD2Hf4s26ibdBKHH6rW1X9x6QUuoZ4S1SkSPGI9N6K4ITvbP91HPFZBE8k9WM4k4qZaBDD_8BZAv0Pals8IwEgE_nF0pi3mzuQMw6ajDeQ_J5mWovbPWMGlioAGdCeCqZQNsHnaDSXa3h3Lp161fgNvmHFQJZB3_7iLhF8kcFp9xE343t4uI_F_8s3thc2vyujz1mlJ0PR_CC1uaiLwsqLkHgk8DHTOMZ-r7p-tv5Itn4qMi4w63_OFuQotB22_BM0LFCdQmYm45hp0sW02Z3TPOIxuoWeoj8EjWMK2szERn_gkRzsrevDn1jkLmy4BsAQzU_Dynxwdcu9Nii4CFS3cVeAD-H4RZtEebLDsYO5dU5cv-K-uz4Hs66iMExkXeOMnkQd51dQc7UoC9zZ57x2llFPxpiTblSUDVh3pT71KJU1WNC01zE4AZYazR1j0n0uEnbiS646yWBE1UGNdJCODdDedE1alS3Azu6JymCduWvDn0HT8EzU1Fw8VGR70u93umw6H6yRg1BCENFtlS86xfQ5fXIC0GTNDMG00?", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5217787/WN3SgwtlkfmhkvjtUGwWlA/wx150", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/4936745/YYAB0graWta4Gxu3fJVPSw/y90", "ENDITEM",
		"URL=https://yandex.ru/an/rtbcount/1PeIe7i20dG200000000U9nJVBhcOk7QbmMTXW7iALqC4y_yifnmi3oT0GWyOIAXzQ5QZB5jcOmCgOn0ySm0zYDD8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aCXLHf3aNKO66GM6luopc1WOvZA1H9OoBG2IQvaYW29dcVu3mLKcHw38AoO1vXdtTGBO6HXEplSGFQt5nl2NYGla46QG0tgP5O7aL6QG4NEPpK7E0Dd20NO6SqIWQMb-y8Isaymmlry5gxmB9dyoEpZnGpp1Klt_24Y8OGNBXFlgErYO3h3yXm76aopMsovoCrf5hBd0qlgf_VYv9QUw9Mv2lChmmVuXdFMM1UJF1Qo29rbRc8N0WXTO6nOqD3ZSP8Kvu2ihoCmEjWQM2MnFRnxhkxvrruvEnXbiLmu7Bs2RzkxDyntxdcuANia6C_C0c_i9DkP7R3pEeLQvlgQMdk5bvUO_uT8JsM6iMUpiXeOMnkQc5XlOcNQmCvzW5t_0tltotCStUt_-Zlh1pjF1KJM1Wt41nu4_eYiuTfmNsW0YTd0mtkB02E45d0tCApXtC6xWP3h1oNo1a-a59-C7JiOVd8mBk83Xiu8BQCP7K2GmF9WdvDZ83MDrWbaCFqKTBt2tD3IjS0G0d0JDOW00?", "ENDITEM",
		"URL=https://favicon.yandex.net/favicon/bargipsy.com?size=32&stub=2", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5217787/WN3SgwtlkfmhkvjtUGwWlA/wy300", "ENDITEM",
		"URL=https://favicon.yandex.net/favicon/yandex.ru?size=32&stub=2", "ENDITEM",
		"URL=https://favicon.yandex.net/favicon/nuum.ru?size=32&stub=2", "ENDITEM",
		"URL=https://favicon.yandex.net/favicon/practicum.yandex.ru?size=32&stub=2", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5426325/U_BSGhSUoy3TfBxI1VDVIQ/x90", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5426325/U_BSGhSUoy3TfBxI1VDVIQ/y180", "ENDITEM",
		"URL=/u2709/favicon/png/main-favicon/32/0.png", "ENDITEM",
		"URL=https://static-mon.yandex.net/static/main.js?pid=yandex_mail", "ENDITEM",
		"URL=https://yastatic.net/daas/atom.js", "ENDITEM",
		"URL=https://yandex.ru/an/rtbcount/1TGNDIBo0MK200000000U9nJVBhcOk7QbmMTXW7iFdkBbv_vPVdkO7aw0n1umaH2itV-zezjosHaI6K4YcS6iF_P0X8lBULWOAYz2XHgPGIHCnbR_uCKC30iP0nAXB1MmbaRGTG6PY2nbt6Agnp3KR3CMKQGo5L6aEHTHWOPHOQ_ZBEO61ZcCe54pZBz1uAhJCU0x5TC0dSqTkG4i3CmnEGybJgjnSRmbuaBP3apAv3iPLO4abEPGThcCfk3h0QPp06scZaYqBGqFtX2sqbcc7-lWbNU1PC_cHsS-24EPsd-VmJitXKihV_PTx0m7M3v3mEC9rcijrtaPhIAM7E1fVLJ-_5pIqvrIzna0Uja-63_4CvwomBosm9MmPEiBSn2OC4Bh0qB6XeKRhB27F2L5MHc1ri3omIsfpUFzLtVkcj79-CCjYk7WnUmJNltvlcEVKyt1QzaWvbvWCtc11lp8pOUvr2hB1UdSF_midBpdt3fYUmmrYnsTaD32sDpKuiDx4mxs1bFi8i_O5zvxVUSZyjwZnlzOEVfuAYQmC6uW0FemHKSbmwnRW0HEpWORt5WXF02pWRc5Pmp6JTmQf_WPBp0oVI1a_479-C2Bf1UhWD_H3-2Oe11GVIRGoCtZDK9PWNy-EzmWRkbeMc58m3PDCol?", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5338229/EFowg_WDoaR-GL6LL8wWhQ/x90", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5338229/EFowg_WDoaR-GL6LL8wWhQ/y180", "ENDITEM",
		"URL=https://favicon.yandex.net/favicon/contract.gosuslugi.ru?size=32&stub=2", "ENDITEM",
		"URL=https://yandex.ru/an/rtbcount/1LOY8XZy0N0200000000U9nJVBhcOk7QbmMTXW7i6hSxbf_vPVdkO7aw0n1umaH2lRXDP6FRCXaPKXc1ufa1x1SkWiHBYpaO66gl0eLQ6K7aJCOSFP021eQ5Z2M7m0o6bN3MHf3K1cOWiPVnmXmvXgDWcREC896hZ239kumCCWeCVnbdCJ4mp6K2YInbMW0arp9504NEClq7WgjCXu4YhvW4D0pssmImCp2iNlzAwhGM6yDV9YwGGvXPWMGlioAGdCeCCc8kipd86I1REC3EO8u8D2tD3vxGTf8PvlUhO9LtmUHFPWSdVeWdMEh_7m7xPmNBcpiiErYO3h3yXm76aopMsovoCrf5hBd0qlgf_VYv9QUw9MwoGFpwmVuXdFMM1UJF1Qo29rbRc8N0WXTO6neuRhB2hF_A2ZAnWws1PGBRqvl7-gvltRMZat46svN3mGlOfhrxytp7lgURWbUomKmym6PpWetv4HkFSwXLgNDAX7zuMRdvJxZqH7OOQnOxkw6XXR6vgSK6TgOTxCmdsCKVi7U_FFVnpTwVlwD-iFDqS5HDu61Sm07qtWgEBotC6q343Wx6MnmOuRk0iu5v1USEnWsSarXES39Vu6JwmCduWvDn0HT8CzU1Fw8VGH70qE3tmg6H6yRg1BCEFFlaS86xfQ5fXIC0Vo7GxW00?", "ENDITEM",
		"URL=https://favicon.yandex.net/favicon/xn----9sbdzhj4bie6fq.xn--p1ai?size=32&stub=2", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5161428/oYuGE084W9V1H4RcmSBuRQ/x180", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5161428/oYuGE084W9V1H4RcmSBuRQ/y90", "ENDITEM",
		"URL=https://clck.yandex.ru/click/dtype=PS/project=search_mail/action=suggest-compose/product=web/uid={uid}/filed=to/field=to/suggest_used=yes/suggest_show=yes/pos=1/count=1/user_text=/search_text={login}%40yandex.ru/*https://mail.yandex.ru/?uid={uid}", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5332322/h5o2sLPcOrZR4fLznExXxQ/y90", "ENDITEM",
		"URL=https://avatars.mds.yandex.net/get-direct/5332322/h5o2sLPcOrZR4fLznExXxQ/x180", "ENDITEM",
		"URL=https://yandex.ru/an/rtbcount/1OuG4P7v0Mi200000000U9nJVBhcOk7QbmMTXW7iQpmgLftvPVdhO7aw0n1umaH2ENczv6BRCXaPKXc1ufa1x0xs8F7IGWu6XjghGA5MHX0vaz6XZXMaas4XuuxbB63MIZXh8qZl1cOWiPTHRaKomr6mp5b6aCXLHf3aNKO66GM6luopc1WOvZA1H9OoBG2IQvaYW29dcVu3mLKcHw38AoQ1A_yNVGzWPs1OqRTC-hGM6yDV9YwGGvX13kXbLWIIKvb1HinbDWSv0sGB1zWPp161fgNvmHFQJZB3_7uLhF8kcFp9xE343_44I_N_8o0XXXKizmwexc1XEi3o7mOOJx9ORxl8pMWLiUO2I-kdzkFdbfpgbhW9yIh31_k7SDPR5f0_5x0AdcHjOHO22zvaXTdybHLaM0TR0yi4jgStZ_LTtxfhHoVZ3BOhXuCNi4rxz-RvZdrFDmMlP8CPTe3D_GGRyoCs7kTGgxGA3x-0yB9oyvzmwOdiCDOiTdP3GmjZSrEB3UnCEzYPJx2BFs3lVddkuvkzFtz7_M3dwU2eci31k83Zm1_H5HmxpWjj014xE1XlSM04xGBE1kOLd3iODt1EOZd1oNo1a-a39-CFJiO5NC1WMS45DE4ZAEmP7imJScpaXh4wmIo6dwAE5xXR6ffME080WmdFJG00?", "ENDITEM",
		"LAST");

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
		"LAST");

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
		"LAST");

	lr_end_transaction("2_login",2);
	
	iterations=atoi(lr_eval_string("{X}"));
	
	for (i=1; i<=iterations; i++){
		sprintf(transactionName, "3_sendMessage_%d", i);
		
		lr_start_transaction(transactionName);
	
		web_reg_save_param_regexp(
			"ParamName=message_id",
			"RegExp=\"messageId\":\"(.*?)",
			"LAST");
		
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
			"LAST");
	
		web_convert_param("message_id",
			"SourceString={message_id}",
			"SourceEncoding=HTML",
			"TargetEncoding=URL",
			"LAST");
		
		web_convert_param("name",
			"SourceString={name}",
			"SourceEncoding=HTML",
			"TargetEncoding=URL",
			"LAST");
		
		web_reg_find("Fail=NotFound",
			 
			"Text/IC=\"status\":\"ok\"",
			"LAST");
	
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
			"LAST");
	
		web_reg_find("Fail=NotFound",
			 
			"Text/IC=\"status\":\"ok\"",
			"LAST");
		
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
			"LAST");

		lr_end_transaction(transactionName,2);
		
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
		"LAST");

	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Redirecting to https://360.yandex.ru/mail",
		"LAST");
	
	web_url("mail.yandex.ru_2", 
		"URL=https://mail.yandex.ru/?ncrnd=77275", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t265.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://mc.yandex.ru/metrika/advert.gif", "Referer=https://360.yandex.ru/mail/", "ENDITEM", 
		"LAST");

	lr_end_transaction("4_logOut",2);

 	return 0;
}
# 5 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\masha\\onedrive\\\344\356\352\363\354\345\355\362\373\\vugen\\scripts\\final9090\\\\combined_final9090.c" 2

