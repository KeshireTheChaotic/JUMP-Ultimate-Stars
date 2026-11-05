
void FUN_0215ce28(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  iVar2 = FUN_02078660(*(undefined4 *)(param_1 + 0x1b4),0,1,param_4,param_4);
  uVar5 = 0;
  do {
    bVar7 = ((uint)*(ushort *)(param_1 + 0x106) & 1 << (uVar5 & 0xff)) != 0;
    bVar8 = ((uint)*(ushort *)(param_1 + 0x106) & 0x10 << (uVar5 & 0xff)) != 0;
    bVar9 = ((uint)*(ushort *)(param_1 + 0x108) & 1 << (uVar5 & 0xff)) != 0;
    if (bVar7 || (bVar9 || bVar8)) {
      if (param_2 == 0) {
        FUN_0215fc78(*(int *)(DAT_02172960 + uVar5 * 4 + 0xdc) + 0x130,0xc);
        FUN_0215f6e4(*(undefined4 *)(DAT_02172960 + uVar5 * 4 + 0xdc),0x230017,1);
        FUN_0207342c(0x7a,0x55);
      }
      if (*(char *)(*(int *)(*(int *)(*(int *)(DAT_02172960 + uVar5 * 4 + 0xdc) + 0x1a0) + 0x174) +
                   0x19) == '\0') {
        if ((!bVar9 && !bVar8) || (bVar7)) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = 0;
      }
      FUN_0215cc04(DAT_02172960,uVar5);
      if ((*(char *)(DAT_02172960 + 200) != '\0') && (*(int *)(DAT_02172960 + 0xac) == 0)) {
        iVar4 = DAT_02172960 + uVar5 * 4;
        *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + iVar6 + 1;
      }
      bVar7 = *(char *)(DAT_02172960 + 200) != '\0';
      cVar1 = '\0';
      if (bVar7) {
        cVar1 = *(char *)(DAT_02172960 + 0xcb);
      }
      if (bVar7 && cVar1 != '\0') {
        FUN_0215f744(*(undefined4 *)(DAT_02172960 + uVar5 * 4 + 0xdc),iVar6);
      }
      if (uVar5 == 0) {
        if (param_2 == 0) {
          iVar6 = DAT_02172960 + *(char *)(param_1 + 0x1e0) * 4;
          *(int *)(iVar6 + 0x6c) = *(int *)(iVar6 + 0x6c) + 1;
        }
        else {
          iVar6 = DAT_02172960 + *(char *)(param_1 + 0x1e0) * 4;
          *(int *)(iVar6 + 0x9c) = *(int *)(iVar6 + 0x9c) + 1;
        }
        iVar6 = FUN_0215af04(*(undefined4 *)(param_1 + 0x1a8));
        if ((iVar6 != 0) || (iVar6 = FUN_0215af1c(*(undefined4 *)(param_1 + 0x1a8)), iVar6 != 0)) {
          FUN_0215aed0(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a4),0xd);
          iVar6 = DAT_02172960 + *(char *)(param_1 + 0x1e0) * 4;
          *(int *)(iVar6 + 0x8c) = *(int *)(iVar6 + 0x8c) + 1;
        }
        iVar6 = FUN_0215aeb8(*(undefined4 *)(param_1 + 0x1a8));
        if (iVar6 != 0) {
          FUN_0215aed0(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a4),0xe);
        }
        if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x150) & 0xf0) != 0 &&
            (bVar9 || bVar8)) {
          FUN_0215aed0(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a4),0xf);
        }
        if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x154) & 0x100) != 0) {
          FUN_0215aed0(*(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a4),0x10);
        }
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  *(undefined2 *)(param_1 + 0x106) = 0;
  *(undefined2 *)(param_1 + 0x108) = 0;
  FUN_0215cc04(DAT_02172960,(int)*(char *)(param_1 + 0x1e0),0xffffffff);
  FUN_0215cc2c(DAT_02172960,(int)*(char *)(param_1 + 0x1e0),0xffffffff);
  bVar7 = *(char *)(DAT_02172960 + 200) != '\0';
  cVar1 = '\0';
  if (bVar7) {
    cVar1 = *(char *)(DAT_02172960 + 0xcb);
  }
  if (bVar7 && cVar1 != '\0') {
    FUN_0215f744(param_1,2);
  }
  if (*(char *)(DAT_02172960 + 200) != '\0') {
    FUN_02153a18(*(undefined4 *)(DAT_02172960 + 0xd0),*(undefined1 *)(param_1 + 0x1e0));
  }
  if (param_2 != 0) {
    FUN_0215d1f4(param_1,iVar2 == 0,0);
    return;
  }
  if (*(int *)(DAT_02172960 + 0x154) == 0) {
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 8) + 3);
    iVar6 = FUN_0215af04(*(undefined4 *)(param_1 + 0x1a8));
    if ((iVar6 == 0) && (iVar6 = FUN_0215af1c(*(undefined4 *)(param_1 + 0x1a8)), iVar6 == 0)) {
      iVar6 = 4;
      do {
        FUN_0215d258(param_1,(&DAT_02172189)[uVar5 * 2],iVar6);
        iVar6 = iVar6 + -1;
      } while (0 < iVar6);
    }
    else {
      uVar3 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
      FUN_0215d258(param_1,(&DAT_02172188)[uVar5 * 2],uVar3);
    }
  }
  FUN_0215d1f4(param_1,iVar2 == 0,1);
  *(int *)(DAT_02172960 + 0x6c + *(char *)(param_1 + 0x1e0) * 4) =
       *(int *)(DAT_02172960 + 0x6c + *(char *)(param_1 + 0x1e0) * 4) + 1;
  return;
}

