
bool FUN_02169a58(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  iVar1 = FUN_02155620(iVar4);
  switch(*(undefined1 *)(param_1 + 0x46)) {
  case 0:
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
    *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 2;
    FUN_0207d11c(*(undefined4 *)(*(int *)(param_1 + 8) + 0x10),1);
    *(undefined1 *)(param_1 + 0x46) = 1;
    goto switchD_02169a7c_default;
  case 1:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,1);
    *(undefined1 *)(param_1 + 0x46) = 2;
    break;
  case 2:
    break;
  case 3:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,2);
    *(undefined1 *)(param_1 + 0x46) = 4;
    goto LAB_02169b60;
  case 4:
LAB_02169b60:
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
    if (*(short *)(param_1 + 0x44) < 1) {
      return false;
    }
    iVar4 = FUN_02169c48(param_1);
    if ((iVar4 == 0) && (iVar4 = FUN_02169cb0(param_1), iVar4 == 0)) {
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
    goto switchD_02169a7c_default;
  case 5:
    piVar3 = *(int **)(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar3 + 0xec))(piVar3,3);
    *(undefined1 *)(param_1 + 0x46) = 6;
    goto LAB_02169bc8;
  case 6:
LAB_02169bc8:
    iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x68) + 0xe4))();
    if (iVar2 == 1) {
      piVar3 = *(int **)(*(int *)(*(int *)(iVar4 + 0x88) + 4) + 0x68);
      (**(code **)(*piVar3 + 0xec))(piVar3,1);
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(undefined1 *)(param_1 + 0x47) = 0;
    }
  default:
    goto switchD_02169a7c_default;
  }
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
  if (*(short *)(param_1 + 0x44) < 1) {
    return false;
  }
  iVar4 = FUN_02169c48(param_1);
  if ((iVar4 == 0) && (iVar4 = FUN_02169cb0(param_1), iVar4 != 0)) {
    *(undefined1 *)(param_1 + 0x46) = 3;
  }
switchD_02169a7c_default:
  iVar4 = *(int *)(param_1 + 0x20) - *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x134);
  *(int *)(param_1 + 0x20) = iVar4;
  if (iVar4 < 1) {
    return false;
  }
  return iVar1 == 0;
}

