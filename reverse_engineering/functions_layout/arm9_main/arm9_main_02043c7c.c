
void FUN_02043c7c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  
  piVar8 = *(int **)(param_2 + 0x4c);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x74))();
  if (((iVar2 == 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x78))(), iVar2 == 0)) &&
     (iVar2 = (**(code **)(*piVar8 + 0x78))(), iVar2 != 0)) {
    iVar2 = 0;
    for (uVar10 = 0; uVar6 = *(uint *)(*(int *)(param_2 + 0x1c) + 4), uVar10 < uVar6;
        uVar10 = uVar10 + 1) {
      iVar3 = FUN_02044e78(param_2,uVar10);
      iVar2 = (int)(char)(&DAT_0209d81c)[*(byte *)(iVar3 + 2)] * (uint)*(byte *)(iVar3 + 3) + iVar2;
    }
    iVar2 = (iVar2 * 3 + uVar6 * 2) * 2;
    iVar3 = FUN_0201a228(iVar2);
    iVar9 = 0;
    for (uVar10 = 0; uVar10 < *(uint *)(*(int *)(param_2 + 0x1c) + 4); uVar10 = uVar10 + 1) {
      puVar4 = (ushort *)FUN_02044e78(param_2,uVar10);
      *(short *)(iVar3 + uVar10 * 2) =
           ((short)iVar9 + (short)*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4)) * 2;
      *(short *)(iVar3 + (uint)(*(ushort *)(iVar3 + uVar10 * 2) >> 1) * 2) = (short)iVar9;
      iVar9 = iVar9 + 1;
      uVar6 = (uint)*puVar4;
      for (uVar13 = 0; uVar13 < *(byte *)((int)puVar4 + 3); uVar13 = uVar13 + 1) {
        cVar12 = '\0';
        uVar11 = (uint)(byte)puVar4[1];
        while (uVar11 != 0) {
          iVar7 = iVar9 + *(int *)(*(int *)(param_2 + 0x1c) + 4);
          *(short *)(iVar3 + iVar7 * 2) = (short)uVar6;
          iVar7 = iVar3 + iVar7 * 2;
          *(char *)(iVar7 + 2) = cVar12 << 3;
          *(char *)(iVar7 + 3) = (char)((uVar13 << 0x1b) >> 0x18);
          *(char *)(iVar7 + 5) = (char)(uVar6 >> 0xc);
          *(char *)(iVar7 + 4) = (char)((uVar6 >> 10 & 3) << 4);
          if (uVar11 < 4) {
            if (uVar11 < 2) {
              cVar12 = cVar12 + '\x01';
              uVar6 = uVar6 + 1;
              uVar11 = uVar11 - 1;
            }
            else {
              cVar12 = cVar12 + '\x02';
              uVar6 = uVar6 + 2;
              *(byte *)(iVar7 + 4) = *(byte *)(iVar7 + 4) | 4;
              uVar11 = uVar11 - 2;
            }
          }
          else {
            cVar12 = cVar12 + '\x04';
            uVar6 = uVar6 + 4;
            *(byte *)(iVar7 + 4) = *(byte *)(iVar7 + 4) | 5;
            uVar11 = uVar11 - 4;
          }
          iVar9 = iVar9 + 3;
        }
      }
      uVar6 = (uint)(*(ushort *)(iVar3 + uVar10 * 2) >> 1);
      uVar1 = FUN_0200d338(iVar9 - (uint)*(ushort *)(iVar3 + uVar6 * 2),3);
      *(undefined2 *)(iVar3 + uVar6 * 2) = uVar1;
    }
    iVar9 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
    if (iVar9 == 0) {
      iVar9 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
      if (iVar9 == 0x53444c43) {
        FUN_020436f4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4),
                     iVar2,iVar3);
      }
      else {
        if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
        }
        iVar9 = FUN_0201a228(0x14);
        uVar5 = 0;
        if (iVar9 != 0) {
          uVar5 = jus_TagCLDS::jus_TagCLDS
                            (iVar9,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4),iVar3,iVar2,1);
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
      }
    }
    else {
      iVar9 = FUN_0201a228(0x14);
      uVar5 = 0;
      if (iVar9 != 0) {
        uVar5 = jus_TagCLDS::jus_TagCLDS
                          (iVar9,*(undefined4 *)(*(int *)(param_2 + 0x1c) + 4),iVar3,iVar2,1);
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar5;
    }
    iVar2 = FUN_0201a9ec(iVar3);
    if (iVar2 == 0) {
      FUN_0201a958(iVar3,1);
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
    if ((iVar2 == 0) && (iVar2 = *(int *)(param_2 + 0x1c), *(char *)(iVar2 + 0xc) != '\0')) {
      iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
      if (iVar3 == 0) {
        FUN_020436f4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar2 + 4),
                     *(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 8));
      }
      else {
        iVar3 = FUN_0201a228(0x14);
        uVar5 = 0;
        if (iVar3 != 0) {
          uVar5 = jus_TagCLDS::jus_TagCLDS
                            (iVar3,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                             *(undefined4 *)(iVar2 + 0x10),1);
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
      }
    }
    else {
      iVar3 = *(int *)(param_2 + 0x1c);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
      if (iVar2 == 0) {
        FUN_02043720(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(iVar3 + 4),
                     *(undefined4 *)(iVar3 + 8));
      }
      else {
        iVar2 = FUN_0201a228(0x14);
        uVar5 = 0;
        if (iVar2 != 0) {
          uVar5 = jus_TagCLDS::jus_TagCLDS
                            (iVar2,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),0,0);
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar5;
      }
    }
  }
  return;
}

