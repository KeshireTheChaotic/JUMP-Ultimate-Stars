
undefined1 FUN_02179534(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 == 0);
  iVar1 = FUN_02178448();
  if (uVar3 <= *(byte *)(iVar1 + 0xd)) {
    iVar1 = uVar3 << 2;
    do {
      iVar2 = FUN_02178448();
      if (param_1 == *(int *)(iVar2 + iVar1 + 0xf4)) {
        iVar1 = FUN_02178448();
        return *(undefined1 *)(iVar1 + uVar3 + 0x2c8);
      }
      iVar1 = iVar1 + 4;
      uVar3 = uVar3 + 1;
      iVar2 = FUN_02178448();
    } while ((int)uVar3 <= (int)(uint)*(byte *)(iVar2 + 0xd));
  }
  return 0xff;
}

