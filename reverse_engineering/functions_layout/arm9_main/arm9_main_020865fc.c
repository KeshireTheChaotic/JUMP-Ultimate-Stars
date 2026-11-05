
void FUN_020865fc(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_2 + 0x30);
  iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
  iVar5 = *(short *)(iVar3 + 0x1a) * 0x18;
  iVar6 = *(int *)(param_1 + 0x18);
  *(int *)(iVar6 + iVar5) = *(int *)(iVar4 + 0xc) + (int)*(short *)(iVar3 + 0x1c);
  piVar2 = (int *)(iVar6 + iVar5);
  piVar2[1] = *(int *)(iVar4 + 0x10) + (int)*(short *)(iVar3 + 0x1e);
  *(byte *)((int)piVar2 + 0x15) = *(byte *)((int)piVar2 + 0x15) & 0xfc;
  if ((short)piVar2[4] != -1) {
    iVar5 = (short)piVar2[4] * 0x18 + *(int *)(param_1 + 0x18);
    *(byte *)(iVar5 + 0x15) = *(byte *)(iVar5 + 0x15) & 0xfd;
    *(undefined2 *)(iVar5 + 0x12) = 0xffff;
    *(undefined2 *)(piVar2 + 4) = 0xffff;
  }
  if (*(short *)((int)piVar2 + 0x12) != -1) {
    iVar5 = *(short *)((int)piVar2 + 0x12) * 0x18 + *(int *)(param_1 + 0x18);
    *(byte *)(iVar5 + 0x15) = *(byte *)(iVar5 + 0x15) & 0xfe;
    *(undefined2 *)(iVar5 + 0x10) = 0xffff;
    *(undefined2 *)((int)piVar2 + 0x12) = 0xffff;
  }
  if ((*(byte *)((int)piVar2 + 0x15) & 4) == 0) {
    return;
  }
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(iVar3 + 0x18); iVar5 = iVar5 + 1) {
    sVar1 = *(short *)(*(int *)(iVar3 + 8) + iVar5 * 2);
    piVar8 = (int *)(sVar1 * 0x18 + *(int *)(param_1 + 0x18));
    if ((-0x101 < piVar2[1] - piVar8[1]) && (piVar2[1] - piVar8[1] < 0x101)) {
      iVar7 = *piVar2;
      iVar6 = *piVar8;
      bVar9 = SBORROW4(iVar6,iVar7);
      iVar4 = iVar6 - iVar7;
      if (iVar6 < iVar7) {
        iVar4 = iVar6 + piVar8[2] + 0x100;
        bVar9 = SBORROW4(iVar7,iVar4);
        iVar4 = iVar7 - iVar4;
      }
      if (iVar4 < 0 == bVar9) {
        bVar9 = SBORROW4(iVar7,iVar6);
        iVar4 = iVar7 - iVar6;
        if (iVar7 < iVar6) {
          iVar4 = iVar7 + piVar2[2] + 0x100;
          bVar9 = SBORROW4(iVar6,iVar4);
          iVar4 = iVar6 - iVar4;
        }
        if (iVar4 < 0 != bVar9) {
          *(byte *)((int)piVar2 + 0x15) = *(byte *)((int)piVar2 + 0x15) | 2;
          *(byte *)((int)piVar8 + 0x15) = *(byte *)((int)piVar8 + 0x15) | 1;
          *(short *)((int)piVar2 + 0x12) = sVar1;
          *(undefined2 *)(piVar8 + 4) = *(undefined2 *)(iVar3 + 0x1a);
        }
      }
      else {
        *(byte *)((int)piVar2 + 0x15) = *(byte *)((int)piVar2 + 0x15) | 1;
        *(byte *)((int)piVar8 + 0x15) = *(byte *)((int)piVar8 + 0x15) | 2;
        *(short *)(piVar2 + 4) = sVar1;
        *(undefined2 *)((int)piVar8 + 0x12) = *(undefined2 *)(iVar3 + 0x1a);
      }
    }
  }
  return;
}

