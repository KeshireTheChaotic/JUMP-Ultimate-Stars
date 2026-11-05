
undefined4 FUN_02191a04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(DAT_021a9d20 + 0x18))(param_1 * 0x30);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_02053d2c(&DAT_021a9d68,iVar1,param_1);
  iVar2 = iVar1 + param_1 * 4;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    FUN_0219195c(iVar2);
    iVar2 = iVar2 + 0x2c;
  }
  DAT_021a9d64 = iVar1;
  return 0;
}

