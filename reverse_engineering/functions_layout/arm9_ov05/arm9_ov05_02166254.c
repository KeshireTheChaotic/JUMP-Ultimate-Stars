
void FUN_02166254(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 local_70 [46];
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_02078aa0(local_70);
  local_70[0] = param_2;
  FUN_02076c18(*(undefined4 *)(param_1 + 0x114));
  FUN_020769cc(*(undefined4 *)(param_1 + 0x114),local_70);
  FUN_0207907c(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x114));
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),1,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
  *(undefined4 *)(param_1 + 0x128) = param_3;
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return;
}

