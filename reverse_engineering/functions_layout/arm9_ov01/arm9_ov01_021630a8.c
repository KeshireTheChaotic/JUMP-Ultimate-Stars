
void FUN_021630a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  iVar1 = FUN_0203b404();
  iVar1 = FUN_02162e10(0x850037,0x850000,*(undefined4 *)(iVar1 + 0x88),0x4e);
  *(dword *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  FUN_0214e688(param_1);
  uStack_10 = 0x4e000;
  FUN_0214e6c0(param_1,&uStack_10);
  return;
}

