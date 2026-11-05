
void FUN_02153454(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  
  iVar1 = FUN_0214d934(DAT_020a0e80);
  FUN_020314a0(*(undefined4 *)(DAT_02172974 + 4));
  iVar2 = FUN_02153354(0x510100,0,0x80,0x58,in_r3);
  (**(code **)(**(int **)(iVar2 + 4) + 0xdc))(*(int **)(iVar2 + 4),0xffffffff);
  FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_021534ec);
  FUN_02027834(*(undefined4 *)(iVar2 + 4),1,FUN_02153550);
  FUN_0207342c(0x7a,0);
  FUN_020314a0(*(undefined4 *)(iVar1 + 4));
  return;
}

