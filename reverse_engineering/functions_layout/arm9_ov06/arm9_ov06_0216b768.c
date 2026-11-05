
int FUN_0216b768(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar7 + 0x10);
  iVar6 = *(int *)(iVar7 + 0xc);
  iVar1 = *(int *)(param_3 + 4);
  iVar5 = iVar6 - *(int *)(*(int *)(param_2 + 0x10) + 0x88);
  iVar2 = iVar1;
  if (iVar1 < iVar5) {
    iVar2 = iVar5 + 0x400;
  }
  iVar4 = iVar6 + *(int *)(*(int *)(param_2 + 0x10) + 0x8c);
  if (iVar1 < iVar5) {
    *(int *)(param_3 + 4) = iVar2;
  }
  else if (iVar4 < iVar2) {
    *(int *)(param_3 + 4) = iVar4 + -0x400;
  }
  iVar2 = FUN_020836b4(*(undefined4 *)(param_3 + 4),*(int *)(param_3 + 8) + -0x100,iVar5,iVar6,
                       param_4);
  if (iVar2 == 0) {
    uVar3 = FUN_0216e780(param_2,param_3 + 4);
    *(undefined4 *)(param_3 + 4) = uVar3;
  }
  if (*(char *)(param_3 + 0x1c) == '\0') {
    *(int *)(param_3 + 0xc) = *(int *)(param_3 + 4) - *(int *)(iVar7 + 0xc);
    iVar1 = *(int *)(param_3 + 8);
    iVar2 = *(int *)(iVar7 + 0x10);
  }
  else {
    *(int *)(param_3 + 0xc) = *(int *)(iVar7 + 0xc) - *(int *)(param_3 + 4);
    iVar1 = *(int *)(iVar7 + 0x10);
    iVar2 = *(int *)(param_3 + 8);
  }
  *(int *)(param_3 + 0x10) = iVar1 - iVar2;
  FUN_0216b514(param_1,param_2,param_3);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),FUN_0216ceec);
  iVar2 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 100) = iVar2;
  *(byte *)(iVar2 + 6) = *(byte *)(iVar2 + 6) | 2;
  *(byte *)(*(int *)(param_1 + 100) + 6) = *(byte *)(*(int *)(param_1 + 100) + 6) | 4;
  *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
  FUN_0207d020(*(undefined4 *)(**(int **)(param_1 + 100) + 0x10),0x800);
  FUN_0216ec88(**(undefined4 **)(param_1 + 100),param_1,0,1,
               (*(uint *)(*(int *)(param_1 + 8) + 8) & 0x100) != 0);
  FUN_0216b8f4(**(undefined4 **)(param_1 + 100),0);
  iVar2 = *(int *)(**(int **)(param_1 + 100) + 0x10);
  *(uint *)(iVar2 + 0x78) = *(uint *)(iVar2 + 0x78) & 0xffefffff;
  return param_1;
}

