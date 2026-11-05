
void FUN_02163464(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x38) < 0) {
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,1);
    return;
  }
  if (*(int *)(param_1 + 0x38) == 0x7ff0) {
    uVar1 = FUN_0214dd50();
    FUN_0214dd60(uVar1,0xc);
    return;
  }
  uVar1 = FUN_0214dd50();
  FUN_0214dd60(uVar1,0xd);
  return;
}

