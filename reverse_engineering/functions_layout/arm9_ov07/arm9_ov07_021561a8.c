
void FUN_021561a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar6 = *(int *)(*(int *)(iVar8 + 0xa4) + 4);
  if (*(int *)(iVar6 + 0x224) != 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02156440,iVar6,param_4,param_4);
    return;
  }
  if ((*(int *)(iVar8 + 0xb4) == 1) && (iVar6 = func_0x0219b634(), iVar6 != 0)) {
    func_0x0219af04();
  }
  if (((*(int *)(iVar8 + 0xb4) == 0) || (*(int *)(iVar8 + 0xb4) == 1)) ||
     (iVar6 = func_0x0219b620(), 0 < iVar6)) {
    uVar3 = func_0x0219b620();
    *(undefined4 *)(iVar8 + 0x18) = uVar3;
    iVar6 = *(int *)(iVar8 + 0x20);
    if (*(int *)(iVar8 + 0xb4) == 2) {
      *(undefined4 *)(iVar8 + 0xb4) = 1;
      func_0x0219b620();
      func_0x0219b564();
      func_0x021a220c();
    }
    iVar8 = 0;
    do {
      iVar4 = func_0x0219b5ac(iVar8,0);
      if (iVar4 == 0) {
        *(undefined1 *)(iVar6 + iVar8 * 0x18) = 0;
        *(undefined1 *)(iVar6 + iVar8 * 0x18 + 1) = 0;
      }
      else {
        iVar5 = iVar6 + iVar8 * 0x18;
        *(undefined1 *)(iVar6 + iVar8 * 0x18) = 1;
        *(undefined1 *)(iVar5 + 1) = 0;
        FUN_02051890(iVar4,iVar5 + 4,0x14);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    iVar4 = 0;
    iVar8 = func_0x0219b614();
    if (iVar8 == 0) {
      iVar4 = func_0x0219a400();
      iVar8 = func_0x0219d6f0(0,0x32);
      iVar4 = iVar4 + iVar8;
    }
    else {
      iVar8 = func_0x0219b0cc();
      if ((-1 < iVar8) && (iVar8 = func_0x0219b4f4(0), iVar8 != 0)) {
        iVar4 = func_0x021a21f0();
      }
    }
    if (0 < iVar4) {
      for (iVar8 = 0; iVar8 < 4; iVar8 = iVar8 + 1) {
        if (iVar4 < 1) {
          return;
        }
        puVar7 = (undefined1 *)(iVar6 + iVar8 * 0x18);
        if (*(char *)(iVar6 + iVar8 * 0x18) == '\0') {
          *puVar7 = 1;
          puVar7[1] = 1;
          iVar4 = iVar4 + -1;
        }
      }
    }
  }
  else {
    *(undefined4 *)(iVar8 + 0x18) = 0xffffffff;
    if (-1 < *(int *)(iVar8 + 0x10c)) {
      uVar2 = func_0x0219b0e8(*(int *)(iVar8 + 0x10c),iVar8 + 0x109,iVar8 + 0xb8);
      *(undefined1 *)(iVar8 + 0x108) = uVar2;
      switch(*(undefined4 *)(iVar8 + 0xb4)) {
      case 2:
        iVar6 = iVar8 + 0xb8;
        if ((*(char *)(iVar8 + 0x108) == '\0') || (iVar4 = func_0x021a1f34(iVar6,2), iVar4 == 0)) {
          func_0x0219af04();
          *(undefined4 *)(iVar8 + 0xac) = 0xffffffff;
        }
        else {
          iVar4 = func_0x021a1f68(iVar6);
          if (iVar4 == 0) {
            func_0x0219af04();
            iVar6 = func_0x021a20dc(iVar6);
            if (iVar6 < 3) {
              *(undefined4 *)(iVar8 + 0xb4) = 3;
              *(undefined1 *)(iVar8 + 0xa9) = 1;
            }
            else {
              *(undefined4 *)(iVar8 + 0xb4) = 5;
            }
          }
        }
        break;
      case 3:
        uVar3 = func_0x0219b564();
        iVar6 = func_0x021a1f34(uVar3,0);
        if (iVar6 != 0) {
          func_0x0219adf4(4);
          func_0x021a1dc4(iVar8 + 0xb8);
          func_0x0219d674();
          *(undefined4 *)(iVar8 + 0xb4) = 4;
          *(undefined1 *)(iVar8 + 0xa9) = 0;
        }
        break;
      case 4:
        if (((*(char *)(iVar8 + 0x108) == '\0') || (*(char *)(iVar8 + 0x109) == '\x04')) ||
           (iVar6 = func_0x021a1f34(iVar8 + 0xb8,2), iVar6 == 0)) {
          func_0x0219af04();
          *(undefined4 *)(iVar8 + 0xac) = 0xffffffff;
        }
        else {
          iVar6 = func_0x0219b1ec(iVar8 + 0xb8);
          if (iVar6 != 0) {
            func_0x0219b0b4(*(undefined4 *)(iVar8 + 0x10c));
            *(undefined4 *)(iVar8 + 0xb4) = 2;
            *(undefined2 *)(iVar8 + 0x110) = 0xb4;
          }
        }
        break;
      case 5:
        *(undefined1 *)(iVar8 + 0xa8) = 1;
        *(undefined4 *)(iVar8 + 0xac) = 0xffffffff;
      }
      puVar7 = *(undefined1 **)(iVar8 + 0x20);
      *puVar7 = 1;
      puVar7[1] = 0;
      FUN_02051890(iVar8 + 0xc0,puVar7 + 4,0x14);
      bVar1 = *(byte *)(iVar8 + 0x109);
      for (iVar6 = 1; (iVar6 < (int)(bVar1 + 1) && (iVar6 < 4)); iVar6 = iVar6 + 1) {
        puVar7[iVar6 * 0x18] = 1;
        puVar7[iVar6 * 0x18 + 1] = 1;
      }
      for (; iVar6 < 4; iVar6 = iVar6 + 1) {
        puVar7[iVar6 * 0x18] = 0;
      }
    }
  }
  return;
}

