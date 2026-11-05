
void FUN_020436f4(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 4) = param_2 & 0xffff;
  uVar1 = FUN_0201a228(param_3 & 0xfffffffe);
  *(undefined4 *)(param_1 + 8) = uVar1;
  MIi_CpuCopy16(param_4,*(undefined4 *)(param_1 + 8),param_3);
  *(uint *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}

