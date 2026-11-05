
void FUN_02156e7c(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0xf8000;
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x50);
  piVar1[3] = 0xf8000;
  piVar1[4] = *(int *)(param_1 + 0x1c);
  piVar1[5] = *(int *)(param_1 + 0x20);
  if (*(byte *)(piVar1 + 9) != (*(byte *)(piVar1 + 9) | 1)) {
    (**(code **)(*piVar1 + 0x18))();
  }
  *(byte *)(piVar1 + 9) = *(byte *)(piVar1 + 9) | 0x31;
  return;
}

