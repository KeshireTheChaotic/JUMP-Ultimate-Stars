
void FUN_021696ec(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = FUN_0203b3e4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x800000,7,0x80,8,0x5f);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_021506ec(param_1,iVar1);
  local_10 = 0x5f000;
  FUN_0214d494(param_1,&local_10);
  return;
}

