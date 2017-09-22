//Request0 Request1: value equals 0 means not require memory, equals 1 means require memory.
//Counter: if request has collision, update to select the other Cpu next time.
//Memory: data in this memory cell

bool HasCollision (auto Request0, auto Request1){
if ( Request0 && Request1 == 1){
    return true;
}
else return false;
}
Counter =0;
int set ( Data0, Data1, Memory, Request0, Request1,counter){
if (! HasCollision(Request0, Request1)){
    if(Request0 == 1){
    Memory = Data0;
}
if(Request1 == 1){
    Memory = Data1;
}
// if dose not have collision, just load the data of cpu which is require memory
}

       else {
    if (Counter == 0){
		
	Memory = Data 0;
					Counter = 1;
}
if(Counter ==1){
	
	Memory = Data 1;
					Counter = 0;
}
}

}
