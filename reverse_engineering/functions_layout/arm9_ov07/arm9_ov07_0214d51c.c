
undefined4 FUN_0214d51c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [4];
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  uVar2 = OS_DisableInterrupts();
  uVar1 = 1 << (param_1 & 0xff);
  if (((uint)DAT_0216acea & uVar1 & 0xffff) == 0) {
    OS_RestoreInterrupts();
    uVar2 = 0;
  }
  else {
    FUN_02051890(&DAT_0216ace8,auStack_20,0xe);
    OS_RestoreInterrupts(uVar2);
    if (((uint)local_1c & uVar1 & 0xffff) == 0) {
      if (((uint)local_1a & uVar1 & 0xffff) == 0) {
        if (((uint)local_18 & uVar1 & 0xffff) == 0) {
          if (((uint)local_16 & uVar1 & 0xffff) == 0) {
            if (((uint)local_14 & uVar1 & 0xffff) == 0) {
              uVar2 = 1;
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  return uVar2;
}

