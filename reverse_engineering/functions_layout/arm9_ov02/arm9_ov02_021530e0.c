
void FUN_021530e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  iVar1 = FUN_0203b404();
  uVar2 = FUN_0214d53c(0x11010,0x11000,*(undefined4 *)(iVar1 + 0x88),param_1,0x82);
  iVar1 = *(int *)(param_1 + 4);
  *(undefined2 *)(iVar1 + 0xbc) = 0;
  *(undefined2 *)(iVar1 + 0xbe) = 2;
  local_c = 0xffff0000;
  FUN_0214f244(uVar2,&local_c);
  return;
}

