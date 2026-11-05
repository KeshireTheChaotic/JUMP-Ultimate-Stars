
void FUN_03802d18(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  if (param_2 < 0x2000000) {
    if (param_2 == 0) {
      FUN_037ff664();
    }
  }
  else {
    FUN_037fcc6c(&DAT_03809c28,param_2,0);
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

