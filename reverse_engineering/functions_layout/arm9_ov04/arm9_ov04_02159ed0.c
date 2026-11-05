
void FUN_02159ed0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02159900(0x3c);
  FUN_0214ce64();
  iVar1 = FUN_0214cea0();
  if (iVar1 == 2) {
    iVar1 = FUN_0214f780();
    if (iVar1 == 0) {
      uVar2 = FUN_0214ce64();
      FUN_0214ce80(uVar2,3);
    }
    else {
      uVar2 = FUN_0214ce64();
      FUN_0214ce80(uVar2,2);
    }
  }
  else {
    uVar2 = FUN_0214ce64();
    FUN_0214ce74(uVar2,4);
  }
  FUN_021597bc(uVar3);
  return;
}

