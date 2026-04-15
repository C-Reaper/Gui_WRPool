#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/WRPool.h"

WRPool wrp;

void Resize(AlxWindow* w){
	WRPool_Resize(&wrp,w->Width,w->Height);
}
void Setup(AlxWindow* w){
	wrp = WRPool_New(w->Width,w->Height,0.99f);
	Resize(w);
}
void Update(AlxWindow* w){
	if(Stroke(ALX_MOUSE_L).DOWN){
		WRPool_Interact(&wrp,w->MouseX,w->MouseY,500.0f);
	}

	Clear(BLACK);

	WRPool_Render(&wrp,WINDOW_STD_ARGS,0.0f,0.0f);
}
void Delete(AlxWindow* w){
	WRPool_Free(&wrp);
}

int main(){
    if(CreateX("Water Ripple Pool",1900,1000,1,1,Setup,Update,Delete,Resize))
        Start();
    return 0;
}