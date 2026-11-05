
void FUN_02152894(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  thunk_FUN_02002488(*(undefined4 *)(param_1 + 0xac),0,*(int *)(param_1 + 0xa8) << 8);
  DC_StoreRange(*(undefined4 *)(param_1 + 0xac),*(int *)(param_1 + 0xa8) << 8);
  iVar1 = FUN_0200d338(0xffb0ff,param_2);
  FUN_0205b0e0(1);
  FUN_02056790(0,1,*(undefined4 *)(param_1 + 0xac),1,0,(*(uint *)(param_1 + 0xa8) & 0x1ffffff) << 6,
               0x7f,0,iVar1,0x40);
  FUN_020568a0(0,iVar1 << 2,iVar1 << 2,FUN_02152878,param_1);
  FUN_02056954(1,0,1,0);
  uVar2 = FUN_020733a8();
  FUN_020567e8(1,uVar2,0);
  FUN_0205af34();
  return;
}

