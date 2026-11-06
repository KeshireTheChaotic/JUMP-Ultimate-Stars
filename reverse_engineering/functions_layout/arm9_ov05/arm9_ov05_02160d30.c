
void FUN_02160d30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (uVar3 < 0xd) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar3) {
    case 0:
      func_0x021b65cc();
      if (*(int *)(iVar6 + 4) != 3) {
        FUN_021607a4(iVar6,0,1);
        return;
      }
      break;
    case 1:
      func_0x021b65cc();
      if (*(int *)(iVar6 + 4) != 3) {
        FUN_021607a4(iVar6,1,1);
        return;
      }
      break;
    case 2:
      func_0x021b65cc();
      if (*(int *)(iVar6 + 4) != 3) {
        FUN_021607a4(iVar6,2,1);
        return;
      }
      break;
    default:
      sVar1 = *(short *)(iVar6 + 0x2ae);
      if ((sVar1 == 0) || (*(short *)(iVar6 + 0x2b0) == 0)) {
        bVar5 = false;
      }
      else {
        if (*(short *)(iVar6 + 0x2b0) < sVar1) {
          *(short *)(iVar6 + 0x2b0) = *(short *)(iVar6 + 0x2b0) + -1;
          FUN_02074268(iVar6 + 0x2b7 + *(short *)(iVar6 + 0x2b0) * 2,&DAT_0217112c,1);
        }
        else {
          *(short *)(iVar6 + 0x2ae) = sVar1 + -1;
          FUN_020517fc(iVar6 + 0x2b7 + *(short *)(iVar6 + 0x2ae) * 2,0,2);
        }
        if (*(short *)(iVar6 + 0x2ae) < *(short *)(iVar6 + 0x2b0)) {
          *(short *)(iVar6 + 0x2b0) = *(short *)(iVar6 + 0x2ae);
        }
        uVar2 = FUN_0200d12c((int)*(short *)(iVar6 + 0x2b0),
                             *(undefined1 *)(*(int *)(iVar6 + 0xc) + 0xd));
        *(undefined1 *)(iVar6 + 0x2b3) = uVar2;
        bVar5 = true;
        *(undefined1 *)(iVar6 + 0x3e1) = 1;
      }
      if (bVar5) {
        func_0x021b65cc();
      }
      else {
        *(undefined4 *)(iVar6 + 8) = 1;
        FUN_021605b0(iVar6,0x6d);
      }
      FUN_0207342c(0x78,1);
      return;
    case 4:
    case 9:
      if (*(short *)(iVar6 + 0x2b0) == 0) {
        FUN_0207342c(0x78,2);
      }
      else {
        *(short *)(iVar6 + 0x2b0) = *(short *)(iVar6 + 0x2b0) + -1;
        *(undefined1 *)(iVar6 + 0x3e1) = 1;
        *(undefined1 *)(iVar6 + 0x3e3) = 1;
        FUN_0207342c(0x78,3);
      }
      func_0x021b65cc();
      return;
    case 5:
    case 10:
      if (*(short *)(iVar6 + 0x2b0) < *(short *)(iVar6 + 0x2ae)) {
        *(short *)(iVar6 + 0x2b0) = *(short *)(iVar6 + 0x2b0) + 1;
        *(undefined1 *)(iVar6 + 0x3e1) = 1;
        *(undefined1 *)(iVar6 + 0x3e4) = 1;
        FUN_0207342c(0x78,3);
      }
      else {
        FUN_0207342c(0x78,2);
      }
      func_0x021b65cc();
      return;
    case 6:
    case 0xb:
      if (*(int *)(iVar6 + 4) == 3) {
        func_0x0219c43c(iVar6 + 0x2b7);
        iVar7 = func_0x021a28d4();
        if (iVar7 == 0) {
          iVar7 = 0x36;
        }
        else if (iVar7 == 1) {
          iVar7 = 0x35;
        }
        else if (iVar7 == -1) {
          iVar7 = 0x34;
        }
        else if (iVar7 == -2) {
          iVar7 = 0x34;
        }
        else if (iVar7 == -4) {
          iVar7 = 0x46;
        }
        else {
          iVar7 = 0x34;
        }
        if (iVar7 == 0x36) {
          FUN_0207342c(0x78,0);
        }
        else {
          FUN_0207342c(0x78,2);
        }
      }
      else if (*(int *)(iVar6 + 4) == 4) {
        iVar7 = FUN_02161d6c(&DAT_02172374,&DAT_021723c0,iVar6 + 0x2b7);
        if ((iVar7 == 0) || (iVar7 = FUN_02072090(), iVar7 == -1)) {
          iVar7 = 0x76;
        }
        else {
          uVar4 = FUN_02072050();
          FUN_02051890(&DAT_02172374,uVar4,0x4c);
          uVar4 = FUN_02072070(iVar7);
          FUN_02051890(&DAT_021723c0,uVar4,0x5c);
          iVar7 = 0x75;
        }
        if (iVar7 == 0x75) {
          FUN_0207342c(0x78,0);
        }
        else {
          FUN_0207342c(0x78,2);
        }
      }
      else {
        iVar7 = 0x6c;
        FUN_0207342c(0x78,0);
      }
      *(undefined4 *)(iVar6 + 8) = 0;
      FUN_021605b0(iVar6,iVar7);
      return;
    case 7:
      func_0x021b65cc();
      if (*(int *)(iVar6 + 4) != 3) {
        FUN_021607a4(iVar6,0xffffffff,1);
      }
      break;
    case 0xc:
      *(undefined4 *)(iVar6 + 8) = 1;
      FUN_021605b0(iVar6,0x6d,param_3,param_4,param_4);
      FUN_0207342c(0x78,1);
      return;
    }
  }
  return;
}

