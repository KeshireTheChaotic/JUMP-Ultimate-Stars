
void FUN_0206bc30(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 0x14] != (int *)0x0) {
      *(int *)param_1[iVar1 + 0x14] = param_1[iVar1 + 8];
      *(undefined4 *)(*(int *)param_1[iVar1 + 8] + 0xe0) = 0;
      *(undefined4 *)(*(int *)param_1[iVar1 + 8] + 0xe4) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  if ((int *)param_1[0x18] != (int *)0x0) {
    *(int *)param_1[0x18] = param_1[0xc];
  }
  if ((*(ushort *)((int)param_1 + 0x6e) & 2) != 0) {
    func_0x021b70f8(param_1[8]);
    func_0x021b3bc8(param_1[0xc]);
  }
  FUN_0206bbd0(*(undefined4 *)(param_1[0xc] + 4),0,0,0,param_4);
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  return;
}

