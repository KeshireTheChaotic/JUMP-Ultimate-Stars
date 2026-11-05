
void FUN_0215c5c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_02087250();
  iVar1 = FUN_0203b3e4();
  uVar2 = *(undefined4 *)(iVar1 + 0x88);
  iVar1 = FUN_0203b414(3);
  uVar2 = SelectStandby::SelectStandby_Create(*(undefined4 *)(iVar1 + 0x88),uVar2,0);
  *(undefined4 *)(param_1 + 0x2e0) = uVar2;
  iVar1 = FUN_0203b3f4();
  uVar2 = SelectStandbyBar::SelectStandbyBar_Create(*(undefined4 *)(iVar1 + 0x88),0x61,1);
  *(undefined4 *)(param_1 + 0x2e4) = uVar2;
  FUN_0215c61c(param_1);
  iVar1 = *(int *)(param_1 + 0x2e4);
  *(undefined4 *)(iVar1 + 0x38) = 0x215cb55;
  *(int *)(iVar1 + 0x50) = param_1;
  return;
}

