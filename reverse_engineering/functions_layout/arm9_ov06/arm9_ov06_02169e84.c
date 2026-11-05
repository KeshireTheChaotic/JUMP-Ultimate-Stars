
bool FUN_02169e84(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  iVar1 = FUN_02155620(iVar3);
  switch(*(undefined1 *)(param_1 + 0x46)) {
  case 0:
    FUN_02169420(*(undefined4 *)(param_1 + 8),1);
    *(undefined1 *)(param_1 + 0x46) = 1;
    goto switchD_02169ea8_default;
  case 1:
    piVar2 = *(int **)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar2 + 0xec))(piVar2,1);
    *(undefined1 *)(param_1 + 0x46) = 2;
    break;
  case 2:
    break;
  case 3:
    piVar2 = *(int **)(*(int *)(*(int *)(iVar3 + 0x88) + 4) + 0x68);
    (**(code **)(*piVar2 + 0xec))(piVar2,2);
    *(undefined1 *)(param_1 + 0x46) = 4;
    goto LAB_02169f3c;
  case 4:
LAB_02169f3c:
    iVar3 = FUN_02169fa0(param_1);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x46) = 1;
    }
  default:
    goto switchD_02169ea8_default;
  }
  iVar3 = FUN_02169fa0(param_1);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x46) = 3;
  }
switchD_02169ea8_default:
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + -1;
  if (*(short *)(param_1 + 0x44) < 1) {
    return false;
  }
  iVar3 = *(int *)(param_1 + 0x20) - *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x134);
  *(int *)(param_1 + 0x20) = iVar3;
  if (iVar3 < 1) {
    return false;
  }
  return iVar1 == 0;
}

