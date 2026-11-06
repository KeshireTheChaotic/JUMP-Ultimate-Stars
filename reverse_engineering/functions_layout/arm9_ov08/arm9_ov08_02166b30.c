
void FUN_02166b30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableIrqMask(1);
  if (param_1 != 0) {
    FUN_0205e418(DAT_0216e848,param_1);
    OS_EnableIrqMask(uVar1);
  }
  return;
}

