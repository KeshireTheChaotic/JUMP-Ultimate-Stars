
void FUN_02158e40(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0216ad78;
  if (DAT_0216ad78 == (undefined4 *)0x0) {
    return;
  }
  *(undefined1 *)((int)DAT_0216ad78 + 0xbe6) = 0xff;
  FUN_021598f0();
  FUN_02158d90(puVar1,param_1);
  FUN_0208ba84(*puVar1,param_1);
  return;
}

