
void FUN_0200f59c(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  bVar1 = *param_1;
  uStack_c = param_4;
  uVar2 = FUN_0200d9cc(param_1 + 2,auStack_10);
  if ((bVar1 & 0x40) == 0) {
    return;
  }
  FUN_0200d9cc(uVar2,auStack_10);
  return;
}

