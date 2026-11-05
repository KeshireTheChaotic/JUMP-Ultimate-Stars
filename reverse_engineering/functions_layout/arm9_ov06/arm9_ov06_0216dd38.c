
void FUN_0216dd38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  bool bVar3;
  
  FUN_0216de00(*(undefined4 *)(param_1 + 0x2c),0,param_3,param_4,param_4);
  iVar1 = (int)*(short *)(param_1 + 0x3a);
  if (iVar1 < -0xbf) {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  }
  else if (iVar1 < -0x3f) {
    iVar2 = *(int *)(param_1 + 0x3c);
  }
  else if (iVar1 < 0x41) {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  else if (iVar1 < 0xc1) {
    iVar2 = *(int *)(param_1 + 0x44);
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xc);
    FUN_0216de00(*(undefined4 *)(param_1 + 0x2c),1);
    iVar1 = extraout_r1;
  }
  bVar3 = *(short *)(param_1 + 0x38) < 0;
  if (bVar3) {
    iVar1 = 1;
  }
  if (!bVar3) {
    iVar1 = 0;
  }
  FUN_02083950(*(undefined4 *)(param_1 + 0x2c),iVar1);
  if (*(int *)(param_1 + 0x48) == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_02023894(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4),iVar2,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0xc) + 4) + 0x68) + 0x6c))();
  return;
}

