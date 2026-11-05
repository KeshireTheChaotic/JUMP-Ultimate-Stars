
void FUN_027e06d4(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  DAT_027f97e0 = *param_2;
  DAT_027f97e4 = *(undefined4 *)(param_1 + 0x24);
  DAT_027f97e8 = *(undefined4 *)(param_1 + 0x28);
  DAT_027f97ec = 0;
  DAT_027f97f0 = 0;
  FUN_037fcd00(&DAT_027f82a0,&DAT_027f82c0,2);
  FUN_037fcd00(&DAT_027f82c8,&DAT_027f82e8,4);
  FUN_037fcd00(&DAT_027f82f8,&DAT_027f8318,4);
  FUN_037fcd00(&DAT_027f8328,&DAT_027f8348,0x20);
  *(undefined **)(param_1 + 0x10) = &DAT_027f82a0;
  *(undefined **)(param_1 + 0x14) = &DAT_027f82c8;
  DAT_027f9818 = param_2[2];
  DAT_027f981c = param_2[6];
  DAT_027f9820 = param_2[4];
  DAT_027f9824 = param_2[1];
  DAT_027f9828 = param_2[5];
  DAT_027f982c = param_2[3];
  FUN_037fceb0(&DAT_027f97c8);
  FUN_037fc66c(&DAT_0380bb6c,FUN_027e1f54,0,&DAT_027f97c8,0x400,param_2[1]);
  FUN_037fc42c(&DAT_0380bb6c);
  FUN_037fc66c(&DAT_0380bac8,FUN_027e1ff4,0,&DAT_027f93c8,0x1000,param_2[3]);
  FUN_037fc42c(&DAT_0380bac8);
  iVar1 = 0;
  do {
    (&DAT_027f97f4)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  DAT_027f9814 = 0;
  iVar1 = FUN_037fe318();
  if (iVar1 == 0) {
    FUN_037fe328();
  }
  thunk_FUN_037feb24();
  FUN_037feab8(10,FUN_027e05ec);
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined4 *)(param_1 + 0xc) = param_2[5];
  FUN_027e8a60(param_1);
  return;
}

