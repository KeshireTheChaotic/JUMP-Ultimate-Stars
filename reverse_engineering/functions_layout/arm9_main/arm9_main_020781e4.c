
void FUN_020781e4(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + param_2;
    while (0x63ff < *(int *)(param_1 + 0x5c8)) {
      iVar1 = FUN_02078328(param_1,1);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x5c8) = 0;
      }
      else {
        *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + -0x6400;
      }
    }
    if (*(char *)(param_1 + 0x5cc) <= *(char *)(param_1 + 0x5cd)) {
      *(undefined4 *)(param_1 + 0x5c8) = 0;
    }
    return;
  }
  if (*(char *)(param_1 + 0x5cf) != '\0') {
    return;
  }
  *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + param_2;
  while (*(int *)(param_1 + 0x5c8) < 0) {
    iVar1 = FUN_0207830c(param_1,1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5c8) = 0;
    }
    else {
      *(int *)(param_1 + 0x5c8) = *(int *)(param_1 + 0x5c8) + 0x6400;
    }
  }
  return;
}

