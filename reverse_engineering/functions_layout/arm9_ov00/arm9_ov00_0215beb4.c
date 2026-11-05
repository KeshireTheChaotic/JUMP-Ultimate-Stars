
void FUN_0215beb4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  while (*(char *)(param_1 + 0x9c) != '\0') {
    (*DAT_020a0e18)();
  }
  while (*(char *)(param_1 + 0xf8) != '\0') {
    (*DAT_020a0e18)();
  }
  while (*(char *)(param_1 + 0x154) != '\0') {
    (*DAT_020a0e18)();
  }
  while (*(char *)(param_1 + 0x1b0) != '\0') {
    (*DAT_020a0e18)();
  }
  DAT_020a10a8 = 0;
  FUN_020282f4(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  FUN_02043264(0);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x20);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x30);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  piVar2 = *(int **)(*(int *)(param_1 + 0x44) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(param_1 + 0xa0) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  FUN_0215cb48(param_1 + 0x44);
  FUN_0215cb48(param_1 + 0xa0);
  piVar2 = *(int **)(*(int *)(param_1 + 0xfc) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  piVar2 = *(int **)(*(int *)(param_1 + 0x158) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,0);
  FUN_0215cb48(param_1 + 0xfc);
  FUN_0215cb48(param_1 + 0x158);
  FUN_020737d4();
  FUN_02073800();
  return;
}

