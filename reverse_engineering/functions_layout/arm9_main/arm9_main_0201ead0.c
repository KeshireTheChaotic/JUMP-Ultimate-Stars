
/* JUS-CLASS jus_Class_0209cac0::~jus_Class_0209cac0 [class-default] slot 0/1 of vtable 0209cac0;
   resets vtables (destructor) */

undefined4 * jus_Class_0209cac0::~jus_Class_0209cac0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[0x17];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  iVar2 = param_1[0x18];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  jus_Class_0209cc28::jus_Class_0209cc28(param_1);
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

