//释放存货记录

#include <stdlib.h>
#include "inventor.h"
void discard_inventory_record(Invrec *record) {
	//删除记录中的变体部分 
	 switch(record->type) {
	 	case SUBASSY:
		 		free(record->info.subassy->part);
		 		free(record->info.subassy);
		 		break;
	 	case PART:
	 		    free(record->info.part);
	 		    break;
	 }
	 //删除记录的主题部分
	 free(record); 
	
	
	
	
	
}
