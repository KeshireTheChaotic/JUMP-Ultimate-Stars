
void FUN_020316e4(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x248) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x248) = param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 0x23c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if (-1 < *(char *)((int)puVar1 + 9)) {
      FUN_02027edc();
    }
  }
  return;
}

