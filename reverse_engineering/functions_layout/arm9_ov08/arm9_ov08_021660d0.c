
void FUN_021660d0(undefined2 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = FUN_02051d14(1);
  uVar2 = FUN_02050750(*(byte *)((int)param_1 + 3) + 1,*param_1);
  if (uVar2 == *(byte *)(param_1 + 1)) {
    FUN_02055684();
  }
  *(undefined4 *)(param_1 + (uint)*(byte *)((int)param_1 + 3) * 2 + 2) = param_2;
  *(char *)((int)param_1 + 3) = (char)uVar2;
  FUN_02051d5c(uVar1);
  return;
}

