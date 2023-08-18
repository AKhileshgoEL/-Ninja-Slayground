int dataTypes(string type) {
	if(type[0]=='I'){
		return 4 ;
	}else if(type[0]=='L'){
		return 8;
	}else if(type[0]=='F'){
		return 4;
	}else if(type[0]=='D'){
		return 8;
	}else{
		return 1;
	}
}

