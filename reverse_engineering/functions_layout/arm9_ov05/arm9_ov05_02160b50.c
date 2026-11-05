
void FUN_02160b50(undefined4 param_1)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x801000,0x11,0,0xffffffff,0x5f);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_021506ec(param_1,iVar1);
  local_10 = 0x1f000;
  FUN_0214d494(param_1,&local_10);
  FUN_02150560(param_1,0,3);
  return;
}

