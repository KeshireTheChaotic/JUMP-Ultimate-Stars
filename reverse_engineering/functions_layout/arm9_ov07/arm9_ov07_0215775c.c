
void FUN_0215775c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_0203b404();
  uVar2 = FUN_021510f0(*(undefined4 *)(iVar1 + 0x88),0x8e0000,2,0x7f);
  local_14 = 0x8000;
  local_10 = 0x4a000;
  FUN_0214f218(uVar2,&local_10,&local_14);
  FUN_0214f48c(param_1,uVar2);
  local_18 = 0x7f000;
  FUN_0214f27c(param_1,&local_18);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = 0xfff40000;
  FUN_0214f240(iVar1,1);
  return;
}

