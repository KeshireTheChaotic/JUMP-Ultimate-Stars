
undefined4 FUN_0214f514(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 local_50;
  undefined4 local_44;
  undefined1 auStack_40 [44];
  
  bVar1 = false;
  local_50 = 0xffffffff;
  bVar2 = true;
  iVar7 = 0;
  iVar6 = 0;
  if ((DAT_0216cf8c == (code *)0x0) || (DAT_0216cf98 == (code *)0x0)) {
    return 0xffffffff;
  }
  iVar3 = (*DAT_0216cf8c)(0x3000);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar4 = FUN_0214fc2c(0,0,0,0x30bffe);
  if (iVar4 != 0) {
    FUN_020550a0(auStack_40);
    FUN_02054ee8(auStack_40,0x3fec42,0,0x214f88d,0x13);
    do {
      FUN_02053bd8(&DAT_0216cfac,&local_44,1);
      switch(local_44) {
      default:
        goto switchD_0214f5a0_caseD_0;
      case 4:
      case 8:
      case 0x12:
        break;
      case 5:
        if (!bVar1) {
          if (iVar6 < 8) {
            iVar6 = iVar6 + 1;
          }
          else {
            iVar7 = FUN_0214fd40(iVar3,0x40);
            iVar4 = FUN_0214fbe8();
            if (iVar4 == 0) goto switchD_0214f5a0_caseD_0;
            bVar1 = true;
          }
        }
        break;
      case 10:
        bVar2 = false;
        local_50 = 0;
        break;
      case 0x13:
        if (!bVar1) {
          if (iVar6 != 0) {
            iVar7 = FUN_0214fd40(iVar3,0x40);
          }
          iVar4 = FUN_0214fbe8();
          if (iVar4 == 0) goto switchD_0214f5a0_caseD_0;
          bVar1 = true;
        }
      }
    } while (bVar2);
    if (iVar7 == 0) {
      piVar5 = (int *)(*DAT_0216cf8c)(0x58);
    }
    else {
      piVar5 = (int *)(*DAT_0216cf8c)((iVar7 + -1) * 0x54 + 0x58);
    }
    if (piVar5 != (int *)0x0) {
      *param_1 = (int)piVar5;
      *piVar5 = iVar7;
      iVar6 = 0;
      if (0 < iVar7) {
        piVar5 = piVar5 + 1;
        iVar4 = iVar3;
        do {
          FUN_0214f8f8(iVar4,piVar5);
          iVar4 = iVar4 + 0xc0;
          piVar5 = piVar5 + 0x15;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar7);
      }
    }
switchD_0214f5a0_caseD_0:
    FUN_02054e50(auStack_40);
    do {
      iVar7 = FUN_02053bd8(&DAT_0216cfac,&local_44,0);
    } while (iVar7 == 1);
  }
  (*DAT_0216cf98)(iVar3);
  return local_50;
}

