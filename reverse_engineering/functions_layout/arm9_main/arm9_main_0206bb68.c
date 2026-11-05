
void FUN_0206bb68(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    param_1[0x14] = (int)param_2;
    param_1[0xd] = *param_2;
    *param_2 = param_1[8];
  }
  if (param_3 != (int *)0x0) {
    param_1[0x18] = (int)param_3;
    param_1[0x11] = *param_3;
    *param_3 = param_1[0xc];
  }
  if ((*(ushort *)((int)param_1 + 0x6e) & 2) != 0) {
    param_1[0x12] = iRam021d5164;
    iVar1 = func_0x021b3be0();
    param_1[0x13] = iVar1;
    func_0x021b70f8(param_1[8]);
    func_0x021b3bc8(param_1[0xc]);
  }
  *(undefined4 *)(*(int *)param_1[8] + 0xe0) = 0;
  FUN_0206bbd0(*(undefined4 *)(param_1[0xc] + 4),0,0,0);
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  return;
}

