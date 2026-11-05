
void FUN_0215bfc4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    if ((*(int **)(iVar3 + 0x1e8))[iVar4 + 1] != 0) {
      bVar1 = *(byte *)(**(int **)(iVar3 + 0x1e8) + 0x41);
      uVar2 = bVar1 & 0x1f;
      if ((*(uint *)(&DAT_020b0d48 + (uint)(bVar1 >> 5) * 4 + iVar4 * 0xc) & 1 << uVar2) == 0) {
        FUN_020718b0((uint)bVar1,iVar4,uVar2,0,param_4);
        *(char *)(iVar3 + 0x4d2) = (char)iVar4;
        *(undefined1 *)(iVar3 + 0x4d3) = 0x18;
        *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(*(int *)(iVar3 + 0x1e8) + iVar4 * 4 + 4);
        uVar5 = *(undefined4 *)(**(int **)(iVar3 + 0x1e8) + 0x34);
        uVar6 = *(undefined4 *)((*(int **)(iVar3 + 0x1e8))[iVar4 + 1] + 0x34);
        FUN_0215ceec(iVar3);
        FUN_0215ccf0(iVar3,uVar5,uVar6,0,1);
        FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 0x30) + 4),FUN_0215c0d0);
      }
      *(undefined4 *)(*(int *)(iVar3 + 0x1e8) + iVar4 * 4 + 4) = 0;
      return;
    }
  }
  if (*(char *)(iVar3 + 0x4ef) == '\0') {
    FUN_0215bdd4(iVar3);
    return;
  }
  return;
}

