
/* WARNING: Removing unreachable block (ram,0x02178678) */

void FUN_02178250(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *unaff_r9;
  
  piVar6 = (int *)*param_1;
  if (piVar6 == (int *)0x0) {
    return;
  }
  puVar12 = (undefined4 *)piVar6[2];
  if (*piVar6 == 0) {
    FUN_02178f40();
    return;
  }
  iVar13 = *(int *)(*piVar6 + 8);
  FUN_02175628(param_1[4]);
  FUN_02175628();
  uVar2 = FUN_02175628();
  iVar3 = FUN_0217718c();
  iVar11 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
  iVar3 = FUN_02178240(uVar2);
  if (*(char *)(iVar3 + 0x1ec) != '\0') {
    return;
  }
  bVar1 = false;
  puVar7 = puVar12;
  for (iVar3 = 0; puVar7 = puVar7 + 2, iVar3 < 7; iVar3 = iVar3 + 1) {
    for (unaff_r9 = (undefined4 *)*puVar7; unaff_r9 != (undefined4 *)0x0;
        unaff_r9 = (undefined4 *)*unaff_r9) {
      if (iVar13 == unaff_r9[2]) {
        bVar1 = true;
        break;
      }
    }
    if (bVar1) break;
  }
  *(char *)((int)param_1 + 0x18a) = (char)iVar3;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 99) = 0;
  iVar3 = *(int *)(iVar13 + 0x40);
  iVar13 = puVar12[0x10];
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(iVar3 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x162) = *(undefined1 *)(iVar3 + 0x1e);
  FUN_02051890(iVar3 + 0xc,param_1 + 0x54,0x10);
  *(undefined2 *)(param_1 + 0x5f) = *(undefined2 *)(iVar13 + 0x1c);
  *(undefined1 *)((int)param_1 + 0x17e) = *(undefined1 *)(iVar13 + 0x1e);
  FUN_02051890(iVar13 + 0xc,param_1 + 0x5b,0x10);
  iVar3 = param_1[0x54];
  iVar13 = param_1[0x5b];
  if ((((iVar3 <= iVar13) && (iVar13 <= iVar3 + param_1[0x56])) ||
      ((iVar8 = iVar13 + param_1[0x5d], iVar3 <= iVar8 && (iVar8 <= iVar3 + param_1[0x56])))) ||
     (((iVar13 <= iVar3 && (iVar3 <= iVar8)) ||
      ((iVar13 <= iVar3 + param_1[0x56] && (iVar3 + param_1[0x56] <= iVar8)))))) {
    piVar6 = param_1 + 0x52;
    iVar13 = param_1[0x5b];
    iVar8 = param_1[0x54];
    puVar7 = (undefined4 *)(iVar13 + param_1[0x5d]);
    puVar12 = (undefined4 *)(iVar8 + param_1[0x56]);
    iVar3 = DAT_02183a38 + 0x3c + *(short *)(param_1 + 0x5f) * 0x20;
    if (iVar8 < iVar13) {
      iVar10 = iVar13;
    }
    else {
      iVar10 = iVar8;
    }
    if ((int)puVar12 < (int)puVar7) {
      unaff_r9 = puVar12;
    }
    iVar4 = *(int *)(iVar11 + 0xc);
    if ((int)puVar7 <= (int)puVar12) {
      unaff_r9 = puVar7;
    }
    if ((iVar4 < iVar10 + -0x400) || ((int)(unaff_r9 + 0x100) < iVar4)) {
      param_1[0x53] = *(undefined4 *)(iVar11 + 0x10);
      if (*(int *)(iVar11 + 0xc) < iVar10) {
        *piVar6 = iVar10;
      }
      else {
        *piVar6 = (int)unaff_r9;
      }
      *(undefined1 *)((int)param_1 + 0x18b) = 7;
      return;
    }
    if (*(char *)((int)param_1 + 0x18a) == '\x01') {
      if (1 < ((*(char *)((int)param_1 + 0x17e) + -1) * 0x1000000 >> 0x18 & 0xffU)) {
        *(undefined1 *)((int)param_1 + 0x18b) = 3;
        return;
      }
      param_1[0x53] = *(undefined4 *)(iVar11 + 0x10);
      uVar5 = *(uint *)(iVar3 + 8);
      if ((uVar5 & 2) == 0) {
        if ((uVar5 & 4) == 0) {
          if ((int)puVar7 - *(int *)(iVar11 + 0xc) < *(int *)(iVar11 + 0xc) - iVar13) {
            *piVar6 = (int)(puVar7 + 0x400);
          }
          else {
            *piVar6 = iVar13 + -0x1000;
          }
        }
        else {
          *piVar6 = iVar13 + -0x1000;
        }
      }
      else {
        *piVar6 = (int)(puVar7 + 0x400);
      }
      *(undefined1 *)((int)param_1 + 0x18b) = 7;
      return;
    }
    if (1 < ((*(char *)((int)param_1 + 0x162) + -1) * 0x1000000 >> 0x18 & 0xffU)) {
      uVar2 = FUN_02177c24(uVar2);
      iVar3 = FUN_02177c00(uVar2,0xb);
      if (iVar3 == 0) {
        *(undefined1 *)((int)param_1 + 0x18b) = 4;
        return;
      }
      FUN_02178f40(param_1);
      return;
    }
    uVar5 = *(uint *)(iVar3 + 8);
    if ((((uVar5 & 2) == 0) &&
        (uVar9 = *(uint *)(DAT_02183a38 + 0x3c + *(short *)(param_1 + 0x58) * 0x20 + 8),
        (uVar9 & 2) != 0)) && (iVar8 <= iVar13)) {
      if ((((uVar5 & 4) == 0) && ((uVar9 & 4) != 0)) && ((int)puVar7 <= (int)puVar12)) {
        if ((int)puVar12 - iVar4 < iVar4 - iVar8) {
          *piVar6 = (int)(puVar12 + 0x400);
        }
        else {
          *piVar6 = iVar8 + -0x1000;
        }
      }
      else {
        *piVar6 = (int)(puVar12 + 0x400);
      }
    }
    else {
      *piVar6 = iVar8 + -0x1000;
    }
    *(undefined1 *)((int)param_1 + 0x18b) = 7;
    return;
  }
  iVar8 = param_1[0x5b];
  iVar10 = DAT_02183a38 + *(short *)(param_1 + 0x5f) * 0x20;
  iVar13 = iVar8 + param_1[0x5d];
  iVar3 = param_1[0x54] + param_1[0x56];
  if (*(char *)((int)param_1 + 0x18a) == '\0') {
    param_1[0x53] = *(undefined4 *)(iVar11 + 0x10);
    if (iVar3 < iVar8) {
      param_1[0x52] = iVar8 + -0x1000;
    }
    else {
      param_1[0x52] = iVar13 + 0x1000;
    }
  }
  else if (*(char *)((int)param_1 + 0x18a) == '\x01') {
    if (((*(char *)((int)param_1 + 0x17e) + -1) * 0x1000000 >> 0x18 & 0xffU) < 2) {
      param_1[0x53] = *(undefined4 *)(iVar11 + 0x10);
      if ((*(uint *)(iVar10 + 0x44) & 2) == 0) {
        if (iVar13 - *(int *)(iVar11 + 0xc) < *(int *)(iVar11 + 0xc) - iVar8) {
          param_1[0x52] = iVar13 + 0x1000;
        }
        else {
          param_1[0x52] = iVar8 + -0x1000;
        }
      }
      else {
        param_1[0x52] = iVar13 + 0x1000;
      }
    }
    else if (iVar3 < iVar8) {
      param_1[0x52] = iVar8 + 0x1000;
    }
    else {
      param_1[0x52] = iVar13 + -0x1000;
    }
  }
  else if (iVar3 < iVar8) {
    param_1[0x52] = iVar8 + 0x1000;
  }
  else {
    param_1[0x52] = iVar13 + -0x1000;
  }
  *(undefined1 *)((int)param_1 + 0x18b) = 7;
  iVar3 = *(int *)(iVar11 + 0xc) - param_1[0x52];
  if (*(char *)((int)param_1 + 0x18a) == '\x01') {
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if (iVar3 < 0x400) {
      *(undefined1 *)((int)param_1 + 0x18b) = 3;
    }
    return;
  }
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (0x17ff < iVar3) {
    return;
  }
  if (*(char *)((int)param_1 + 0x18a) == '\0') {
    *(undefined1 *)((int)param_1 + 0x18b) = 1;
    return;
  }
  uVar2 = FUN_02177c24(uVar2);
  iVar3 = FUN_02177c00(uVar2,0xb);
  if (iVar3 == 0) {
    *(undefined1 *)((int)param_1 + 0x18b) = 4;
    return;
  }
  FUN_02178f40(param_1);
  return;
}

