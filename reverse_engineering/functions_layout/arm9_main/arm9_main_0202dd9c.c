
int FUN_0202dd9c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = DAT_020a0ddc + 1;
  DAT_020a0ddc = uVar1 & 7;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(uVar1 & 7) * 4 + 0x20a1924);
  return DAT_020a0ddc * 4 + 0x20a1924;
}

