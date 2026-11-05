
void FUN_0214fb48(int *param_1)

{
  int iVar1;
  
  FUN_020735e4();
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  FUN_0214f29c();
  iVar1 = 0;
  do {
    if (param_1[iVar1 + 0xd] != 0) {
      FUN_02034d7c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 9] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 9] + 0xc))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  FUN_0214f108(*param_1);
  func_0x021b65cc();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*param_1 + 4) + 0xc))();
  return;
}

