#ifndef PHP_FOOL_APPLICATON_H
#define PHP_FOOL_APPLICATON_H


#define FOOL_APPLICATION_PROPERTY_NAME_INSTANCE     "_instance"
#define FOOL_APPLICATION_PROPERTY_NAME_DISPATCHER   "_dispatcher"
#define FOOL_APPLICATION_PROPERTY_NAME_LOADER       "_loader"


extern zend_class_entry *fool_application_ce;

zval* fool_application_instance(TSRMLS_D);

FOOL_STARTUP_MODULE(application);
#endif
