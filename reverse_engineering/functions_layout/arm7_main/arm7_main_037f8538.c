
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f8538(void)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  
  iVar1 = _DAT_0380fff4;
  *(undefined2 *)(_DAT_0380fff4 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  do {
    while( true ) {
      iVar3 = FUN_037fcbcc(*(undefined4 *)(_DAT_0380fff4 + 0x308),auStack_28,0);
      if (iVar3 != 0) {
        FUN_037f8774(auStack_28);
      }
      FUN_037fbc10(0x1000010);
      *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(iVar1 + 0x10);
      if (*(short *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x12) * 2) != -1) break;
      *(short *)(iVar1 + 0x10) = *(short *)(iVar1 + 0x10) + 1;
      FUN_037fbc4c();
    }
    FUN_037fbc4c();
    uVar2 = FUN_037f86b8(*(undefined2 *)(iVar1 + 0x12));
    *(undefined2 *)(iVar1 + 0x14) = uVar2;
    (**(code **)(iVar1 + (uint)*(ushort *)(iVar1 + 0x14) * 8 + 0xc0))();
    *(undefined2 *)(iVar1 + 0x14) = 0xffff;
  } while( true );
}

