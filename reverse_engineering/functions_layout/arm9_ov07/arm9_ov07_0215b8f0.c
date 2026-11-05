
void FUN_0215b8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_0203b404();
  uVar2 = FUN_021510f0(*(undefined4 *)(iVar1 + 0x88),0x8e0000,4,0x7f);
  uStack_18 = 0x8000;
  uStack_14 = 0x54000;
  FUN_0214f218(uVar2,&uStack_14,&uStack_18);
  FUN_0214f48c(param_1,uVar2);
  uStack_1c = 0x7f000;
  FUN_0214f27c(param_1,&uStack_1c);
  uStack_20 = 0xfff40000;
  FUN_0215b94c(param_1,&uStack_20);
  return;
}

