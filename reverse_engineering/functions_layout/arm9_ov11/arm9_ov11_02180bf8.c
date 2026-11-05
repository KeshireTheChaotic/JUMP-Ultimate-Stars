
void FUN_02180bf8(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xa8) = uVar1;
  return;
}

