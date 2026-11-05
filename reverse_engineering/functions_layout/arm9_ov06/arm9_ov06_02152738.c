
void FUN_02152738(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x94) + 0x5fb) == '\0') {
    FUN_02079a0c(*(undefined4 *)(param_1 + 0x98));
  }
  else {
    FUN_02079a0c(*(undefined4 *)(param_1 + 0x98),0);
  }
  if (param_2 != 0) {
    iVar2 = param_1 + 0x9c;
    for (iVar3 = *(int *)(param_1 + 0x25c); iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined2 *)(iVar2 + 0x10) = 0xffff;
      iVar2 = iVar2 + 0x1c;
    }
    return;
  }
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(iVar2 * 0x14 + param_1 + iVar3 * 4) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_02152fe8(param_1);
  return;
}

