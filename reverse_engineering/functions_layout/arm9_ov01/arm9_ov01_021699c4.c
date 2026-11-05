
void FUN_021699c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_02088898();
  func_0x0219cd00();
  iVar2 = thunk_FUN_0208c51c();
  if (iVar2 != 0) {
    func_0x0219cd00(uVar1);
  }
  uVar1 = FUN_02070cdc(uVar1);
  FUN_02051890(uVar1,iVar3 + 0x3a,0x14);
  *(undefined2 *)(iVar3 + 0x4e) = 0;
  FUN_02169b08(iVar3);
  *(undefined4 *)(iVar3 + 0x54) = 0xb4;
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_02169a14_1);
  return;
}

