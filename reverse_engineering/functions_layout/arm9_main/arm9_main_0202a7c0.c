
undefined4 * FUN_0202a7c0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)FUN_02019e70();
  FUN_02019edc();
  if ((*(byte *)(param_1 + 9) & 3) >> 1 == 0) {
    (**(code **)(*param_1 + 0x34))(&local_14);
    *puVar1 = local_14;
    (**(code **)(*param_1 + 0x38))(&local_18);
    puVar1[3] = local_18;
  }
  else if ((*(byte *)(param_1 + 9) & 7) >> 2 == 0) {
    FUN_02019f00(puVar1,param_1[0xc]);
  }
  else {
    FUN_02019f00(puVar1,param_1[0xc]);
    FUN_02018ac8(puVar1,param_1 + 0xd);
    FUN_02018ac8(puVar1 + 2,param_1 + 0xe);
    FUN_02018ac8(puVar1 + 1,param_1 + 0xd);
    FUN_02018ac8(puVar1 + 3,param_1 + 0xe);
  }
  puVar1[4] = param_1[3];
  puVar1[5] = param_1[4];
  *(char *)((int)param_1 + 0x25) = (char)param_1[9];
  return puVar1;
}

