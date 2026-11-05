
/* JUS-CLASS jus_Class_02099cf8::jus_Class_02099cf8 [class-default] stores vtable 02099cf8 into
   *this (constructor) */

int * jus_Class_02099cf8::jus_Class_02099cf8
                (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  ALObjectImp_020990e0::ALObjectImp_020990e0(param_1,0);
  *param_1 = (int)&vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x10;
  local_10 = 0x2000;
  (**(code **)(*param_1 + 0xa0))(param_1,&local_10);
  FUN_02027de8(param_1,1);
  FUN_020282f4(param_1);
  iVar1 = jus_AllocDebug(param_1[0x14] << 4);
  param_1[0x11] = iVar1;
  iVar2 = jus_AllocDebug(8);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = jus_Class_02093ee4::jus_Class_02093ee4();
  }
  param_1[0x15] = iVar1;
  return param_1;
}

