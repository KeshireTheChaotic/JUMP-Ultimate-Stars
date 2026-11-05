
undefined4 FUN_0217ed34(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0217575c();
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_02176654(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if ((int)(uint)*(ushort *)(DAT_021a7d10 + 0x610) < param_3) {
    return 0;
  }
  FUN_0217e930(param_1,param_2,param_3,0);
  if (*(code **)(DAT_021a7d10 + 0x600) != (code *)0x0) {
    (**(code **)(DAT_021a7d10 + 0x600))(param_3,param_1);
  }
  return 1;
}

