
void FUN_02169344(int param_1)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x5c);
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
  iVar3 = *(int *)(iVar5 + 0x10);
  iVar2 = *(int *)(param_1 + 0x2c);
  *(int *)(iVar4 + 0xc) = *(int *)(iVar5 + 0xc) + *(int *)(param_1 + 0x28);
  *(int *)(iVar4 + 0x10) = iVar3 + iVar2;
  *(undefined2 *)(iVar5 + 0x30) = *(undefined2 *)(iVar4 + 0x30);
  *(undefined2 *)(iVar5 + 0x32) = *(undefined2 *)(iVar4 + 0x32);
  *(undefined2 *)(iVar5 + 0x2c) = *(undefined2 *)(iVar4 + 0x2c);
  *(undefined2 *)(iVar5 + 0x2e) = *(undefined2 *)(iVar4 + 0x2e);
  FUN_02169408(iVar5,(*(uint *)(iVar4 + 0x34) & 2) != 0);
  bVar6 = (*(uint *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x78) & 0x4000000) != 0;
  uVar1 = extraout_r1;
  if (bVar6) {
    uVar1 = 1;
  }
  if (!bVar6) {
    uVar1 = 0;
  }
  FUN_02169420(*(undefined4 *)(param_1 + 0xc),uVar1);
  *(uint *)(iVar5 + 0x34) = *(uint *)(iVar5 + 0x34) | *(uint *)(iVar4 + 0x34) & 0xc0;
  if ((*(uint *)(iVar4 + 0x34) & 0x1000) != 0) {
    *(undefined2 *)(iVar5 + 0x26) = 0;
    *(undefined2 *)(iVar5 + 0x24) = 0;
  }
  return;
}

