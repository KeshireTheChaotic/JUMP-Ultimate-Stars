
void FUN_0200a328(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  bool bVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined2 *puVar15;
  int iVar16;
  byte *pbVar17;
  
  iVar9 = 0x13;
  puVar15 = param_1;
  do {
    uVar2 = *param_2;
    param_2 = param_2 + 1;
    *puVar15 = uVar2;
    puVar15 = puVar15 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (*(char *)(param_3 + 5) == '\0') {
    return;
  }
  uVar4 = (uint)*(byte *)(param_1 + 2);
  uVar10 = uVar4;
  if (uVar4 < *(byte *)(param_3 + 4)) {
    uVar10 = (uint)*(byte *)(param_3 + 4);
  }
  iVar6 = (int)(short)param_1[1] - (int)*(short *)(param_3 + 2);
  iVar9 = uVar10 + iVar6;
  if (0x20 < iVar9) {
    iVar9 = 0x20;
  }
  while ((int)uVar4 < iVar9) {
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    *(undefined1 *)((int)param_1 + uVar4 + 5) = 0;
    uVar4 = (uint)*(byte *)(param_1 + 2);
  }
  pbVar5 = (byte *)((int)param_1 + 5);
  iVar16 = (uint)*(byte *)(param_3 + 4) + iVar6;
  if (iVar16 < iVar9) {
    iVar9 = iVar16;
  }
  pbVar17 = (byte *)(param_3 + 5);
  pbVar11 = pbVar17 + (int)(pbVar5 + iVar9 + (-iVar6 - (int)pbVar5));
  pbVar13 = pbVar5 + iVar9;
  pbVar12 = pbVar11;
  while ((pbVar5 < pbVar13 && (pbVar17 < pbVar12))) {
    pbVar7 = pbVar13 + -1;
    pbVar12 = pbVar12 + -1;
    if (*pbVar7 < *pbVar12) {
      pbVar13 = pbVar13 + -2;
      bVar1 = *pbVar13;
      while (bVar1 == 0) {
        pbVar13 = pbVar13 + -1;
        bVar1 = *pbVar13;
      }
      while (pbVar13 != pbVar7) {
        *pbVar13 = *pbVar13 - 1;
        pbVar13 = pbVar13 + 1;
        *pbVar13 = *pbVar13 + 10;
      }
    }
    *pbVar7 = *pbVar7 - *pbVar12;
    pbVar13 = pbVar7;
  }
  iVar9 = (int)pbVar11 - (int)pbVar17;
  if (iVar9 < (int)(uint)*(byte *)(param_3 + 4)) {
    bVar3 = false;
    if (*pbVar11 < 5) {
      bVar3 = true;
    }
    else if (*pbVar11 == 5) {
      do {
        pbVar11 = pbVar11 + 1;
        if ((byte *)(param_3 + 5 + (uint)*(byte *)(param_3 + 4)) <= pbVar11) {
          pbVar13 = pbVar5 + iVar6 + iVar9 + -1;
          if ((*pbVar13 & 1) != 0) {
            bVar3 = true;
          }
          goto LAB_0200a41c;
        }
      } while (*pbVar11 == 0);
      goto LAB_0200a452;
    }
LAB_0200a41c:
    if (bVar3) {
      if (*pbVar13 == 0) {
        pbVar11 = pbVar13 + -1;
        bVar1 = *pbVar11;
        while (bVar1 == 0) {
          pbVar11 = pbVar11 + -1;
          bVar1 = *pbVar11;
        }
        while (pbVar11 != pbVar13) {
          *pbVar11 = *pbVar11 - 1;
          pbVar11 = pbVar11 + 1;
          *pbVar11 = *pbVar11 + 10;
        }
      }
      *pbVar13 = *pbVar13 - 1;
    }
  }
LAB_0200a452:
  bVar1 = *pbVar5;
  pbVar13 = pbVar5;
  while (bVar1 == 0) {
    pbVar13 = pbVar13 + 1;
    bVar1 = *pbVar13;
  }
  if (pbVar5 < pbVar13) {
    iVar9 = (int)pbVar13 - (int)pbVar5;
    param_1[1] = param_1[1] - ((ushort)iVar9 & 0xff);
    pbVar11 = pbVar5 + *(byte *)(param_1 + 2);
    for (; pbVar13 < pbVar11; pbVar13 = pbVar13 + 1) {
      *pbVar5 = *pbVar13;
      pbVar5 = pbVar5 + 1;
    }
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) - (char)iVar9;
  }
  pcVar8 = (char *)((int)param_1 + 5);
  pcVar14 = pcVar8 + *(byte *)(param_1 + 2);
  do {
    if (pcVar14 <= pcVar8) break;
    pcVar14 = pcVar14 + -1;
  } while (*pcVar14 == '\0');
  *(char *)(param_1 + 2) = ((char)pcVar14 - (char)pcVar8) + '\x01';
  return;
}

