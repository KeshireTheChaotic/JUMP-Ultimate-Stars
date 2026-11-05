
int FUN_0202cc38(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = DAT_020a0ca4 + 1;
  DAT_020a0ca4 = uVar1 & 7;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(uVar1 & 7) * 2 + 0x20a16a0);
  return DAT_020a0ca4 * 2 + 0x20a16a0;
}

