
void FUN_0203031c(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *local_20;
  undefined1 auStack_1c [4];
  int *local_18;
  
  local_18 = *(int **)(param_1 + 0x10);
  while( true ) {
    piVar1 = local_18;
    FUN_0203042c(&local_20,param_1 + 0x10);
    if (piVar1 == local_20) {
      return;
    }
    piVar2 = (int *)*piVar1;
    if (piVar2 == param_2) break;
    local_18 = piVar1 + 1;
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  FUN_020303a8(auStack_1c,param_1 + 0x10,local_18);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  return;
}

