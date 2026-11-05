
void FUN_0206bbec(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x14] != (int *)0x0) {
      *(int *)param_1[iVar1 + 0x14] = param_1[iVar1 + 0xd];
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((int *)param_1[0x18] != (int *)0x0) {
    *(int *)param_1[0x18] = param_1[0x11];
  }
  if (param_1[0x12] != 0) {
    func_0x021b70f8();
  }
  if (param_1[0x13] != 0) {
    func_0x021b3bc8();
  }
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  return;
}

