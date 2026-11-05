
void FUN_021a3024(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    return;
  }
  uVar4 = 0;
  do {
    if (3 < uVar4) {
      return;
    }
    uVar1 = thunk_FUN_021766fc();
    if (((uVar4 != uVar1) && (iVar2 = FUN_02176654(uVar4), iVar2 != 0)) &&
       (((uint)*(byte *)(param_1 + 0x35) & 1 << uVar4) != 0)) {
      iVar2 = FUN_0217ef04(uVar4);
      if (iVar2 == 0) {
        return;
      }
      uVar3 = FUN_02199e10();
      iVar2 = FUN_0217ee90(uVar4,uVar3,*(undefined4 *)(param_1 + 0x38));
      if (iVar2 != 0) {
        *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & ~(byte)(1 << uVar4);
      }
    }
    uVar4 = uVar4 + 1 & 0xff;
  } while( true );
}

