
int FUN_0202df28(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = DAT_020a0c64 + 1;
  DAT_020a0c64 = uVar1 & 7;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(uVar1 & 7) * 4 + 0x20a1944);
  return DAT_020a0c64 * 4 + 0x20a1944;
}

