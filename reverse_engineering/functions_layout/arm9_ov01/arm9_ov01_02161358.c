
void FUN_02161358(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [8];
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (iVar1 == 1) {
    iVar1 = FUN_0203b3f4();
    uVar2 = FUN_02160d54(0x800005,0x800000,*(undefined4 *)(iVar1 + 0x88),0x20);
    local_10 = 0xffff8000;
    FUN_0214f764(uVar2,&local_10);
    FUN_0214e688(param_1,uVar2);
    local_14 = 0x58000;
    FUN_0214e6c0(param_1,&local_14);
    FUN_0214dc98(auStack_1c,0xfffffff1,0,0,0x20);
    uVar2 = FUN_02150a40(0,auStack_1c,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar2);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x20;
  return;
}

