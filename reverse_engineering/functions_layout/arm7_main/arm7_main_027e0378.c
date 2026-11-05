
bool FUN_027e0378(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_027f97f0;
  FUN_037fe788(DAT_027f97f0 + 0xe0,param_2 + 0x10,6);
  *(undefined2 *)(param_2 + 0x16) = 7;
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(iVar1 + 500);
  *(undefined2 *)(param_2 + 0x1e) = *(undefined2 *)(iVar1 + 0x1ec);
  *(undefined2 *)(param_2 + 0x1c) = *(undefined2 *)(iVar1 + 0xe6);
  if (*(int *)(iVar1 + 0x198) == 0) {
    *(undefined2 *)(param_2 + 0x20) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0;
    MIi_CpuClear16(0,param_2 + 0x24,0x50);
    *(undefined2 *)(param_2 + 0x9e) = 0;
  }
  else {
    *(undefined2 *)(param_2 + 0x20) = *(undefined2 *)(iVar1 + 0x196);
    *(undefined2 *)(param_2 + 0x22) = *(undefined2 *)(iVar1 + 0xc4);
    FUN_037fe788(iVar1 + 0x19c,param_2 + 0x24,0x50);
    *(undefined2 *)(param_2 + 0x9e) = 1;
  }
  *(undefined2 *)(param_2 + 0x74) = 1;
  *(undefined2 *)(param_2 + 0x76) = 1;
  if (*(short *)(iVar1 + 0xe6) == 1) {
    *(undefined2 *)(param_2 + 0x78) = 0;
  }
  else {
    *(undefined2 *)(param_2 + 0x78) = 0x10;
  }
  *(undefined2 *)(param_2 + 0x7a) = 10;
  if (param_1 == 0x26) {
    MIi_CpuClear16(0,param_2 + 0x7c,0x20);
  }
  else {
    MIi_CpuClear16(0,param_2 + 0x7c,8);
    MIi_CpuClear16(0xffff,param_2 + 0x84,0x18);
  }
  *(undefined2 *)(param_2 + 0x9c) = *(undefined2 *)(iVar1 + 0x1ee);
  iVar1 = FUN_027e267c(param_2);
  bVar2 = *(short *)(iVar1 + 4) == 0;
  if (!bVar2) {
    FUN_027e01a4(param_1,0x200);
  }
  return bVar2;
}

