
void FUN_0215ba5c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 local_10 [4];
  int local_c;
  int local_8 [2];
  
  local_10[0] = DAT_0216a9f0;
  local_10[1] = DAT_0216a9f1;
  DAT_0216e778 = (undefined4 *)FUN_02166b8c(0x2c,4);
  FUN_02157038(&local_c,local_8);
  if (local_c == 0) {
    FUN_021620c4(DAT_0216e778 + 2);
    uVar1 = FUN_02167538(DAT_0216e778 + 2,0x20);
    *(undefined1 *)((int)DAT_0216e778 + 0x29) = uVar1;
  }
  FUN_0215b9c8();
  FUN_02154978(local_c + 9);
  if (local_8[0] == 1) {
    FUN_02154588(0x35,0xffffffff);
  }
  else {
    FUN_02154588(local_10[local_c],0xffffffff);
  }
  FUN_02154724(2);
  uVar2 = FUN_021665f8(0,0);
  *DAT_0216e778 = uVar2;
  uVar2 = FUN_02165ff4(0,0x3e);
  DAT_0216e778[1] = uVar2;
  *(ushort *)(DAT_0216e778[1] + 4) = *(ushort *)(DAT_0216e778[1] + 4) & 0xf3ff | 0xc00;
  FUN_0215b558();
  FUN_0215b5b0();
  FUN_02157088(0x215b98d);
  return;
}

