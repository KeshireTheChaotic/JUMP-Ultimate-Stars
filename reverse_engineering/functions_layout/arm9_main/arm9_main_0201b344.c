
/* JUS-CLASS jus_Class_02099cf8::~jus_Class_02099cf8 [class-default] slot 0/1 of vtable 02099cf8;
   resets vtables (destructor) */

undefined4 * jus_Class_02099cf8::~jus_Class_02099cf8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  uVar2 = param_1[0x11];
  iVar1 = FUN_0201a9ec(uVar2);
  if (iVar1 == 0) {
    FUN_0201a958(uVar2,1);
  }
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 4))();
  }
  ALObjectImp_020990e0::ALObjectImp_020990e0(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

