
void FUN_0216cc74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  FUN_021509f8(auStack_20,0xfffffff9,0,7,0x70);
  uVar1 = FUN_02150958(0,auStack_20,&DAT_02093c8c);
  FUN_02020e98(param_1,uVar1);
  iVar2 = FUN_021504fc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(int *)(iVar3 + 0xc) = (*(short *)(*(int *)(iVar2 + 4) + 0xcc) + 8) * 0x1000;
  FUN_02150090(iVar3,1);
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
  iVar2 = thunk_FUN_0201a228(0xb4,s_ALWidget_inl_0216f494,s_Create_02171e4c,0x226);
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)func_0x021af494(iVar2,*(undefined4 *)(param_1 + 4),uVar1,(uVar4 & 1) == 1,
                                    FUN_0216ce3c,0);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(piVar5[6] + 4));
  iVar2 = FUN_0203b3e4();
  iVar2 = FUN_0215e2d4(*(undefined4 *)(iVar2 + 0x88),0x800000,0,0,0xe,0x5f);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_021506ec(param_1,iVar2);
  iVar2 = FUN_0203b3e4();
  uVar1 = *(undefined4 *)(iVar2 + 0x88);
  iVar2 = FUN_021504fc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  iVar2 = FUN_0215e2d4(uVar1,0x800000,4,0,*(short *)(*(int *)(iVar2 + 4) + 0xce) + -0xe,0x5f);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  FUN_021506ec(param_1,iVar2);
  return;
}

