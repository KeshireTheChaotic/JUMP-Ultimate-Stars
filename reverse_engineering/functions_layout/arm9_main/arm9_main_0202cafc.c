
int FUN_0202cafc(int *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = DAT_020a0c6c + 1;
  DAT_020a0c6c = uVar1 & 7;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,(uVar1 & 7) * 4 + 0x20a1904);
  return DAT_020a0c6c * 4 + 0x20a1904;
}

