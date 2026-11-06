
int FUN_02166ba8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableIrqMask(1);
  iVar2 = FUN_0205e454(DAT_0216e848,param_1,param_2);
  if (iVar2 == 0) {
    FUN_02055684();
  }
  OS_EnableIrqMask(uVar1);
  return iVar2;
}

