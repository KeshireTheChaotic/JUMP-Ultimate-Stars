
void FUN_021697d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_20;
  undefined1 auStack_1c [8];
  
  FUN_021509f8(auStack_1c,0xfffffff9,0,7,0x70);
  uVar1 = FUN_02150958(0,auStack_1c,&DAT_02093c8c);
  FUN_02020e98(param_1,uVar1);
  iVar2 = FUN_021504fc(*(undefined4 *)(*(int *)(param_1 + 4) + 0x90));
  local_20 = (*(short *)(*(int *)(iVar2 + 4) + 0xcc) + 8) * 0x1000;
  FUN_02150a10(param_1,&local_20);
  uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0xac);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x94);
  iVar2 = thunk_FUN_0201a228(0xb4,s_ALWidget_inl_0216f494,s_Create_0217186c,0x226);
  piVar4 = (int *)0x0;
  if (iVar2 != 0) {
    piVar4 = (int *)func_0x021af494(iVar2,*(undefined4 *)(param_1 + 4),uVar1,(uVar3 & 1) == 1,
                                    FUN_02169998,0);
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  func_0x021b8efc(*(undefined4 *)(param_1 + 4),*(undefined4 *)(piVar4[6] + 4));
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

