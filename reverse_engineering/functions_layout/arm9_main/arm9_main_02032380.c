
/* JUS-CLASS jus_Class_020941f0::~jus_Class_020941f0 [class-default] slot 0/1 of vtable 020941f0;
   resets vtables (destructor) */

undefined4 * jus_Class_020941f0::~jus_Class_020941f0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    iVar1 = FUN_0201a9ec(iVar2);
    if (iVar1 == 0) {
      FUN_0201a958(iVar2,1);
    }
    param_1[3] = 0;
  }
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

