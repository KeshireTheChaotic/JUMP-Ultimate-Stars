
void FUN_02165100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021a315c();
  if (iVar1 == 0) {
    uVar2 = FUN_0214dd50();
    FUN_0214dd60(uVar2,1);
    FUN_02165018(uVar3);
    return;
  }
  iVar1 = func_0x021a32fc();
  if (iVar1 == 0) {
    return;
  }
  func_0x021a3248();
  uVar2 = FUN_0214dd50();
  FUN_0214dd60(uVar2,0xe);
  FUN_02165018(uVar3);
  return;
}

