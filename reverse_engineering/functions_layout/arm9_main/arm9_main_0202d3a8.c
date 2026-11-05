
void FUN_0202d3a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  
  FUN_0201899c(auStack_1c);
  MIi_CpuCopy16(param_3,auStack_1c,0xc);
  local_20 = *(undefined4 *)(param_1 + 0x6c);
  (**(code **)(*DAT_020a1018 + 0x34))(DAT_020a1018,auStack_1c,&local_20);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x68) + 0x38))(*(int **)(param_1 + 0x68),param_2);
  (**(code **)(*DAT_020a1018 + 8))(DAT_020a1018,auStack_1c,auStack_1c,uVar1);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x24))(*(int **)(param_1 + 0x68),param_2,auStack_1c);
  return;
}

