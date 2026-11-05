
void FUN_0214ec78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  int local_20;
  undefined4 uStack_1c;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar7 = false;
  pbVar5 = &DAT_02170dcc + *(char *)(iVar4 + 0x99) * 0x20;
  uStack_1c = param_4;
  uVar1 = FUN_0214f038(*(undefined4 *)(iVar4 + 8));
  if ((uVar1 & 1) != 0) {
    *(char *)(iVar4 + 0x9a) = *(char *)(iVar4 + 0x9a) + -1;
    if (*(char *)(iVar4 + 0x9a) < '\0') {
      *(byte *)(iVar4 + 0x9a) = *pbVar5 - 1;
    }
    FUN_0214f35c(iVar4,1);
  }
  uVar1 = FUN_0214f038(*(undefined4 *)(iVar4 + 8));
  if ((uVar1 & 2) != 0) {
    *(char *)(iVar4 + 0x9a) = *(char *)(iVar4 + 0x9a) + '\x01';
    if ((int)(*pbVar5 - 1) < (int)*(char *)(iVar4 + 0x9a)) {
      *(undefined1 *)(iVar4 + 0x9a) = 0;
    }
    FUN_0214f35c(iVar4,1);
  }
  uVar1 = (**(code **)(**(int **)(*(int *)(iVar4 + 0xc) + 4) + 0x130))();
  if ((uVar1 & 1) != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0xc) + 4) + 0x50) + 0xc);
    uVar6 = (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc & 0xff;
    FUN_0214f068(&local_20);
    uVar1 = (int)(local_20 + ((uint)(local_20 >> 0xb) >> 0x14)) >> 0xc & 0xff;
    if ((0x3f < uVar6) && (uVar6 < 0xc1)) {
      for (iVar3 = 0; iVar3 < *(char *)(iVar4 + 0x98); iVar3 = iVar3 + 1) {
        iVar2 = (int)*(short *)(iVar4 + iVar3 * 2 + 0x8c);
        if ((iVar2 + -8 <= (int)uVar1) && ((int)uVar1 <= iVar2 + 8)) {
          bVar7 = *(char *)(iVar4 + 0x9a) == iVar3;
          if (!bVar7) {
            *(char *)(iVar4 + 0x9a) = (char)iVar3;
            FUN_0214f35c(iVar4,1);
          }
          break;
        }
      }
    }
  }
  if ((!bVar7) && (uVar1 = FUN_0214ebc0(*(undefined4 *)(iVar4 + 8)), (uVar1 & 0x10) == 0)) {
    uVar1 = FUN_0214ebc0(*(undefined4 *)(iVar4 + 8));
    if ((uVar1 & 0x8020) != 0) {
      FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),FUN_0214ea40);
      uVar1 = FUN_0214ebc0(*(undefined4 *)(iVar4 + 8));
      if ((uVar1 & 0x8000) == 0) {
        FUN_0207342c(0x78,1);
      }
      else {
        FUN_0207342c(0x78,0);
      }
    }
    if (*(char *)(iVar4 + 0x9e) == '\0') {
      FUN_02073840();
      return;
    }
    return;
  }
  switch(pbVar5[*(char *)(iVar4 + 0x9a) + 2]) {
  case 0:
    FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),FUN_0214ea40);
    break;
  case 1:
    goto LAB_0214ee4c;
  case 2:
    *(char *)(iVar4 + 0x9b) = *(char *)(iVar4 + 0x9b) + '\x01';
    if ('\x03' < *(char *)(iVar4 + 0x9b)) {
      *(undefined1 *)(iVar4 + 0x9b) = 0;
    }
    FUN_0214f258(*(undefined4 *)(iVar4 + 0x54),*(char *)(iVar4 + 0x9b) + 0x520007);
    FUN_0214f258(*(undefined4 *)(iVar4 + 0x10),0x520018);
    FUN_0214f07c(iVar4);
    FUN_0207342c(0x78,0);
    break;
  case 3:
    *(char *)(iVar4 + 0x9c) = *(char *)(iVar4 + 0x9c) + '\x01';
    if ('\x01' < *(char *)(iVar4 + 0x9c)) {
      *(undefined1 *)(iVar4 + 0x9c) = 0;
    }
    FUN_0214f258(*(undefined4 *)(iVar4 + 0x58),*(char *)(iVar4 + 0x9c) + 0x52000c);
    if (*(char *)(iVar4 + 0x9c) == '\0') {
      FUN_02150e04(DAT_02172960);
    }
    else {
      FUN_02150e3c(DAT_02172960);
    }
    FUN_0207342c(0x78,0);
    break;
  case 4:
    *(char *)(iVar4 + 0x9d) = *(char *)(iVar4 + 0x9d) + '\x01';
    if ('\x02' < *(char *)(iVar4 + 0x9d)) {
      *(undefined1 *)(iVar4 + 0x9d) = 0;
    }
    FUN_0214f258(*(undefined4 *)(iVar4 + 0x5c),*(char *)(iVar4 + 0x9d) + 0x52000f);
    FUN_0214f258(*(undefined4 *)(iVar4 + 0x14),0x520018);
    FUN_0207342c(0x78,0);
    break;
  case 5:
LAB_0214ee4c:
    *(undefined4 *)(DAT_02172960 + 0x164) = 1;
    FUN_0214df14();
    FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),FUN_0214f0d8);
    break;
  case 6:
    goto LAB_0214ef7c;
  case 7:
LAB_0214ef7c:
    *(undefined4 *)(DAT_02172960 + 0x164) = 2;
    FUN_0214df14();
    break;
  case 8:
    *(undefined4 *)(DAT_02172960 + 0x164) = 3;
    FUN_0214df14();
  }
  FUN_0207342c(0x78,0);
  return;
}

