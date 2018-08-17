void updateEnv ( char * str )
 { 
	char *tmp;
	int buffer[10];
	buffer[10]=1; 
	tmp = getenv (" MYENV ") ;
	if ( tmp != NULL ) 
	 strcpy ( str , tmp ); 

 }
