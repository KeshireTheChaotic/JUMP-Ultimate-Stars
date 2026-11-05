
int FUN_0215aabc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  iVar1 = FUN_0203b3e4();
  FUN_0215abdc(*(undefined4 *)(iVar1 + 0x88),0x37,0xfffffff8);
  func_0x021bac28(*(undefined4 *)(param_1 + 0x28),0x79,0,0,0,0,0,0);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x28)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  iVar1 = func_0x021bacfc(*(undefined4 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    func_0x021bac28(*(undefined4 *)(param_1 + 0x28),0x7a,0,0,0,0,0,0);
    while (iVar1 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x28)), iVar1 == 0) {
      (*DAT_020a0e18)();
    }
    iVar1 = func_0x021bacfc(*(undefined4 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      iVar2 = 1;
    }
  }
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 8) + 4),1);
  if (iVar2 == 0) {
    iVar1 = FUN_0203b3e4();
    FUN_0215abdc(*(undefined4 *)(iVar1 + 0x88),0x36,0xfffffff8);
  }
  return iVar2;
}

