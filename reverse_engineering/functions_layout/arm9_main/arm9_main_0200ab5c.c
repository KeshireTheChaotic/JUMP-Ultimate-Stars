
undefined4 *
FUN_0200ab5c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 uStack_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *param_1 = param_2;
  local_24 = &uStack_8;
  local_28 = param_2;
  uStack_20 = param_4;
  uStack_8 = param_3;
  uStack_4 = param_4;
  puVar1 = (undefined4 *)jus_AllocDebug(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &jus_Class_020935c4::vftable;
    puVar1[1] = 1;
    puVar1[2] = 1;
    *puVar1 = &jus_Class_020935dc::vftable;
    puVar1[3] = param_2;
  }
  param_1[1] = puVar1;
  local_28 = 0;
  FUN_0200acc4(&local_28);
  return param_1;
}

