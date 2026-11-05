
void FUN_0217df88(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  if (*(byte *)(param_1 + 0x81) == 0) {
    if (*(byte *)(*(int **)(param_1 + 0x24) + 0xe) < 2) {
      *(undefined1 *)(param_1 + 0x105) = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
      return;
    }
    cVar2 = *(char *)(param_1 + 0x82);
    iVar10 = 0;
    if (cVar2 == '\0') {
      iVar3 = **(int **)(param_1 + 0x24);
      if (iVar3 == 0) {
        iVar7 = -1;
        iVar3 = -1;
      }
      else {
        iVar7 = *(int *)(iVar3 + 0x60);
        iVar3 = *(int *)(iVar3 + 100);
      }
      if ((iVar3 < iVar7 >> 1) &&
         (iVar3 = FUN_021792a0(*(undefined4 *)(param_1 + 0x2c)), iVar3 != 0)) {
        cVar2 = '\x01';
      }
      else {
        iVar3 = FUN_021792fc(*(undefined4 *)(param_1 + 0x2c));
        if (iVar3 == 0) {
          iVar3 = FUN_02179130(*(undefined4 *)(param_1 + 0x2c),0x22);
          if ((iVar3 == 0) || ((*(uint *)(*(int *)(param_1 + 0x24) + 0x28) & 0x800000) == 0)) {
            cVar2 = '\0';
          }
          else {
            cVar2 = '\x03';
          }
        }
        else {
          cVar2 = '\x02';
        }
      }
    }
    switch(cVar2) {
    case '\0':
      iVar7 = **(int **)(param_1 + 0x24);
      iVar3 = 0;
      while (iVar10 = iVar3, iVar10 == 0) {
        puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x14);
        while ((iVar3 = iVar10, puVar8 != (undefined4 *)0x0 &&
               (((iVar3 = puVar8[2], iVar7 == iVar3 || (*(int *)(iVar3 + 100) < 1)) ||
                (uVar4 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4)), (uVar4 & 1) == 0))))) {
          puVar8 = (undefined4 *)*puVar8;
        }
      }
      break;
    case '\x01':
      iVar10 = 0;
      iVar3 = 0;
      for (puVar8 = (undefined4 *)(*(int **)(param_1 + 0x24))[5]; puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        iVar7 = puVar8[2];
        if (((**(int **)(param_1 + 0x24) != iVar7) &&
            (iVar9 = *(int *)(iVar7 + 100), iVar3 <= iVar9)) &&
           ((iVar3 != iVar9 ||
            ((iVar10 == 0 || (*(int *)(iVar10 + 0x60) - iVar3 <= *(int *)(iVar7 + 0x60) - iVar3)))))
           ) {
          iVar3 = iVar9;
          iVar10 = iVar7;
        }
      }
      break;
    case '\x02':
      iVar10 = 0;
      iVar3 = -0x80;
      for (puVar8 = (undefined4 *)(*(int **)(param_1 + 0x24))[5]; puVar8 != (undefined4 *)0x0;
          puVar8 = (undefined4 *)*puVar8) {
        iVar7 = puVar8[2];
        if (**(int **)(param_1 + 0x24) != iVar7) {
          iVar5 = *(int *)(iVar7 + 100);
          bVar11 = iVar5 == 0;
          iVar9 = iVar5;
          iVar6 = iVar5;
          if (0 < iVar5) {
            iVar6 = (int)*(char *)(iVar7 + 0xc6);
            iVar9 = iVar6 - iVar3;
            bVar11 = iVar6 == iVar3;
          }
          if (!bVar11 && iVar9 < 0 == (0 < iVar5 && SBORROW4(iVar6,iVar3))) {
            iVar3 = iVar6;
            iVar10 = iVar7;
          }
        }
      }
      if (iVar3 < 0) {
        iVar10 = 0;
      }
      break;
    case '\x03':
      puVar8 = (undefined4 *)(*(int **)(param_1 + 0x24))[5];
      while ((iVar10 = 0, puVar8 != (undefined4 *)0x0 &&
             (((iVar10 = puVar8[2], **(int **)(param_1 + 0x24) == iVar10 ||
               (*(int *)(iVar10 + 100) < 0)) || ((*(uint *)(iVar10 + 0x68) & 0x800000) == 0))))) {
        puVar8 = (undefined4 *)*puVar8;
      }
    }
    if (iVar10 == 0) {
      *(undefined1 *)(param_1 + 0x105) = 1;
      *(undefined1 *)(param_1 + 0x81) = 0;
      return;
    }
    bVar1 = *(byte *)(iVar10 + 0xc3);
    iVar3 = *(int *)(param_1 + 0x18);
    *(ushort *)(iVar3 + 0xc) = (ushort)*(byte *)(iVar10 + 0xc2);
    *(ushort *)(iVar3 + 0xe) = (ushort)bVar1;
    *(undefined1 *)(iVar3 + 0x10) = 1;
    *(undefined1 *)(iVar3 + 0x11) = 4;
  }
  else if (((*(uint *)(*(int *)(param_1 + 0x24) + 0x24) & 2) != 0) ||
          (7 < *(byte *)(param_1 + 0x81))) {
    *(undefined1 *)(param_1 + 0x105) = 1;
    *(undefined1 *)(param_1 + 0x81) = 0;
    *(undefined1 *)(param_1 + 0x82) = 0;
    return;
  }
  *(char *)(param_1 + 0x81) = *(char *)(param_1 + 0x81) + '\x01';
  return;
}

