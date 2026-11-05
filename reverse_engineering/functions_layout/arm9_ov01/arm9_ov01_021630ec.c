
void FUN_021630ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar3 = *(int *)(param_1 + 4);
  uStack_18 = param_4;
  iVar1 = FUN_02155a9c(param_1,0x31305053);
  if (*(int *)(*(int *)(param_1 + 4) + 0x94) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214d37c();
  }
  FUN_02023894(*(undefined4 *)(iVar1 + 4),
               *(undefined4 *)(*(int *)(*(int *)(iVar2 + 4) + 0x124) * 0x30 + 0x216cf08),0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  if (param_2 == 0) {
    FUN_0207342c(0x78,3);
  }
  iStack_20 = (int)*(short *)(iVar3 + 0xa2) << 0xc;
  iStack_1c = (int)*(short *)(iVar3 + 0xa0) << 0xc;
  FUN_021511c8(param_1,&iStack_1c,&iStack_20);
  return;
}

