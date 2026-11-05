
/* JUS-CLASS jus_Class_02095e30::~jus_Class_02095e30 [class-default] slot 0/1 of vtable 02095e30;
   resets vtables (destructor) */

undefined4 * jus_Class_02095e30::~jus_Class_02095e30(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  if (param_1[0xd] != 0) {
    iVar1 = FUN_0200fe80();
    if ((*(byte *)(iVar1 + 5) & 4) != 0) {
      uVar2 = param_1[0xd];
      iVar1 = FUN_0201a9ec(uVar2);
      if (iVar1 == 0) {
        FUN_0201a958(uVar2,1);
      }
    }
  }
  jus_Class_02095ea0::jus_Class_02095ea0(param_1);
  return param_1;
}

