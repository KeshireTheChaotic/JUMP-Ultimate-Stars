
void FUN_02080510(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  
  for (puVar9 = *(undefined4 **)(param_1 + 0xa8); puVar9 != (undefined4 *)0x0;
      puVar9 = (undefined4 *)*puVar9) {
    iVar4 = puVar9[2];
    if ((*(byte *)(iVar4 + 0x10) & 0x20) == 0) {
      iVar2 = *(int *)(*(int *)(iVar4 + 0xc) + 0x1c);
      iVar8 = *(int *)(iVar2 + 0xc);
      iVar7 = *(int *)(iVar8 + 0x5c);
      iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 8) + 0x1c) + 0xc) + 0x5c);
      iVar10 = *(int *)(iVar7 + 0xc);
      iVar6 = *(int *)(iVar1 + 0xc);
      if (iVar6 == iVar10) {
        iVar4 = *(int *)(iVar1 + 0x10);
        iVar2 = *(int *)(iVar7 + 0x10);
      }
      if (iVar6 != iVar10 || iVar4 != iVar2) {
        if ((*(uint *)(iVar1 + 0x34) & 0x200) == 0) {
          bVar11 = iVar6 - iVar10 < 0;
          if (bVar11) {
            iVar6 = -0x80;
          }
          sVar5 = (short)iVar6;
          if (!bVar11) {
            sVar5 = 0x80;
          }
          if (*(int *)(iVar1 + 0x10) - *(int *)(iVar7 + 0x10) < 0) {
            sVar3 = -0x80;
          }
          else {
            sVar3 = 0x60;
          }
          *(short *)(iVar1 + 0x30) = *(short *)(iVar1 + 0x30) + sVar5;
          *(short *)(iVar1 + 0x32) = *(short *)(iVar1 + 0x32) + sVar3;
        }
      }
      else {
        FUN_020804e8(iVar1,iVar6 + 1,iVar4,iVar6,param_4);
        FUN_020804e8(*(undefined4 *)(iVar8 + 0x5c),*(int *)(iVar7 + 0xc) + -1,
                     *(undefined4 *)(iVar7 + 0x10));
      }
    }
  }
  return;
}

