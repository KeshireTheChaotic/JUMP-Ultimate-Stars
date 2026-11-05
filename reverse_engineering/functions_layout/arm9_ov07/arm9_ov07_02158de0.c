
void FUN_02158de0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0216ad78;
  if (DAT_0216ad78 == (undefined4 *)0x0) {
    return;
  }
  FUN_02158d90(DAT_0216ad78,param_1,param_3,param_4,param_4);
  FUN_0208c1e4(puVar1[2] + 1);
  FUN_0208b8ec(*puVar1,param_1);
  *(undefined1 *)((int)puVar1 + 0xbe6) = 0;
  DAT_020afe98 = (int)*(char *)((int)puVar1 + 0xbe6);
  return;
}

