
int FUN_02063a2c(int param_1)

{
  int iVar1;
  int iVar2;
  int local_28;
  undefined2 local_24;
  ushort local_22;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 8);
  local_1c = *(int *)(iVar2 + 0x34) + (uint)*(ushort *)(param_1 + 0x34) * 8;
  local_20 = iVar2;
  iVar1 = FUN_02063af4(&local_20,&local_28,8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
    if ((*(short *)(param_1 + 0x36) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
      *(undefined2 *)(param_1 + 0x26) = local_24;
      *(int *)(param_1 + 0x28) = *(int *)(iVar2 + 0x34) + local_28;
    }
    *(uint *)(param_1 + 0x2c) = local_22 & 0xfff;
  }
  return iVar1;
}

