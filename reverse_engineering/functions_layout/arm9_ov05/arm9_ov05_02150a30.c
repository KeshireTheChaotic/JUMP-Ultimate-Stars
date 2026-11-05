
void FUN_02150a30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [8];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (iVar1 == 1) {
    FUN_021509f8(auStack_18,0xfffffff8,0,8,0x18);
    uVar2 = FUN_02150958(0,auStack_18,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar2);
    iVar1 = FUN_0203b3f4();
    iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x800000,2,0,0xc,0x8f);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_021506ec(param_1,iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x18;
  return;
}

