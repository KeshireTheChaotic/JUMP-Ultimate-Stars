
/* JUS-CLASS ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0 [class-source-file] stores vtable 0209c1e0
   into *this (constructor) */

undefined4 *
ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0
          (undefined4 *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  ALObjectImp_020990e0::ALObjectImp_020990e0(param_1,DAT_020a0ed4,&DAT_020a0c34,param_4,param_4);
  *param_1 = &vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = DAT_020a0e68;
  DAT_020a0cf8 = DAT_020a0cf8 + 1;
  iVar1 = jus_AllocDebug(0x30);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_0209647c::jus_Class_0209647c();
  }
  param_1[0x14] = uVar2;
  uVar2 = (*param_2)(param_1);
  param_1[0x19] = uVar2;
  return param_1;
}

