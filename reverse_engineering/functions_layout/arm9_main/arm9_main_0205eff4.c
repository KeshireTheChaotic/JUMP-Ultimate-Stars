
void FUN_0205eff4(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined2 uVar2;
  
  sVar1 = FUN_02060810(param_2,param_1);
  *(short *)(param_1 + 8) = sVar1 + -1;
  if (*(short *)(param_1 + 8) == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 2;
  }
  *(undefined2 *)(param_1 + 10) = uVar2;
  *(code **)(param_1 + 4) = FUN_020609d0;
  return;
}

