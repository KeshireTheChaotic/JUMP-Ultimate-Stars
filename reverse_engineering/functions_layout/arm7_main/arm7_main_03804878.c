
void FUN_03804878(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_0380a4ec == 0) {
    DAT_0380a4ec = 1;
    DAT_0380a4f0 = 0;
    DAT_0380a4f4 = 5;
    FUN_03804f3c();
    FUN_027f5ea4();
    FUN_038068d0();
    FUN_0380594c();
    thunk_FUN_037feb24();
    FUN_037feab8(6,&LAB_03804484);
    FUN_037feab8(9,&LAB_03804484);
    FUN_037feab8(8,&LAB_03804484);
    FUN_037feab8(4,&LAB_03804484);
    FUN_037fcd00(&DAT_0380a79c,&DAT_0380a7bc,0x10);
    iVar1 = 0;
    do {
      FUN_037fe6f4(&DAT_0380a7fc + iVar1 * 0x18,0,0x18);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x10);
    DAT_0380a97c = 0;
    DAT_0380a984 = 0;
    DAT_0380a980 = 0;
    FUN_037fc66c(&DAT_0380a4f8,FUN_038044f4,0,&DAT_0380a79c,0x200,param_1);
    FUN_037fc42c(&DAT_0380a4f8);
  }
  return;
}

