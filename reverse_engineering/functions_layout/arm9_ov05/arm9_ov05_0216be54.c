
void FUN_0216be54(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  switch(uVar2) {
  case 4:
    goto LAB_0216be8c;
  case 5:
    goto LAB_0216be8c;
  case 6:
LAB_0216be8c:
    if ((param_2 & 1) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x34);
    }
    *(undefined4 *)(iVar1 + 0x1a4) = uVar2;
    goto switchD_0216be68_default;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  default:
    goto switchD_0216be68_default;
  }
  if ((param_2 & 2) != 0) {
    *param_3 = *(undefined4 *)(iVar1 + 0x28);
  }
  *(undefined4 *)(iVar1 + 0x1a8) = uVar2;
switchD_0216be68_default:
  switch(uVar2) {
  case 0:
    if ((param_2 & 1) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x1a8) * 4 + 0x28);
    }
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    if ((param_2 & 2) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + *(int *)(iVar1 + 0x1a4) * 4 + 0x28);
    }
    return;
  case 4:
    if ((param_2 & 2) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x44);
    }
    return;
  case 5:
    if ((param_2 & 2) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x48);
    }
    return;
  case 6:
    if ((param_2 & 2) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x4c);
    }
    return;
  case 7:
    if ((param_2 & 1) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x38);
    }
    return;
  case 8:
    if ((param_2 & 1) != 0) {
      *param_3 = *(undefined4 *)(iVar1 + 0x3c);
    }
    return;
  case 9:
    break;
  case 10:
    break;
  default:
    return;
  }
  if ((param_2 & 1) != 0) {
    *param_3 = *(undefined4 *)(iVar1 + 0x40);
  }
  return;
}

