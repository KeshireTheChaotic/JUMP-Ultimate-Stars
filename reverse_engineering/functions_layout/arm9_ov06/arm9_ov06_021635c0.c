
undefined4 FUN_021635c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0203b404();
  FUN_02163548(*(undefined4 *)(iVar1 + 0x88));
  FUN_020329d4();
  iVar1 = FUN_02151294();
  uVar2 = FUN_02020d90();
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x400);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  FUN_020839c0(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  FUN_02153324();
  return 0;
}

