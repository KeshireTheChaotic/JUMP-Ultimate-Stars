
void FUN_02071dac(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined1 auStack_60 [2];
  undefined2 local_5e;
  undefined2 local_5c;
  undefined1 auStack_5a [4];
  undefined1 auStack_56 [78];
  undefined4 uStack_8;
  
  uStack_8 = in_r3;
  FUN_0205542c(auStack_5a);
  iVar1 = thunk_FUN_020024cc(&DAT_020b0d70,auStack_56,0x14);
  if (iVar1 != 0) {
    FUN_02051890(auStack_56,&DAT_020b0d70,0x14);
  }
  FUN_020554a8(auStack_60);
  DAT_020b0dac = CONCAT22(local_5e,local_5c);
  FUN_02071e24((DAT_020b0b90 & 0x100000) != 0);
  FUN_02071ea8(DAT_020b0b94);
  FUN_02071ed8(DAT_020b0b95);
  return;
}

