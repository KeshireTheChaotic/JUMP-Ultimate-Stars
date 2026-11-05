
void FUN_02161098(int param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  *(short *)(iVar1 + 0x584) = param_2 + -4;
  *(short *)(iVar1 + 0x586) = param_3 + -4;
  MIi_CpuClear32(0,iVar1 + 0x42c,0x158);
  *(undefined4 *)(iVar1 + 0x424) = 0;
  *(undefined4 *)(iVar1 + 0x420) = 0;
  *(undefined4 *)(iVar1 + 0x428) = 0;
  *(undefined4 *)(iVar1 + 0x58c) = 1;
  return;
}

