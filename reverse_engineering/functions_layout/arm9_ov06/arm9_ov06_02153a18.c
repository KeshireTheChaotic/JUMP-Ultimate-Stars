
void FUN_02153a18(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iStack_18;
  
  *(undefined1 *)(param_1 + 8) = 0;
  iStack_18 = param_4;
  FUN_02028330(*(undefined4 *)(*param_1 + 4));
  *(undefined2 *)(param_1 + 7) = 0x5a;
  FUN_02023894(*(undefined4 *)(param_1[6] + 4),0x530004,0);
  (**(code **)(**(int **)(*(int *)(param_1[6] + 4) + 0x68) + 0x6c))();
  (**(code **)(**(int **)(param_1[6] + 4) + 0xd8))(*(int **)(param_1[6] + 4),1);
  FUN_02028330(*(undefined4 *)(param_1[6] + 4));
  iVar2 = FUN_02152d30(param_1[param_2 + 2]);
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(**(int **)(param_1[param_2 + 2] + 4) + 0xd8))(*(int **)(param_1[param_2 + 2] + 4),1);
  FUN_02028330(*(undefined4 *)(param_1[param_2 + 2] + 4));
  uVar1 = *(ushort *)((int)param_1 + 0x1e);
  *(ushort *)((int)param_1 + 0x1e) = uVar1 + 1;
  uVar4 = (uint)uVar1 * -0x10 + 0x80 & 0xff;
  FUN_0207342c(0x7a,1);
  iVar2 = 0;
  do {
    iVar3 = FUN_02152d30(param_1[iVar2 + 2]);
    if (iVar3 != 0) {
      iStack_18 = uVar4 << 0xc;
      FUN_021536a4(param_1[iVar2 + 2],&iStack_18);
      uVar4 = uVar4 + 0x20 & 0xff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

