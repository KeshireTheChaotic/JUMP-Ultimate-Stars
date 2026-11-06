
void FUN_0215911c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
                    /* JUS-TAG source_file_inferred="DeckSelect.cpp" */
  uStack_10 = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (iVar1 == 1) {
    iVar1 = FUN_0203b3f4();
    FUN_0214f7f8(*(undefined4 *)(iVar1 + 0x88));
    iVar1 = FUN_0203b3f4();
    uVar2 = FUN_02158ca4(0x880010,0x880000,*(undefined4 *)(iVar1 + 0x88),0x6e);
    uStack_18 = 0;
    uStack_14 = 0xffff6000;
    FUN_021511c8(uVar2,&uStack_14,&uStack_18);
    FUN_0214e688(param_1,uVar2);
    uStack_1c = 0xe6000;
    FUN_0214e6c0(param_1,&uStack_1c);
    FUN_0214dc98(auStack_24,0xfffffff3,0,0,0x20);
    uVar2 = FUN_02150a40(0,auStack_24,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar2);
    FUN_0214f834();
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x20;
  return;
}

