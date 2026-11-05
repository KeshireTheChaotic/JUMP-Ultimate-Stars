
void FUN_027f7088(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_027f9850 == 0) {
    DAT_027f9850 = 1;
    DAT_027f9a28 = 1;
    FUN_027f688c();
    DAT_027f9a28 = 0;
    thunk_FUN_037feb24();
    FUN_037feab8(5,FUN_027f6f4c);
    FUN_037fcd00(&DAT_027f9854,&DAT_027f9874,4);
    FUN_037fc66c(&DAT_027f9884,FUN_027f6a50,0,&DAT_027f9a28,0x100,param_1);
    FUN_037fc42c(&DAT_027f9884);
    FUN_037fec00(0x8000);
    FUN_037fec1c(0x40,0);
    FUN_037fec1c(0x100,0x100);
    uVar1 = OS_DisableInterrupts();
    FUN_037fbd04(0x80,FUN_027f69c0);
    FUN_037fbc4c(0x80);
    OS_RestoreInterrupts(uVar1);
  }
  return;
}

