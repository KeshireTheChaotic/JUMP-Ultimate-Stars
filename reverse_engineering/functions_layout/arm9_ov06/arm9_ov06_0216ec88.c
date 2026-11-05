
void FUN_0216ec88(int param_1,int param_2,int param_3,int param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  uVar1 = *(uint *)(iVar2 + 0x34);
  if (param_3 == 0) {
    uVar1 = uVar1 & 0xfffffffd;
  }
  else {
    uVar1 = uVar1 | 2;
  }
  *(uint *)(iVar2 + 0x34) = uVar1;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x78);
  if (param_4 == 0) {
    uVar1 = uVar1 & 0xfbffffff;
  }
  else {
    uVar1 = uVar1 | 0x4000000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x78) = uVar1;
  if (param_5 != '\0') {
    *(ushort *)(param_2 + 0x26) = *(ushort *)(param_2 + 0x26) | 0x10;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x40) = *(uint *)(*(int *)(param_1 + 0x10) + 0x40) | 8;
  return;
}

