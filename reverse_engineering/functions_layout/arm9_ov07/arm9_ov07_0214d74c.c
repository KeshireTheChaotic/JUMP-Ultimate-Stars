
void FUN_0214d74c(void)

{
  undefined2 uVar1;
  int iVar2;
  
  DAT_020afe98 = 0;
  FUN_0208a49c();
  uVar1 = FUN_02089b54();
  FUN_0214ce34(&PTR_s__ChildRom_JSS2Child_srl_02168978,uVar1);
  while( true ) {
    iVar2 = FUN_0214d4f8();
    if (iVar2 == 2) {
      DAT_020a0f10 = 1;
      FUN_0208a4c4(2);
      FUN_0208a4d0(uVar1);
      return;
    }
    iVar2 = FUN_0214d4f8();
    if (iVar2 == 7) break;
    (*DAT_020a0e18)();
  }
  return;
}

