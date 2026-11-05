
void FUN_021554ac(undefined4 param_1)

{
  undefined4 unaff_r5;
  int unaff_r6;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  FUN_0214d4c0();
  uStack0000000c = 0x60000;
  uStack00000008 = 0x80000;
  FUN_02155884(param_1,&uStack00000008,&uStack0000000c);
  uStack00000010 = 0x28;
  FUN_02151858(param_1,&uStack00000010);
  *(undefined4 *)(unaff_r6 + 0xc) = param_1;
  *(undefined4 *)(unaff_r6 + 0x10) = 0;
  *(undefined4 *)(unaff_r6 + 0x14) = 0;
  *(undefined4 *)(unaff_r6 + 4) = unaff_r5;
  *(undefined1 *)(unaff_r6 + 0x1c) = 2;
  return;
}

