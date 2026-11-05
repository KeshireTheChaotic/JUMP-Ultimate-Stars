
int FUN_0217061c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_02170500();
  FUN_02170600(*(undefined4 *)(param_1 + 0x2c),0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
  *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) & 0xffefffff;
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
  FUN_021706b4(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar1 + 0xc),
               *(undefined4 *)(iVar1 + 0x10));
  uVar3 = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 0x100;
  FUN_021706b4(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 4),
               *(undefined4 *)(param_3 + 8));
  return param_1;
}

