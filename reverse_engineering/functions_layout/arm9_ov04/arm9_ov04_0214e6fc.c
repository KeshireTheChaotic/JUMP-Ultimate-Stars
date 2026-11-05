
int FUN_0214e6fc(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0x100;
  local_c = 0xc0;
  iVar1 = FUN_0214ee60(*param_1,param_2,0x510000,0x14,0x70,&local_10);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xab) = 0;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0xb1) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar1 + 4),0x10);
  FUN_0214e6e4(auStack_18,0xffffffd0,0xfffffff0,0,0);
  uVar2 = FUN_0214e644(0,auStack_18,&DAT_02093c8c);
  FUN_02020e98(iVar1,uVar2);
  FUN_02023894(*(undefined4 *)(iVar1 + 4),0x510014,0);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),0x510014);
  func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),0x510015);
  return iVar1;
}

