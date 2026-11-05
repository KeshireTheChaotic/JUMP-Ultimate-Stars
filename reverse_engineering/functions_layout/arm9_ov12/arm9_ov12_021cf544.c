
undefined1 * FUN_021cf544(void)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = FUN_02054b44();
  puVar1 = &DAT_021d7be0;
  if ((DAT_021d7bf0 == 2) && (puVar1 = (undefined1 *)0x0, DAT_021d7bec != 0)) {
    puVar1 = DAT_021d66dc;
    if (DAT_021d66e0 != 0 || DAT_021d66dc != (undefined1 *)0x0) {
      lVar4 = lVar4 - CONCAT44(DAT_021d66e0,DAT_021d66dc);
      uVar2 = (uint)lVar4;
      uVar3 = (uint)((ulonglong)lVar4 >> 0x20);
      puVar1 = (undefined1 *)(DAT_021d50dc - uVar2);
      if (DAT_021d50e0 <= uVar3 && (uint)(uVar2 <= DAT_021d50dc) <= DAT_021d50e0 - uVar3) {
        DAT_021d66dc = (undefined1 *)0x0;
        DAT_021d66e0 = 0;
        DAT_021d6710 = 0;
        DAT_021d671c = 0;
        FUN_021cf3c4();
        puVar1 = (undefined1 *)(*DAT_021d7be4)(DAT_021d6714,9,&DAT_021d6710,DAT_021d7be8);
      }
    }
  }
  return puVar1;
}

