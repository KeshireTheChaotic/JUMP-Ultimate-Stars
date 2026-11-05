
void FUN_021bda94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [24];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  thunk_FUN_0207400c(auStack_28,s_bin_info__021d4094);
  if (*(int *)(param_1 + 0x50) == 0) {
    thunk_FUN_020741c4(auStack_28,&DAT_021d40a0);
  }
  else {
    thunk_FUN_020741c4(auStack_28,(&PTR_DAT_0209e840)[*(int *)(param_1 + 0x50)]);
  }
  thunk_FUN_020741c4(auStack_28,&DAT_021d40a8);
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  piVar1 = (int *)FUN_020101f4(s_bin_InfoDeck_aar_021d3fdc,0);
  iVar2 = FUN_021bd4d4(auStack_28,0,0);
  *(int *)(param_1 + 4) = iVar2;
  uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x2c))(*(int **)(iVar2 + 4),0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  (**(code **)(*piVar1 + 0xc))();
  return;
}

