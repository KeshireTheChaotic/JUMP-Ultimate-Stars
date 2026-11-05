
void FUN_0216524c(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_0200d338(uVar2,3);
  FUN_0200d338(uVar2,3);
  uVar1 = FUN_021653ac(*(undefined4 *)(iVar3 + 0x94),*(undefined4 *)(iVar3 + 0x104),uVar1,
                       extraout_r1);
  FUN_0207342c(0x78,0);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x78) + 4));
  FUN_02164a58(iVar3,uVar1,1);
  func_0x021b65e0(*(undefined4 *)(*(int *)(iVar3 + 0x78) + 4));
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x78) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x80) + 4),1);
  return;
}

