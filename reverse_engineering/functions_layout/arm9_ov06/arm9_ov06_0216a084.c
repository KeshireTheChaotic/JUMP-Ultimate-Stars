
bool FUN_0216a084(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar6 = *(int *)(param_1 + 0x18);
  iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  iVar2 = FUN_02155620(iVar7);
  switch(*(undefined1 *)(param_1 + 0x46)) {
  case 0:
    bVar8 = *(char *)(iVar6 + 0x18) == '\x10';
    if (bVar8) {
      cVar1 = *(char *)(iVar6 + 0x1e0);
    }
    else {
      cVar1 = *(char *)(iVar6 + 0x1e0);
    }
    (&DAT_0217298c)[cVar1] = bVar8;
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
    *(uint *)(iVar7 + 0x34) = *(uint *)(iVar7 + 0x34) | 2;
    FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),1);
    FUN_02169420(*(undefined4 *)(param_1 + 8),1);
    *(undefined1 *)(param_1 + 0x46) = 1;
    break;
  case 1:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,1);
    *(undefined1 *)(param_1 + 0x46) = 2;
    goto LAB_0216a178;
  case 2:
LAB_0216a178:
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
    if (*(short *)(param_1 + 0x44) < 1) {
      return false;
    }
    iVar7 = FUN_0216a568(param_1);
    if (iVar7 == 0) {
      uVar4 = FUN_0216a604(param_1);
      switch(uVar4) {
      case 0:
        break;
      case 1:
        *(undefined1 *)(param_1 + 0x46) = 3;
        break;
      case 2:
        *(undefined1 *)(param_1 + 0x46) = 7;
        break;
      case 3:
        *(undefined1 *)(param_1 + 0x46) = 9;
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x46) = 0xb;
      }
    }
    break;
  case 3:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,2);
    *(undefined1 *)(param_1 + 0x46) = 4;
    goto LAB_0216a220;
  case 4:
LAB_0216a220:
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
    if (*(short *)(param_1 + 0x44) < 1) {
      return false;
    }
    iVar7 = FUN_0216a568(param_1);
    if (iVar7 == 0) {
      uVar4 = FUN_0216a604(param_1);
      switch(uVar4) {
      case 0:
        *(undefined1 *)(param_1 + 0x46) = 1;
        break;
      case 1:
        break;
      case 2:
        *(undefined1 *)(param_1 + 0x46) = 7;
        break;
      case 3:
        *(undefined1 *)(param_1 + 0x46) = 9;
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x46) = 0xb;
      }
    }
    break;
  case 5:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,6);
    *(undefined1 *)(param_1 + 0x46) = 6;
    goto LAB_0216a458;
  case 6:
LAB_0216a458:
    iVar5 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68) + 0xe4))();
    if (iVar5 == 1) {
      piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
      (**(code **)(*piVar3 + 0xec))(piVar3,1);
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(undefined1 *)(param_1 + 0x47) = 0;
    }
    break;
  case 7:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,3);
    *(undefined1 *)(param_1 + 0x46) = 8;
    goto LAB_0216a2c8;
  case 8:
LAB_0216a2c8:
    iVar7 = FUN_0216a5d0(param_1);
    if (iVar7 == 0) {
      uVar4 = FUN_0216a604(param_1);
      switch(uVar4) {
      case 0:
        *(undefined1 *)(param_1 + 0x46) = 1;
        break;
      case 1:
        *(undefined1 *)(param_1 + 0x46) = 3;
        break;
      case 2:
        break;
      case 3:
        *(undefined1 *)(param_1 + 0x46) = 9;
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x46) = 0xb;
      }
    }
    break;
  case 9:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,4);
    *(undefined1 *)(param_1 + 0x46) = 10;
    goto LAB_0216a354;
  case 10:
LAB_0216a354:
    iVar7 = FUN_0216a5d0(param_1);
    if (iVar7 == 0) {
      uVar4 = FUN_0216a604(param_1);
      switch(uVar4) {
      case 0:
        *(undefined1 *)(param_1 + 0x46) = 1;
        break;
      case 1:
        *(undefined1 *)(param_1 + 0x46) = 3;
        break;
      case 2:
        *(undefined1 *)(param_1 + 0x46) = 7;
        break;
      case 3:
        break;
      case 4:
        *(undefined1 *)(param_1 + 0x46) = 0xb;
      }
    }
    break;
  case 0xb:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar7 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,5);
    *(undefined1 *)(param_1 + 0x46) = 0xc;
    goto LAB_0216a3e0;
  case 0xc:
LAB_0216a3e0:
    uVar4 = FUN_0216a604(param_1);
    switch(uVar4) {
    case 0:
      *(undefined1 *)(param_1 + 0x46) = 1;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x46) = 3;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0x46) = 7;
      break;
    case 3:
      *(undefined1 *)(param_1 + 0x46) = 9;
    }
    break;
  case 0xd:
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
    if (*(short *)(param_1 + 0x44) < 1) {
      return false;
    }
    iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
    *(uint *)(iVar7 + 0x34) = *(uint *)(iVar7 + 0x34) & 0xfffffffd;
  }
  cVar1 = *(char *)(param_1 + 0x46);
  if ((((((cVar1 != '\r' && cVar1 != '\x01') && cVar1 != '\t') && cVar1 != '\n') && cVar1 != '\x05')
       && cVar1 != '\x06') &&
     ((((&DAT_0217298c)[*(char *)(iVar6 + 0x1e0)] == '\0' || (*(short *)(param_1 + 0x44) < 0x1b8))
      && (*(char *)(iVar6 + 0x18) == '\x10')))) {
    *(undefined1 *)(param_1 + 0x46) = 0xd;
  }
  iVar6 = *(int *)(param_1 + 0x20) - *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x134);
  *(int *)(param_1 + 0x20) = iVar6;
  if (iVar6 < 1) {
    return false;
  }
  return iVar2 == 0;
}

